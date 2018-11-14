/* bind.c - decode an ldap bind operation and pass it to a backend db */
/* $OpenLDAP$ */
/* This work is part of OpenLDAP Software <http://www.openldap.org/>.
 *
 * Copyright 1998-2018 The OpenLDAP Foundation.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted only as authorized by the OpenLDAP
 * Public License.
 *
 * A copy of this license is available in the file LICENSE in the
 * top-level directory of the distribution or, alternatively, at
 * <http://www.OpenLDAP.org/license.html>.
 */
/* Portions Copyright (c) 1995 Regents of the University of Michigan.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms are permitted
 * provided that this notice is preserved and that due credit is given
 * to the University of Michigan at Ann Arbor. The name of the University
 * may not be used to endorse or promote products derived from this
 * software without specific prior written permission. This software
 * is provided ``as is'' without express or implied warranty.
 */

#include "portable.h"

#include <stdio.h>

#include <ac/string.h>
#include <ac/socket.h>

#include "slap.h"

int getuid_from_displayname_cn(char* id, char* fqdn)
{
	char cmd[2048] = {0};
	char strfp[1024] = {'\0'};
	FILE* fp = NULL;
		
	//errno = 0;
	sprintf(cmd, "ldapsearch -b \"%s\" -D \"cn=Zivahldapbind,ou=Service Accounts,dc=axisb,dc=com\" -w India@2018 -H \"ldaps://10.9.80.6:636\" | grep sAMAccountName:", fqdn);
	Debug( LDAP_DEBUG_TRACE, "%s: fqdn: %s, command fired is %s\n", "getuid_from_displayname_cn", fqdn, cmd);
	
	fp = popen(cmd,"r");
	if(fp != NULL)
	{
		fread(strfp, 1, 1024, fp);
		Debug( LDAP_DEBUG_TRACE, "%s: output read as %s%s", "getuid_from_displayname_cn", strfp, "\n");
	        if(strlen(strfp))
		{
			if(strfp[strlen(strfp)-1] == '\n')
				strfp[strlen(strfp)-1] = 0;

			char *s = strstr(strfp, "sAMAccountName: ");
			if(s)
			{
				s = s + strlen("sAMAccountName: ");
				strcpy(id, s);
				return 1;
			}	
		}
		else
			return 0;

		pclose(fp);
	}
	else
		return 0;
}

int
do_bind(
    Operation	*op,
    SlapReply	*rs )
{
	BerElement *ber = op->o_ber;
	ber_int_t version;
	ber_tag_t method;
	struct berval mech = BER_BVNULL;
	struct berval dn = BER_BVNULL;
	ber_tag_t tag;
	Backend *be = NULL;

	Debug( LDAP_DEBUG_TRACE, "%s do_bind\n",
		op->o_log_prefix, 0, 0 );

	/*
	 * Force the connection to "anonymous" until bind succeeds.
	 */
	ldap_pvt_thread_mutex_lock( &op->o_conn->c_mutex );
	if ( op->o_conn->c_sasl_bind_in_progress ) {
		be = op->o_conn->c_authz_backend;
	}
	if ( !BER_BVISEMPTY( &op->o_conn->c_dn ) ) {
		/* log authorization identity demotion */
		Statslog( LDAP_DEBUG_STATS,
			"%s BIND anonymous mech=implicit ssf=0\n",
			op->o_log_prefix, 0, 0, 0, 0 );
	}
	connection2anonymous( op->o_conn );
	if ( op->o_conn->c_sasl_bind_in_progress ) {
		op->o_conn->c_authz_backend = be;
	}
	ldap_pvt_thread_mutex_unlock( &op->o_conn->c_mutex );
	if ( !BER_BVISNULL( &op->o_dn ) ) {
		/* NOTE: temporarily wasting few bytes
		 * (until bind is completed), but saving
		 * a couple of ch_free() and ch_strdup("") */ 
		op->o_dn.bv_val[0] = '\0';
		op->o_dn.bv_len = 0;
	}
	if ( !BER_BVISNULL( &op->o_ndn ) ) {
		op->o_ndn.bv_val[0] = '\0';
		op->o_ndn.bv_len = 0;
	}

	/*
	 * Parse the bind request.  It looks like this:
	 *
	 *	BindRequest ::= SEQUENCE {
	 *		version		INTEGER,		 -- version
	 *		name		DistinguishedName,	 -- dn
	 *		authentication	CHOICE {
	 *			simple		[0] OCTET STRING -- passwd
	 *			krbv42ldap	[1] OCTET STRING -- OBSOLETE
	 *			krbv42dsa	[2] OCTET STRING -- OBSOLETE
	 *			SASL		[3] SaslCredentials
	 *		}
	 *	}
	 *
	 *	SaslCredentials ::= SEQUENCE {
	 *		mechanism	    LDAPString,
	 *		credentials	    OCTET STRING OPTIONAL
	 *	}
	 */

	tag = ber_scanf( ber, "{imt" /*}*/, &version, &dn, &method );

	if ( tag == LBER_ERROR ) {
		Debug( LDAP_DEBUG_ANY, "%s do_bind: ber_scanf failed\n",
			op->o_log_prefix, 0, 0 );
		send_ldap_discon( op, rs, LDAP_PROTOCOL_ERROR, "decoding error" );
		rs->sr_err = SLAPD_DISCONNECT;
		goto cleanup;
	}

	op->o_protocol = version;
	op->orb_method = method;

	if( op->orb_method != LDAP_AUTH_SASL ) {
		tag = ber_scanf( ber, /*{*/ "m}", &op->orb_cred );

	} else {
		tag = ber_scanf( ber, "{m" /*}*/, &mech );

		if ( tag != LBER_ERROR ) {
			ber_len_t len;
			tag = ber_peek_tag( ber, &len );

			if ( tag == LDAP_TAG_LDAPCRED ) { 
				tag = ber_scanf( ber, "m", &op->orb_cred );
			} else {
				tag = LDAP_TAG_LDAPCRED;
				BER_BVZERO( &op->orb_cred );
			}

			if ( tag != LBER_ERROR ) {
				tag = ber_scanf( ber, /*{{*/ "}}" );
			}
		}
	}

	if ( tag == LBER_ERROR ) {
		Debug( LDAP_DEBUG_ANY, "%s do_bind: ber_scanf failed\n",
			op->o_log_prefix, 0, 0 );
		send_ldap_discon( op, rs, LDAP_PROTOCOL_ERROR, "decoding error" );
		rs->sr_err = SLAPD_DISCONNECT;
		goto cleanup;
	}

	if( get_ctrls( op, rs, 1 ) != LDAP_SUCCESS ) {
		Debug( LDAP_DEBUG_ANY, "%s do_bind: get_ctrls failed\n",
			op->o_log_prefix, 0, 0 );
		goto cleanup;
	} 

	/* We use the tmpmemctx here because it speeds up normalization.
	 * However, we must dup with regular malloc when storing any
	 * resulting DNs in the op or conn structures.
	 */
	rs->sr_err = dnPrettyNormal( NULL, &dn, &op->o_req_dn, &op->o_req_ndn,
		op->o_tmpmemctx );
	if ( rs->sr_err != LDAP_SUCCESS ) {
		Debug( LDAP_DEBUG_ANY, "%s do_bind: invalid dn (%s)\n",
			op->o_log_prefix, dn.bv_val, 0 );
		send_ldap_error( op, rs, LDAP_INVALID_DN_SYNTAX, "invalid DN" );
		goto cleanup;
	}

	Statslog( LDAP_DEBUG_STATS, "%s BIND dn=\"%s\" method=%ld\n",
	    op->o_log_prefix, op->o_req_dn.bv_val,
		(unsigned long) op->orb_method, 0, 0 );

	if( op->orb_method == LDAP_AUTH_SASL ) {
		Debug( LDAP_DEBUG_TRACE, "do_bind: dn (%s) SASL mech %s\n",
			op->o_req_dn.bv_val, mech.bv_val, NULL );

	} else {
		Debug( LDAP_DEBUG_TRACE,
			"do_bind: version=%ld dn=\"%s\" method=%ld\n",
			(unsigned long) version, op->o_req_dn.bv_val,
			(unsigned long) op->orb_method );
	}

	if ( version < LDAP_VERSION_MIN || version > LDAP_VERSION_MAX ) {
		Debug( LDAP_DEBUG_ANY, "%s do_bind: unknown version=%ld\n",
			op->o_log_prefix, (unsigned long) version, 0 );
		send_ldap_error( op, rs, LDAP_PROTOCOL_ERROR,
			"requested protocol version not supported" );
		goto cleanup;

	} else if (!( global_allows & SLAP_ALLOW_BIND_V2 ) &&
		version < LDAP_VERSION3 )
	{
		send_ldap_error( op, rs, LDAP_PROTOCOL_ERROR,
			"historical protocol version requested, use LDAPv3 instead" );
		goto cleanup;
	}

	/*
	 * we set connection version regardless of whether bind succeeds or not.
	 */
	ldap_pvt_thread_mutex_lock( &op->o_conn->c_mutex );
	op->o_conn->c_protocol = version;
	ldap_pvt_thread_mutex_unlock( &op->o_conn->c_mutex );

	op->orb_mech = mech;

	op->o_bd = frontendDB;
	//OpRequest* request = &(op->o_request);
	//req_bind_s* bindrequest = &(request->oq_bind);
/////////////////////HySecure OTP Validation /////////////////////////////////////////////
#if 1
	Debug( LDAP_DEBUG_TRACE, "***** My pid [%d] thread id [0x%x]\n", getpid(),pthread_self(),"");
	char otp[512] = {0};
	char uid[1024] = {0};
	short isotpinreq = -1;
	//static isotpsuccess = 1;

	strncpy(otp, op->oq_bind.rb_cred.bv_val, sizeof(otp)-1);

	char* sep = strchr(otp, '.');
	if(sep)
	{
		isotpinreq = 1;
		sep[0] = '\0';
		strcpy(op->oq_bind.rb_cred.bv_val, sep+1);
	}
	else
	{
		isotpinreq = 0;
		otp[0] = 0;
		Debug( LDAP_DEBUG_TRACE, "*****Detected NO OTP in request. My pid [%d] thread id [0x%x]\n",getpid(), pthread_self(),"");
	}

	Debug(LDAP_DEBUG_TRACE, "*****User id read as %s%s%s", op->o_req_dn.bv_val, "\n", ".");	
	strncpy(uid, op->o_req_dn.bv_val, sizeof(uid)-1);
	sep = strchr(uid, ',');
	if(sep)
		sep[0] = '\0';

	sep = strstr(uid, "cn=");
	if(sep)
	{
		sep += 3;
		strcpy(uid, sep);
	}

	Debug(LDAP_DEBUG_TRACE, "*****Hook here for Hysecure OTP auth. Credentials are Passwd [%s] OTP [%s] UID [%s]\n",
				                        op->oq_bind.rb_cred.bv_val, otp, uid);

	char adminBindCN[50]={0};

	if(!getAdminUserFromADSConfig(adminBindCN))
		Debug(LDAP_DEBUG_TRACE, "\ngetAdminBindCNFromADSConfig failed . read  value is %s %s %s\n",adminBindCN,adminBindCN,adminBindCN);
	//rs->sr_err = frontendDB->be_bind(op, rs);

	Debug(LDAP_DEBUG_TRACE, "\nread  value is %s %s %s\n",adminBindCN,adminBindCN,adminBindCN);
	//ldap_pvt_thread_mutex_lock(&op->o_conn->c_mutex);
	//if(!rs->sr_err && !strcasestr(uid, "admin") && !strcasestr(uid, "Mohit Mahajan"))
	//if(!strcasestr(op->oq_bind.rb_cred.bv_val, "NTLMSSP") && !strcasestr(uid, "admin") && !strcasestr(uid, "Mohit Mahajan") && !strcasestr(uid, "akshay b") && !strcasestr(uid, "HYWORKS ADMIN") && !strcasestr(uid, "Zivahldapbind"))
	if(!strcasestr(uid, adminBindCN))
	{
		Debug(LDAP_DEBUG_TRACE, "*****Hysecure OTP auth: Going for OTP validation of user:  Credentials are Passwd [%s] OTP [%s] UID [%s]\n",
				op->oq_bind.rb_cred.bv_val, otp, uid);
		//rs->sr_err = LDAP_INVALID_CREDENTIALS;
#if 1
/*#if 1
		char id[256] = {0};
		if(!getuid_from_displayname_cn(id, op->o_req_dn.bv_val))
		{
			Debug( LDAP_DEBUG_TRACE, "*****getuid_from_displayname_cn  failed. My pid [%d] thread id [0x%x]\n",
					getpid(), pthread_self(), "");
			rs->sr_err = LDAP_INVALID_CREDENTIALS;
			strcpy(op->oq_bind.rb_cred.bv_val, "!!Raq1ZAQ!");
			rs->sr_err = frontendDB->be_bind(op, rs);
		}
		else
		
		strcpy(uid, id);
#endif*/

		if(isotpinreq)
		{
			char* space = NULL;
			//ldap_pvt_thread_mutex_lock( &op->o_conn->c_mutex );
			if(space = strchr(uid, ' '))
				space[0] = '.';
			
			if(do_otpauth(uid, op->oq_bind.rb_cred.bv_val,otp))
			{
				Debug( LDAP_DEBUG_TRACE, "*****do_otpauth success. My pid [%d] thread id [0x%x]\n", 
						getpid(),pthread_self(), "");
				//isotpsuccess = 1;
				rs->sr_err = frontendDB->be_bind(op, rs);
			}
			else
			{
				Debug( LDAP_DEBUG_TRACE, "*****do_otpauth failed. My pid [%d] thread id [0x%x]\n", 
						getpid(), pthread_self(), "");	
				rs->sr_err = LDAP_INVALID_CREDENTIALS;
				strcpy(op->oq_bind.rb_cred.bv_val, "!!Raq1ZAQ!");
				rs->sr_err = frontendDB->be_bind(op, rs);
				//isotpsuccess = 0;
			}
			
			//ldap_pvt_thread_mutex_unlock( &op->o_conn->c_mutex );
		}
		else
		{
			char* space = NULL;
			if(space = strchr(uid, ' '))
				space[0] = '.';
			if(do_hyidauth(uid, op->oq_bind.rb_cred.bv_val))
			{
				Debug( LDAP_DEBUG_TRACE, "*****do_hyidauth success. My pid [%d] thread id [0x%x]\n", getpid(),pthread_self(), "");
				rs->sr_err = frontendDB->be_bind(op, rs);
			
			}
			else
			{
				Debug( LDAP_DEBUG_TRACE, "*****do_hyidauth failed. My pid [%d] thread id [0x%x]\n", getpid(), pthread_self(), "");	
				rs->sr_err = LDAP_INVALID_CREDENTIALS;
				strcpy(op->oq_bind.rb_cred.bv_val, "!!Raq1ZAQ!");
				rs->sr_err = frontendDB->be_bind(op, rs);
			}
			//isotpsuccess = 0;
		}
#endif
	}
	else
	{
		Debug( LDAP_DEBUG_TRACE, "*****bind failed or request is admin bind. My pid [%d] thread id [0x%x]\n", 
			getpid(),pthread_self(), "");
		rs->sr_err = frontendDB->be_bind(op, rs);
	}

	Debug( LDAP_DEBUG_TRACE, "*****Reply type %d, tag %d, msgid %d\n", rs->sr_type, rs->sr_tag, rs->sr_msgid);
	Debug( LDAP_DEBUG_TRACE, "*****Reply err %d, matched %d, text %d\n", rs->sr_err, rs->sr_matched, rs->sr_text);
	Debug( LDAP_DEBUG_TRACE, "*****Reply sr_flags %d\n",rs->sr_flags,"","");

	//ldap_pvt_thread_mutex_unlock(&op->o_conn->c_mutex);
/////////////////////OTP Validation END//////////////////////////////////////////////////////////
#endif
	//if(!isotpsuccess)
	//	rs->sr_err = LDAP_INVALID_CREDENTIALS;

	Debug( LDAP_DEBUG_TRACE, "*****Bind returned %d\n", rs->sr_err, "" ,"");

cleanup:
	if(rs->sr_err == LDAP_SUCCESS) 
	{
		if(op->orb_method != LDAP_AUTH_SASL) 
		{
			ber_dupbv( &op->o_conn->c_authmech, &mech );
		}
		
		op->o_conn->c_authtype = op->orb_method;
	}

	if( !BER_BVISNULL( &op->o_req_dn ) ) {
		slap_sl_free( op->o_req_dn.bv_val, op->o_tmpmemctx );
		BER_BVZERO( &op->o_req_dn );
	}
	if( !BER_BVISNULL( &op->o_req_ndn ) ) {
		slap_sl_free( op->o_req_ndn.bv_val, op->o_tmpmemctx );
		BER_BVZERO( &op->o_req_ndn );
	}

	return rs->sr_err;
}

int
fe_op_bind( Operation *op, SlapReply *rs )
{
	BackendDB	*bd = op->o_bd;

	/* check for inappropriate controls */
	if( get_manageDSAit( op ) == SLAP_CONTROL_CRITICAL ) {
		send_ldap_error( op, rs,
			LDAP_UNAVAILABLE_CRITICAL_EXTENSION,
			"manageDSAit control inappropriate" );
		goto cleanup;
	}

	if ( op->orb_method == LDAP_AUTH_SASL ) {
		if ( op->o_protocol < LDAP_VERSION3 ) {
			Debug( LDAP_DEBUG_ANY, "do_bind: sasl with LDAPv%ld\n",
				(unsigned long)op->o_protocol, 0, 0 );
			send_ldap_discon( op, rs,
				LDAP_PROTOCOL_ERROR, "SASL bind requires LDAPv3" );
			rs->sr_err = SLAPD_DISCONNECT;
			goto cleanup;
		}

		if( BER_BVISNULL( &op->orb_mech ) || BER_BVISEMPTY( &op->orb_mech ) ) {
			Debug( LDAP_DEBUG_ANY,
				"do_bind: no sasl mechanism provided\n",
				0, 0, 0 );
			send_ldap_error( op, rs, LDAP_AUTH_METHOD_NOT_SUPPORTED,
				"no SASL mechanism provided" );
			goto cleanup;
		}

		/* check restrictions */
		if( backend_check_restrictions( op, rs, &op->orb_mech ) != LDAP_SUCCESS ) {
			send_ldap_result( op, rs );
			goto cleanup;
		}

		ldap_pvt_thread_mutex_lock( &op->o_conn->c_mutex );
		if ( op->o_conn->c_sasl_bind_in_progress ) {
			if( !bvmatch( &op->o_conn->c_sasl_bind_mech, &op->orb_mech ) ) {
				/* mechanism changed between bind steps */
				slap_sasl_reset(op->o_conn);
			}
		} else {
			ber_dupbv(&op->o_conn->c_sasl_bind_mech, &op->orb_mech);
		}

		/* Set the bindop for the benefit of in-directory SASL lookups */
		op->o_conn->c_sasl_bindop = op;

		ldap_pvt_thread_mutex_unlock( &op->o_conn->c_mutex );

		rs->sr_err = slap_sasl_bind( op, rs );

		goto cleanup;

	} else {
		/* Not SASL, cancel any in-progress bind */
		ldap_pvt_thread_mutex_lock( &op->o_conn->c_mutex );

		if ( !BER_BVISNULL( &op->o_conn->c_sasl_bind_mech ) ) {
			free( op->o_conn->c_sasl_bind_mech.bv_val );
			BER_BVZERO( &op->o_conn->c_sasl_bind_mech );
		}
		op->o_conn->c_sasl_bind_in_progress = 0;

		slap_sasl_reset( op->o_conn );
		ldap_pvt_thread_mutex_unlock( &op->o_conn->c_mutex );
	}

	if ( op->orb_method == LDAP_AUTH_SIMPLE ) {
		BER_BVSTR( &op->orb_mech, "SIMPLE" );
		/* accept "anonymous" binds */
		if ( BER_BVISEMPTY( &op->orb_cred ) || BER_BVISEMPTY( &op->o_req_ndn ) ) {
			rs->sr_err = LDAP_SUCCESS;

			if( !BER_BVISEMPTY( &op->orb_cred ) &&
				!( global_allows & SLAP_ALLOW_BIND_ANON_CRED ))
			{
				/* cred is not empty, disallow */
				rs->sr_err = LDAP_INVALID_CREDENTIALS;

			} else if ( !BER_BVISEMPTY( &op->o_req_ndn ) &&
				!( global_allows & SLAP_ALLOW_BIND_ANON_DN ))
			{
				/* DN is not empty, disallow */
				rs->sr_err = LDAP_UNWILLING_TO_PERFORM;
				rs->sr_text =
					"unauthenticated bind (DN with no password) disallowed";

			} else if ( global_disallows & SLAP_DISALLOW_BIND_ANON ) {
				/* disallow */
				rs->sr_err = LDAP_INAPPROPRIATE_AUTH;
				rs->sr_text = "anonymous bind disallowed";

			} else {
				backend_check_restrictions( op, rs, &op->orb_mech );
			}

			/*
			 * we already forced connection to "anonymous",
			 * just need to send success
			 */
			send_ldap_result( op, rs );
			Debug( LDAP_DEBUG_TRACE, "do_bind: v%d anonymous bind\n",
				op->o_protocol, 0, 0 );
			goto cleanup;

		} else if ( global_disallows & SLAP_DISALLOW_BIND_SIMPLE ) {
			/* disallow simple authentication */
			rs->sr_err = LDAP_UNWILLING_TO_PERFORM;
			rs->sr_text = "unwilling to perform simple authentication";

			send_ldap_result( op, rs );
			Debug( LDAP_DEBUG_TRACE,
				"do_bind: v%d simple bind(%s) disallowed\n",
				op->o_protocol, op->o_req_ndn.bv_val, 0 );
			goto cleanup;
		}

	} else {
		rs->sr_err = LDAP_AUTH_METHOD_NOT_SUPPORTED;
		rs->sr_text = "unknown authentication method";

		send_ldap_result( op, rs );
		Debug( LDAP_DEBUG_TRACE,
			"do_bind: v%d unknown authentication method (%d)\n",
			op->o_protocol, op->orb_method, 0 );
		goto cleanup;
	}

	/*
	 * We could be serving multiple database backends.  Select the
	 * appropriate one, or send a referral to our "referral server"
	 * if we don't hold it.
	 */

	if ( (op->o_bd = select_backend( &op->o_req_ndn, 0 )) == NULL ) {
		/* don't return referral for bind requests */
		/* noSuchObject is not allowed to be returned by bind */
		rs->sr_err = LDAP_INVALID_CREDENTIALS;
		op->o_bd = bd;
		send_ldap_result( op, rs );
		goto cleanup;
	}

	/* check restrictions */
	if( backend_check_restrictions( op, rs, NULL ) != LDAP_SUCCESS ) {
		send_ldap_result( op, rs );
		goto cleanup;
	}

	if( op->o_bd->be_bind ) {
		op->o_conn->c_authz_cookie = NULL;

		rs->sr_err = (op->o_bd->be_bind)( op, rs );

		if ( rs->sr_err == 0 ) {
			(void)fe_op_bind_success( op, rs );

		} else if ( !BER_BVISNULL( &op->orb_edn ) ) {
			free( op->orb_edn.bv_val );
			BER_BVZERO( &op->orb_edn );
		}

	} else {
		send_ldap_error( op, rs, LDAP_UNWILLING_TO_PERFORM,
			"operation not supported within naming context" );
	}

cleanup:;
	op->o_bd = bd;
	return rs->sr_err;
}

int
fe_op_bind_success( Operation *op, SlapReply *rs )
{
	ldap_pvt_thread_mutex_lock( &op->o_conn->c_mutex );

	if( op->o_conn->c_authz_backend == NULL ) {
		op->o_conn->c_authz_backend = op->o_bd;
	}

	/* be_bind returns regular/global edn */
	if( !BER_BVISEMPTY( &op->orb_edn ) ) {
		op->o_conn->c_dn = op->orb_edn;
	} else {
		ber_dupbv(&op->o_conn->c_dn, &op->o_req_dn);
	}

	ber_dupbv( &op->o_conn->c_ndn, &op->o_req_ndn );

	/* op->o_conn->c_sb may be 0 for internal operations */
	if( !BER_BVISEMPTY( &op->o_conn->c_dn ) && op->o_conn->c_sb != 0 ) {
		ber_len_t max = sockbuf_max_incoming_auth;
		ber_sockbuf_ctrl( op->o_conn->c_sb,
			LBER_SB_OPT_SET_MAX_INCOMING, &max );
	}

	/* log authorization identity */
	Statslog( LDAP_DEBUG_STATS,
		"%s BIND dn=\"%s\" mech=%s ssf=0\n",
		op->o_log_prefix,
		op->o_conn->c_dn.bv_val, op->orb_mech.bv_val, 0, 0 );

	Debug( LDAP_DEBUG_TRACE,
		"do_bind: v%d bind: \"%s\" to \"%s\"\n",
		op->o_protocol, op->o_req_dn.bv_val, op->o_conn->c_dn.bv_val );

	ldap_pvt_thread_mutex_unlock( &op->o_conn->c_mutex );

	/* send this here to avoid a race condition */
	send_ldap_result( op, rs );

	return LDAP_SUCCESS;
}
