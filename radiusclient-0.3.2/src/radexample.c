/*
 * $Id: radexample.c,v 1.1 1999/02/09 14:59:14 lf Exp $
 *
 * Copyright (C) 1995,1996,1997 Lars Fenneberg
 *
 * See the file COPYRIGHT for the respective terms and conditions. 
 * If the file is missing contact me at lf@elemental.net 
 * and I'll send you a copy.
 *
 */


static char	rcsid[] =
		"$Id: radexample.c,v 1.1 1999/02/09 14:59:14 lf Exp $";

#include	<config.h>
#include	<includes.h>
#include	<radiusclient.h>
#include	<pathnames.h>

static char *pname = NULL;

int
main (int argc, char **argv)
{
	int             result;
	char		username[128];
	char            passwd[AUTH_PASS_LEN + 1];
	VALUE_PAIR 	*send, *received;
	UINT4		service;
	char 		msg[4096], username_realm[256];
	char		*default_realm = rc_conf_str("default_realm");

	pname = (pname = strrchr(argv[0],'/'))?pname+1:argv[0];

	rc_openlog(pname);

	if (rc_read_config(RC_CONFIG_FILE) != 0)
		return(ERROR_RC);
	
	if (rc_read_dictionary(rc_conf_str("dictionary")) != 0)
		return(ERROR_RC);

	strncpy(username, rc_getstr ("login: ",1), sizeof(username));
	strncpy (passwd, rc_getstr("Password: ",0), sizeof (passwd));		

	send = NULL;

	/*
	 * Fill in User-Name
	 */

	strncpy(username_realm, username, sizeof(username_realm));

	/* Append default realm */
	if ((strchr(username_realm, '@') == NULL) && default_realm &&
	    (*default_realm != '\0'))
	{
		strncat(username_realm, "@", sizeof(username_realm));
		strncat(username_realm, default_realm, sizeof(username_realm));
	} 

	if (rc_avpair_add(&send, PW_USER_NAME, username_realm, 0) == NULL)
		return(ERROR_RC);
	
	/*
	 * Fill in User-Password
	 */
	 
	if (rc_avpair_add(&send, PW_USER_PASSWORD, passwd, 0) == NULL)
		return (ERROR_RC);

	/*
	 * Fill in Service-Type
	 */
	
	service = PW_AUTHENTICATE_ONLY;
	if (rc_avpair_add(&send, PW_SERVICE_TYPE, &service, 0) == NULL)
		return (ERROR_RC);	
	
	result = rc_auth(0, send, &received, msg);
	
	if (result == OK_RC)
	{
		fprintf(stderr, "\"%s\" RADIUS Authentication OK\n", username);
	}
	else
	{
		fprintf(stderr, "\"%s\" RADIUS Authentication failure (RC=%i)\n", username, result);
	}
	
	return result;
}