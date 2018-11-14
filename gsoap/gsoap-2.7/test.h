/* test.h
   Generated by wsdl2h 1.2.17 from http://192.168.1.119:8890/licenseserverservice.svc?wsdl and WS/WS-typemap.dat
   2010-08-11 10:02:58 GMT

   DO NOT INCLUDE THIS FILE DIRECTLY INTO YOUR PROJECT BUILDS
   USE THE soapcpp2-GENERATED SOURCE CODE FILES FOR YOUR PROJECT BUILDS

   gSOAP XML Web services tools.
   Copyright (C) 2001-2010 Robert van Engelen, Genivia Inc. All Rights Reserved.
   Part of this software is released under one of the following licenses:
   GPL or Genivia's license for commercial use.
*/

/** @page page_notes Usage Notes

NOTE:

 - Run soapcpp2 on test.h to generate the SOAP/XML processing logic.
   Use soapcpp2 option -I to specify paths for #import
   To build with STL, 'stlvector.h' is imported from 'import' dir in package.
   Use soapcpp2 option -i to generate improved proxy and server classes.
 - Use wsdl2h options -c and -s to generate pure C code or C++ code without STL.
 - Use 'typemap.dat' to control namespace bindings and type mappings.
   It is strongly recommended to customize the names of the namespace prefixes
   generated by wsdl2h. To do so, modify the prefix bindings in the Namespaces
   section below and add the modified lines to 'typemap.dat' to rerun wsdl2h.
 - Use Doxygen (www.doxygen.org) on this file to generate documentation.
 - Use wsdl2h options -nname and -Nname to globally rename the prefix 'ns'.
 - Use wsdl2h option -d to enable DOM support for xsd:anyType.
 - Use wsdl2h option -g to auto-generate readers and writers for root elements.
 - Struct/class members serialized as XML attributes are annotated with a '@'.
 - Struct/class members that have a special role are annotated with a '$'.

WARNING:

   DO NOT INCLUDE THIS FILE DIRECTLY INTO YOUR PROJECT BUILDS.
   USE THE SOURCE CODE FILES GENERATED BY soapcpp2 FOR YOUR PROJECT BUILDS:
   THE soapStub.h FILE CONTAINS THIS CONTENT WITHOUT ANNOTATIONS.

LICENSE:

@verbatim
--------------------------------------------------------------------------------
gSOAP XML Web services tools
Copyright (C) 2000-2010, Robert van Engelen, Genivia Inc. All Rights Reserved.

This software is released under one of the following two licenses:
1) GPL or 2) Genivia's license for commercial use.
--------------------------------------------------------------------------------
1) GPL license.

This program is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free Software
Foundation; either version 2 of the License, or (at your option) any later
version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with
this program; if not, write to the Free Software Foundation, Inc., 59 Temple
Place, Suite 330, Boston, MA 02111-1307 USA

Author contact information:
engelen@genivia.com / engelen@acm.org
--------------------------------------------------------------------------------
2) A commercial-use license is available from Genivia, Inc., contact@genivia.com
--------------------------------------------------------------------------------
@endverbatim

*/


//gsoapopt w

/******************************************************************************\
 *                                                                            *
 * Definitions                                                                *
 *   http://tempuri.org/                                                      *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Import                                                                     *
 *                                                                            *
\******************************************************************************/


// STL vector containers (use option -s to remove STL dependency)
#import "stlvector.h"

/******************************************************************************\
 *                                                                            *
 * Schema Namespaces                                                          *
 *                                                                            *
\******************************************************************************/

// This service uses SOAP 1.2 namespaces:
//gsoap SOAP-ENV schema namespace:	http://www.w3.org/2003/05/soap-envelope
//gsoap SOAP-ENC schema namespace:	http://www.w3.org/2003/05/soap-encoding

/* NOTE:

It is strongly recommended to customize the names of the namespace prefixes
generated by wsdl2h. To do so, modify the prefix bindings below and add the
modified lines to typemap.dat to rerun wsdl2h:

ns1 = "http://tempuri.org/"
ns2 = "http://tempuri.org/Imports"
ns3 = "http://schemas.microsoft.com/2003/10/Serialization/"

*/

#define SOAP_NAMESPACE_OF_ns2	"http://tempuri.org/Imports"
//gsoap ns2   schema namespace:	http://tempuri.org/Imports
//gsoap ns2   schema form:	unqualified

#define SOAP_NAMESPACE_OF_ns1	"http://tempuri.org/"
//gsoap ns1   schema namespace:	http://tempuri.org/
//gsoap ns1   schema elementForm:	qualified
//gsoap ns1   schema attributeForm:	unqualified

#define SOAP_NAMESPACE_OF_ns3	"http://schemas.microsoft.com/2003/10/Serialization/"
//gsoap ns3   schema namespace:	http://schemas.microsoft.com/2003/10/Serialization/
//gsoap ns3   schema form:	qualified
class xsd__anyType { _XML __item; struct soap *soap; };

/******************************************************************************\
 *                                                                            *
 * Built-in Schema Types and Top-Level Elements and Attributes                *
 *                                                                            *
\******************************************************************************/


/// Primitive built-in type "xs:ID"
typedef std::string xsd__ID;

/// Class wrapper for built-in type "xs:ID" derived from xsd__anyType
/// Use soap_type() == SOAP_TYPE_xsd__ID_ to check runtime type (see soapStub.h)
class xsd__ID_ : public xsd__anyType
{ public:
    xsd__ID                              __item;                       
};

/// Primitive built-in type "xs:IDREF"
typedef std::string xsd__IDREF;

/// Class wrapper for built-in type "xs:IDREF" derived from xsd__anyType
/// Use soap_type() == SOAP_TYPE_xsd__IDREF_ to check runtime type (see soapStub.h)
class xsd__IDREF_ : public xsd__anyType
{ public:
    xsd__IDREF                           __item;                       
};

/// Built-in type "xs:QName".
typedef std::string xsd__QName;

/// Class wrapper for built-in type "xs:QName" derived from xsd__anyType
/// Use soap_type() == SOAP_TYPE_xsd__QName_ to check runtime type (see soapStub.h)
class xsd__QName_ : public xsd__anyType
{ public:
    xsd__QName                           __item;                       
};

/// Primitive built-in type "xs:anyURI"
typedef std::string xsd__anyURI;

/// Class wrapper for built-in type "xs:anyURI" derived from xsd__anyType
/// Use soap_type() == SOAP_TYPE_xsd__anyURI_ to check runtime type (see soapStub.h)
class xsd__anyURI_ : public xsd__anyType
{ public:
    xsd__anyURI                          __item;                       
};

/// Built-in type "xs:base64Binary".
class xsd__base64Binary
{	unsigned char *__ptr;
	int __size;
	char *id, *type, *options; // NOTE: for DIME and MTOM XOP attachments only
	struct soap *soap;
};

/// Class wrapper for built-in type "xs:base64Binary" derived from xsd__anyType
/// Use soap_type() == SOAP_TYPE_xsd__base64Binary_ to check runtime type (see soapStub.h)
class xsd__base64Binary_ : public xsd__anyType
{ public:
    xsd__base64Binary                    __item;                       
};

/// Class wrapper for built-in type "xs:boolean" derived from xsd__anyType
/// Use soap_type() == SOAP_TYPE_xsd__boolean to check runtime type (see soapStub.h)
class xsd__boolean : public xsd__anyType
{ public:
    bool                                 __item;                       
};

/// Built-in type "xs:byte".
typedef char xsd__byte;

/// Class wrapper for built-in type "xs:byte" derived from xsd__anyType
/// Use soap_type() == SOAP_TYPE_xsd__byte_ to check runtime type (see soapStub.h)
class xsd__byte_ : public xsd__anyType
{ public:
    xsd__byte                            __item;                       
};

/// Class wrapper for built-in type "xs:dateTime" derived from xsd__anyType
/// Use soap_type() == SOAP_TYPE_xsd__dateTime to check runtime type (see soapStub.h)
class xsd__dateTime : public xsd__anyType
{ public:
    time_t                               __item;                       
};

/// Primitive built-in type "xs:decimal"
typedef std::string xsd__decimal;

/// Class wrapper for built-in type "xs:decimal" derived from xsd__anyType
/// Use soap_type() == SOAP_TYPE_xsd__decimal_ to check runtime type (see soapStub.h)
class xsd__decimal_ : public xsd__anyType
{ public:
    xsd__decimal                         __item;                       
};

/// Class wrapper for built-in type "xs:double" derived from xsd__anyType
/// Use soap_type() == SOAP_TYPE_xsd__double to check runtime type (see soapStub.h)
class xsd__double : public xsd__anyType
{ public:
    double                               __item;                       
};

/// Primitive built-in type "xs:duration"
typedef std::string xsd__duration;

/// Class wrapper for built-in type "xs:duration" derived from xsd__anyType
/// Use soap_type() == SOAP_TYPE_xsd__duration_ to check runtime type (see soapStub.h)
class xsd__duration_ : public xsd__anyType
{ public:
    xsd__duration                        __item;                       
};

/// Class wrapper for built-in type "xs:float" derived from xsd__anyType
/// Use soap_type() == SOAP_TYPE_xsd__float to check runtime type (see soapStub.h)
class xsd__float : public xsd__anyType
{ public:
    float                                __item;                       
};

/// Class wrapper for built-in type "xs:int" derived from xsd__anyType
/// Use soap_type() == SOAP_TYPE_xsd__int to check runtime type (see soapStub.h)
class xsd__int : public xsd__anyType
{ public:
    int                                  __item;                       
};

/// Class wrapper for built-in type "xs:long" derived from xsd__anyType
/// Use soap_type() == SOAP_TYPE_xsd__long to check runtime type (see soapStub.h)
class xsd__long : public xsd__anyType
{ public:
    LONG64                               __item;                       
};

/// Class wrapper for built-in type "xs:short" derived from xsd__anyType
/// Use soap_type() == SOAP_TYPE_xsd__short to check runtime type (see soapStub.h)
class xsd__short : public xsd__anyType
{ public:
    short                                __item;                       
};

/// Class wrapper for built-in type "xs:string" derived from xsd__anyType
/// Use soap_type() == SOAP_TYPE_xsd__string to check runtime type (see soapStub.h)
class xsd__string : public xsd__anyType
{ public:
    std::string                          __item;                       
};

/// Built-in type "xs:unsignedByte".
typedef unsigned char xsd__unsignedByte;

/// Class wrapper for built-in type "xs:unsignedByte" derived from xsd__anyType
/// Use soap_type() == SOAP_TYPE_xsd__unsignedByte_ to check runtime type (see soapStub.h)
class xsd__unsignedByte_ : public xsd__anyType
{ public:
    xsd__unsignedByte                    __item;                       
};

/// Class wrapper for built-in type "xs:unsignedInt" derived from xsd__anyType
/// Use soap_type() == SOAP_TYPE_xsd__unsignedInt to check runtime type (see soapStub.h)
class xsd__unsignedInt : public xsd__anyType
{ public:
    unsigned int                         __item;                       
};

/// Class wrapper for built-in type "xs:unsignedLong" derived from xsd__anyType
/// Use soap_type() == SOAP_TYPE_xsd__unsignedLong to check runtime type (see soapStub.h)
class xsd__unsignedLong : public xsd__anyType
{ public:
    ULONG64                              __item;                       
};

/// Class wrapper for built-in type "xs:unsignedShort" derived from xsd__anyType
/// Use soap_type() == SOAP_TYPE_xsd__unsignedShort to check runtime type (see soapStub.h)
class xsd__unsignedShort : public xsd__anyType
{ public:
    unsigned short                       __item;                       
};

/******************************************************************************\
 *                                                                            *
 * Forward Declarations                                                       *
 *                                                                            *
\******************************************************************************/



//  Forward declaration of class _ns1__CheckLogin.
class _ns1__CheckLogin;

//  Forward declaration of class _ns1__CheckLoginResponse.
class _ns1__CheckLoginResponse;

/******************************************************************************\
 *                                                                            *
 * Schema Types and Top-Level Elements and Attributes                         *
 *   http://tempuri.org/Imports                                               *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Schema Types and Top-Level Elements and Attributes                         *
 *   http://tempuri.org/                                                      *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Schema Types and Top-Level Elements and Attributes                         *
 *   http://schemas.microsoft.com/2003/10/Serialization/                      *
 *                                                                            *
\******************************************************************************/


/// "http://schemas.microsoft.com/2003/10/Serialization/":char is a simpleType restriction of xs:int.
typedef int ns3__char;

/// Class wrapper
class ns3__char__ : public xsd__anyType
{ public:
    ns3__char                            __item;                       
};

/// "http://schemas.microsoft.com/2003/10/Serialization/":duration is a simpleType restriction of xs:duration.
/// Content pattern is "\\-?P(\\d*D)?(T(\\d*H)?(\\d*M)?(\\d*(\\.\\d*)?S)?)?" (note: not automatically enforced)
/// Value range is [-P10675199DT2H48M5.4775808S..P10675199DT2H48M5.4775807S]
typedef xsd__duration ns3__duration "\\-?P(\\d*D)?(T(\\d*H)?(\\d*M)?(\\d*(\\.\\d*)?S)?)?";

/// Class wrapper
class ns3__duration__ : public xsd__anyType
{ public:
    ns3__duration                        __item;                       
};

/// "http://schemas.microsoft.com/2003/10/Serialization/":guid is a simpleType restriction of xs:string.
/// Content pattern is "[\\da-fA-F]{8}-[\\da-fA-F]{4}-[\\da-fA-F]{4}-[\\da-fA-F]{4}-[\\da-fA-F]{12}" (note: not automatically enforced)
typedef std::string ns3__guid "[\\da-fA-F]{8}-[\\da-fA-F]{4}-[\\da-fA-F]{4}-[\\da-fA-F]{4}-[\\da-fA-F]{12}";

/// Class wrapper
class ns3__guid__ : public xsd__anyType
{ public:
    ns3__guid                            __item;                       
};

/******************************************************************************\
 *                                                                            *
 * Schema Complex Types and Top-Level Elements                                *
 *   http://tempuri.org/Imports                                               *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Schema Complex Types and Top-Level Elements                                *
 *   http://tempuri.org/                                                      *
 *                                                                            *
\******************************************************************************/



/// Top-level root element "http://tempuri.org/":CheckLogin

/// "http://tempuri.org/":CheckLogin is a complexType.
class _ns1__CheckLogin
{ public:
/// Element username of type xs:string.
    std::string*                         username                       0;	///< Nullable pointer.
/// A handle to the soap struct that manages this instance (automatically set)
    struct soap                         *soap                          ;
};


/// Top-level root element "http://tempuri.org/":CheckLoginResponse

/// "http://tempuri.org/":CheckLoginResponse is a complexType.
class _ns1__CheckLoginResponse
{ public:
/// Element CheckLoginResult of type xs:string.
    std::string*                         CheckLoginResult               0;	///< Nullable pointer.
/// A handle to the soap struct that manages this instance (automatically set)
    struct soap                         *soap                          ;
};

/******************************************************************************\
 *                                                                            *
 * Schema Complex Types and Top-Level Elements                                *
 *   http://schemas.microsoft.com/2003/10/Serialization/                      *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Additional Top-Level Elements                                              *
 *   http://tempuri.org/Imports                                               *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Additional Top-Level Attributes                                            *
 *   http://tempuri.org/Imports                                               *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Additional Top-Level Elements                                              *
 *   http://tempuri.org/                                                      *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Additional Top-Level Attributes                                            *
 *   http://tempuri.org/                                                      *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Additional Top-Level Elements                                              *
 *   http://schemas.microsoft.com/2003/10/Serialization/                      *
 *                                                                            *
\******************************************************************************/


/// Top-level root element "http://schemas.microsoft.com/2003/10/Serialization/":anyType of type xs:anyType.
typedef xsd__anyType _ns3__anyType;

/// Top-level root element "http://schemas.microsoft.com/2003/10/Serialization/":anyURI of type xs:anyURI.
typedef xsd__anyURI _ns3__anyURI;

/// Top-level root element "http://schemas.microsoft.com/2003/10/Serialization/":base64Binary of type xs:base64Binary.
typedef xsd__base64Binary _ns3__base64Binary;

/// Top-level root element "http://schemas.microsoft.com/2003/10/Serialization/":boolean of type xs:boolean.
typedef bool _ns3__boolean;

/// Top-level root element "http://schemas.microsoft.com/2003/10/Serialization/":byte of type xs:byte.
typedef xsd__byte _ns3__byte;

/// Top-level root element "http://schemas.microsoft.com/2003/10/Serialization/":dateTime of type xs:dateTime.
typedef time_t _ns3__dateTime;

/// Top-level root element "http://schemas.microsoft.com/2003/10/Serialization/":decimal of type xs:decimal.
typedef xsd__decimal _ns3__decimal;

/// Top-level root element "http://schemas.microsoft.com/2003/10/Serialization/":double of type xs:double.
typedef double _ns3__double;

/// Top-level root element "http://schemas.microsoft.com/2003/10/Serialization/":float of type xs:float.
typedef float _ns3__float;

/// Top-level root element "http://schemas.microsoft.com/2003/10/Serialization/":int of type xs:int.
typedef int _ns3__int;

/// Top-level root element "http://schemas.microsoft.com/2003/10/Serialization/":long of type xs:long.
typedef LONG64 _ns3__long;

/// Top-level root element "http://schemas.microsoft.com/2003/10/Serialization/":QName of type xs:QName.
typedef xsd__QName _ns3__QName;

/// Top-level root element "http://schemas.microsoft.com/2003/10/Serialization/":short of type xs:short.
typedef short _ns3__short;

/// Top-level root element "http://schemas.microsoft.com/2003/10/Serialization/":string of type xs:string.
typedef std::string _ns3__string;

/// Top-level root element "http://schemas.microsoft.com/2003/10/Serialization/":unsignedByte of type xs:unsignedByte.
typedef xsd__unsignedByte _ns3__unsignedByte;

/// Top-level root element "http://schemas.microsoft.com/2003/10/Serialization/":unsignedInt of type xs:unsignedInt.
typedef unsigned int _ns3__unsignedInt;

/// Top-level root element "http://schemas.microsoft.com/2003/10/Serialization/":unsignedLong of type xs:unsignedLong.
typedef ULONG64 _ns3__unsignedLong;

/// Top-level root element "http://schemas.microsoft.com/2003/10/Serialization/":unsignedShort of type xs:unsignedShort.
typedef unsigned short _ns3__unsignedShort;

/// Top-level root element "http://schemas.microsoft.com/2003/10/Serialization/":char of type "http://schemas.microsoft.com/2003/10/Serialization/":char.
typedef ns3__char _ns3__char;

/// Top-level root element "http://schemas.microsoft.com/2003/10/Serialization/":duration of type "http://schemas.microsoft.com/2003/10/Serialization/":duration.
typedef ns3__duration _ns3__duration;

/// Top-level root element "http://schemas.microsoft.com/2003/10/Serialization/":guid of type "http://schemas.microsoft.com/2003/10/Serialization/":guid.
typedef ns3__guid _ns3__guid;

/******************************************************************************\
 *                                                                            *
 * Additional Top-Level Attributes                                            *
 *   http://schemas.microsoft.com/2003/10/Serialization/                      *
 *                                                                            *
\******************************************************************************/


/// Top-level attribute "http://schemas.microsoft.com/2003/10/Serialization/":FactoryType of simpleType xs:QName.
typedef xsd__QName _ns3__FactoryType;

/// Top-level attribute "http://schemas.microsoft.com/2003/10/Serialization/":Id of simpleType xs:ID.
typedef xsd__ID _ns3__Id;

/// Top-level attribute "http://schemas.microsoft.com/2003/10/Serialization/":Ref of simpleType xs:IDREF.
typedef xsd__IDREF _ns3__Ref;

/******************************************************************************\
 *                                                                            *
 * Services                                                                   *
 *                                                                            *
\******************************************************************************/


//gsoap ns1  service name:	BasicHttpBinding_USCOREILicenseServerService 
//gsoap ns1  service type:	ILicenseServerService 
//gsoap ns1  service port:	http://gamebook:8890/LicenseServerService.svc 
//gsoap ns1  service namespace:	http://tempuri.org/ 
//gsoap ns1  service transport:	http://schemas.xmlsoap.org/soap/http 

/** @mainpage LicenseServerService Definitions

@section LicenseServerService_bindings Service Bindings

  - @ref BasicHttpBinding_USCOREILicenseServerService

@section LicenseServerService_more More Information

  - @ref page_notes "Usage Notes"

  - @ref page_XMLDataBinding "XML Data Binding"

  - @ref SOAP_ENV__Header "SOAP Header Content" (when applicable)

  - @ref SOAP_ENV__Detail "SOAP Fault Detail Content" (when applicable)


*/

/**

@page BasicHttpBinding_USCOREILicenseServerService Binding "BasicHttpBinding_USCOREILicenseServerService"

@section BasicHttpBinding_USCOREILicenseServerService_operations Operations of Binding  "BasicHttpBinding_USCOREILicenseServerService"

  - @ref __ns1__CheckLogin

@section BasicHttpBinding_USCOREILicenseServerService_ports Endpoints of Binding  "BasicHttpBinding_USCOREILicenseServerService"

  - http://gamebook:8890/LicenseServerService.svc

Note: use wsdl2h option -N to change the service binding prefix name

*/

/******************************************************************************\
 *                                                                            *
 * Service Binding                                                            *
 *   BasicHttpBinding_USCOREILicenseServerService                             *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Service Operation                                                          *
 *   __ns1__CheckLogin                                                        *
 *                                                                            *
\******************************************************************************/


/// Operation "__ns1__CheckLogin" of service binding "BasicHttpBinding_USCOREILicenseServerService"

/**

Operation details:


  - SOAP document/literal style messaging

  - SOAP action="http://tempuri.org/ILicenseServerService/CheckLogin"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call___ns1__CheckLogin(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // request parameters:
    _ns1__CheckLogin*                   ns1__CheckLogin,
    // response parameters:
    _ns1__CheckLoginResponse*           ns1__CheckLoginResponse
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int __ns1__CheckLogin(
    struct soap *soap,
    // request parameters:
    _ns1__CheckLogin*                   ns1__CheckLogin,
    // response parameters:
    _ns1__CheckLoginResponse*           ns1__CheckLoginResponse
  );
@endcode

C++ proxy class (defined in soapBasicHttpBinding_USCOREILicenseServerServiceProxy.h):
@code
  class BasicHttpBinding_USCOREILicenseServerServiceProxy;
@endcode
Important: use soapcpp2 option '-i' to generate greatly improved and easy-to-use proxy classes;

C++ service class (defined in soapBasicHttpBinding_USCOREILicenseServerServiceService.h):
@code
  class BasicHttpBinding_USCOREILicenseServerServiceService;
@endcode
Important: use soapcpp2 option '-i' to generate greatly improved and easy-to-use service classes;

*/

//gsoap ns1  service method-style:	CheckLogin document
//gsoap ns1  service method-encoding:	CheckLogin literal
//gsoap ns1  service method-action:	CheckLogin http://tempuri.org/ILicenseServerService/CheckLogin
int __ns1__CheckLogin(
    _ns1__CheckLogin*                   ns1__CheckLogin,	///< Request parameter
    _ns1__CheckLoginResponse*           ns1__CheckLoginResponse	///< Response parameter
);

/******************************************************************************\
 *                                                                            *
 * XML Data Binding                                                           *
 *                                                                            *
\******************************************************************************/


/**

@page page_XMLDataBinding XML Data Binding

SOAP/XML services use data bindings contractually bound by WSDL and auto-
generated by wsdl2h and soapcpp2 (see Service Bindings). Plain data bindings
are adopted from XML schemas as part of the WSDL types section or when running
wsdl2h on a set of schemas to produce non-SOAP-based XML data bindings.

The following readers and writers are C/C++ data type (de)serializers auto-
generated by wsdl2h and soapcpp2. Run soapcpp2 on this file to generate the
(de)serialization code, which is stored in soapC.c[pp]. Include "soapH.h" in
your code to import these data type and function declarations. Only use the
soapcpp2-generated files in your project build. Do not include the wsdl2h-
generated .h file in your code.

XML content can be retrieved from:
  - a file descriptor, using soap->recvfd = fd
  - a socket, using soap->socket = ...
  - a C++ stream, using soap->is = ...
  - a buffer, using the soap->frecv() callback

XML content can be stored to:
  - a file descriptor, using soap->sendfd = fd
  - a socket, using soap->socket = ...
  - a C++ stream, using soap->os = ...
  - a buffer, using the soap->fsend() callback


@section ns2 Top-level root elements of schema "http://tempuri.org/Imports"

@section ns1 Top-level root elements of schema "http://tempuri.org/"

  - <ns1:CheckLogin> @ref _ns1__CheckLogin
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__ns1__CheckLogin(struct soap*, _ns1__CheckLogin*);
    // Writer (returns SOAP_OK on success):
    soap_write__ns1__CheckLogin(struct soap*, _ns1__CheckLogin*);
    @endcode

  - <ns1:CheckLoginResponse> @ref _ns1__CheckLoginResponse
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__ns1__CheckLoginResponse(struct soap*, _ns1__CheckLoginResponse*);
    // Writer (returns SOAP_OK on success):
    soap_write__ns1__CheckLoginResponse(struct soap*, _ns1__CheckLoginResponse*);
    @endcode

@section ns3 Top-level root elements of schema "http://schemas.microsoft.com/2003/10/Serialization/"

  - <ns3:anyType> @ref _ns3__anyType
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__ns3__anyType(struct soap*, _ns3__anyType*);
    // Writer (returns SOAP_OK on success):
    soap_write__ns3__anyType(struct soap*, _ns3__anyType*);
    @endcode

  - <ns3:anyURI> @ref _ns3__anyURI
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__ns3__anyURI(struct soap*, _ns3__anyURI*);
    // Writer (returns SOAP_OK on success):
    soap_write__ns3__anyURI(struct soap*, _ns3__anyURI*);
    @endcode

  - <ns3:base64Binary> @ref _ns3__base64Binary
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__ns3__base64Binary(struct soap*, _ns3__base64Binary*);
    // Writer (returns SOAP_OK on success):
    soap_write__ns3__base64Binary(struct soap*, _ns3__base64Binary*);
    @endcode

  - <ns3:boolean> @ref _ns3__boolean
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__ns3__boolean(struct soap*, _ns3__boolean*);
    // Writer (returns SOAP_OK on success):
    soap_write__ns3__boolean(struct soap*, _ns3__boolean*);
    @endcode

  - <ns3:byte> @ref _ns3__byte
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__ns3__byte(struct soap*, _ns3__byte*);
    // Writer (returns SOAP_OK on success):
    soap_write__ns3__byte(struct soap*, _ns3__byte*);
    @endcode

  - <ns3:dateTime> @ref _ns3__dateTime
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__ns3__dateTime(struct soap*, _ns3__dateTime*);
    // Writer (returns SOAP_OK on success):
    soap_write__ns3__dateTime(struct soap*, _ns3__dateTime*);
    @endcode

  - <ns3:decimal> @ref _ns3__decimal
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__ns3__decimal(struct soap*, _ns3__decimal*);
    // Writer (returns SOAP_OK on success):
    soap_write__ns3__decimal(struct soap*, _ns3__decimal*);
    @endcode

  - <ns3:double> @ref _ns3__double
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__ns3__double(struct soap*, _ns3__double*);
    // Writer (returns SOAP_OK on success):
    soap_write__ns3__double(struct soap*, _ns3__double*);
    @endcode

  - <ns3:float> @ref _ns3__float
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__ns3__float(struct soap*, _ns3__float*);
    // Writer (returns SOAP_OK on success):
    soap_write__ns3__float(struct soap*, _ns3__float*);
    @endcode

  - <ns3:int> @ref _ns3__int
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__ns3__int(struct soap*, _ns3__int*);
    // Writer (returns SOAP_OK on success):
    soap_write__ns3__int(struct soap*, _ns3__int*);
    @endcode

  - <ns3:long> @ref _ns3__long
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__ns3__long(struct soap*, _ns3__long*);
    // Writer (returns SOAP_OK on success):
    soap_write__ns3__long(struct soap*, _ns3__long*);
    @endcode

  - <ns3:QName> @ref _ns3__QName
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__ns3__QName(struct soap*, _ns3__QName*);
    // Writer (returns SOAP_OK on success):
    soap_write__ns3__QName(struct soap*, _ns3__QName*);
    @endcode

  - <ns3:short> @ref _ns3__short
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__ns3__short(struct soap*, _ns3__short*);
    // Writer (returns SOAP_OK on success):
    soap_write__ns3__short(struct soap*, _ns3__short*);
    @endcode

  - <ns3:string> @ref _ns3__string
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__ns3__string(struct soap*, _ns3__string*);
    // Writer (returns SOAP_OK on success):
    soap_write__ns3__string(struct soap*, _ns3__string*);
    @endcode

  - <ns3:unsignedByte> @ref _ns3__unsignedByte
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__ns3__unsignedByte(struct soap*, _ns3__unsignedByte*);
    // Writer (returns SOAP_OK on success):
    soap_write__ns3__unsignedByte(struct soap*, _ns3__unsignedByte*);
    @endcode

  - <ns3:unsignedInt> @ref _ns3__unsignedInt
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__ns3__unsignedInt(struct soap*, _ns3__unsignedInt*);
    // Writer (returns SOAP_OK on success):
    soap_write__ns3__unsignedInt(struct soap*, _ns3__unsignedInt*);
    @endcode

  - <ns3:unsignedLong> @ref _ns3__unsignedLong
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__ns3__unsignedLong(struct soap*, _ns3__unsignedLong*);
    // Writer (returns SOAP_OK on success):
    soap_write__ns3__unsignedLong(struct soap*, _ns3__unsignedLong*);
    @endcode

  - <ns3:unsignedShort> @ref _ns3__unsignedShort
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__ns3__unsignedShort(struct soap*, _ns3__unsignedShort*);
    // Writer (returns SOAP_OK on success):
    soap_write__ns3__unsignedShort(struct soap*, _ns3__unsignedShort*);
    @endcode

  - <ns3:char> @ref _ns3__char
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__ns3__char(struct soap*, _ns3__char*);
    // Writer (returns SOAP_OK on success):
    soap_write__ns3__char(struct soap*, _ns3__char*);
    @endcode

  - <ns3:duration> @ref _ns3__duration
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__ns3__duration(struct soap*, _ns3__duration*);
    // Writer (returns SOAP_OK on success):
    soap_write__ns3__duration(struct soap*, _ns3__duration*);
    @endcode

  - <ns3:guid> @ref _ns3__guid
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__ns3__guid(struct soap*, _ns3__guid*);
    // Writer (returns SOAP_OK on success):
    soap_write__ns3__guid(struct soap*, _ns3__guid*);
    @endcode

*/

/* End of test.h */
