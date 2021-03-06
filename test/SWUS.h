// Reminder: Modify typemap.dat to customize the header file generated by wsdl2h
/* SWUS.h
   Generated by wsdl2h 2.8.35 from ../docs/service.wsdl and typemap.dat
   2018-03-15 13:12:44 GMT

   DO NOT INCLUDE THIS FILE DIRECTLY INTO YOUR PROJECT BUILDS
   USE THE soapcpp2-GENERATED SOURCE CODE FILES FOR YOUR PROJECT BUILDS

gSOAP XML Web services tools
Copyright (C) 2000-2016, Robert van Engelen, Genivia Inc. All Rights Reserved.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

/** @page page_notes Notes

@note HINTS:
 - Run soapcpp2 on SWUS.h to generate the SOAP/XML processing logic.
   Use soapcpp2 -I to specify paths for #import
   To build with STL, 'stl.h' is imported from 'import' dir in package.
   Use soapcpp2 -j to generate improved proxy and server classes.
   Use soapcpp2 -r to generate a report.
 - Use wsdl2h -c and -s to generate pure C code or C++ code without STL.
 - Use 'typemap.dat' to control namespace bindings and type mappings.
   It is strongly recommended to customize the names of the namespace prefixes
   generated by wsdl2h. To do so, modify the prefix bindings in the Namespaces
   section below and add the modified lines to 'typemap.dat' to rerun wsdl2h.
 - Run Doxygen (www.doxygen.org) on this file to generate documentation.
 - Use wsdl2h -R to generate REST operations.
 - Use wsdl2h -nname to use name as the base namespace prefix instead of 'ns'.
 - Use wsdl2h -Nname for service prefix and produce multiple service bindings
 - Use wsdl2h -d to enable DOM support for xsd:anyType.
 - Use wsdl2h -g to auto-generate readers and writers for root elements.
 - Use wsdl2h -b to auto-generate bi-directional operations (duplex ops).
 - Use wsdl2h -U to map XML names to C++ Unicode identifiers instead of _xNNNN.
 - Use wsdl2h -u to disable the generation of unions.
 - Struct/class members serialized as XML attributes are annotated with a '@'.
 - Struct/class members that have a special role are annotated with a '$'.

@warning
   DO NOT INCLUDE THIS ANNOTATED FILE DIRECTLY IN YOUR PROJECT SOURCE CODE.
   USE THE FILES GENERATED BY soapcpp2 FOR YOUR PROJECT'S SOURCE CODE:
   THE soapStub.h FILE CONTAINS THIS CONTENT WITHOUT ANNOTATIONS.

@copyright LICENSE:
@verbatim
--------------------------------------------------------------------------------
gSOAP XML Web services tools
Copyright (C) 2000-2016, Robert van Engelen, Genivia Inc. All Rights Reserved.
The wsdl2h tool and its generated software are released under the GPL.
This software is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
GPL license.

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

This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial-use license is available from Genivia, Inc., contact@genivia.com
--------------------------------------------------------------------------------
@endverbatim

*/


//gsoapopt c++11,w

/******************************************************************************\
 *                                                                            *
 * Definitions                                                                *
 *   http://api.ametisco.ir/swus.wsdl                                         *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * $CONTAINER                                                                 *
 *   std::vector                                                              *
 *                                                                            *
\******************************************************************************/

template <class T> class std::vector;

/******************************************************************************\
 *                                                                            *
 * Import                                                                     *
 *                                                                            *
\******************************************************************************/

#import "stl.h" // enable STL containers when used (option -s removes STL dependency)

/******************************************************************************\
 *                                                                            *
 * Schema Namespaces                                                          *
 *                                                                            *
\******************************************************************************/


/* NOTE:

It is strongly recommended to customize the names of the namespace prefixes
generated by wsdl2h. To do so, modify the prefix bindings below and add the
modified lines to typemap.dat to rerun wsdl2h:

ns1 = "http://api.ametisco.ir/swus.wsdl"
ns2 = "urn:swus"

*/

#define SOAP_NAMESPACE_OF_ns2   "urn:swus"
//gsoap ns2   schema namespace: urn:swus
//gsoap ns2   schema form:  unqualified

/******************************************************************************\
 *                                                                            *
 * Built-in Schema Types and Top-Level Elements and Attributes                *
 *                                                                            *
\******************************************************************************/

/// Built-in XSD type "xs:anyType".
class xsd__anyType {
    _XML __item;
    struct soap* soap;
};

/// Class wrapper for built-in type "xs:boolean" derived from xsd__anyType.
/// Use virtual method soap_type() == SOAP_TYPE_xsd__boolean to check runtime type (see soapStub.h).
class xsd__boolean : public xsd__anyType {
public:
    bool                                 __item;
};

/// Primitive built-in type "xs:integer".
typedef std::string xsd__integer;

/// Class wrapper for built-in type "xs:integer" derived from xsd__anyType.
/// Use virtual method soap_type() == SOAP_TYPE_xsd__integer_ to check runtime type (see soapStub.h).
class xsd__integer_ : public xsd__anyType {
public:
    xsd__integer                         __item;
};

/// Class wrapper for built-in type "xs:string" derived from xsd__anyType.
/// Use virtual method soap_type() == SOAP_TYPE_xsd__string to check runtime type (see soapStub.h).
class xsd__string : public xsd__anyType {
public:
    std::string                          __item;
};


/******************************************************************************\
 *                                                                            *
 * Forward Declarations                                                       *
 *                                                                            *
\******************************************************************************/



/******************************************************************************\
 *                                                                            *
 * Schema Types and Top-Level Elements and Attributes                         *
 *   urn:swus                                                                 *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Schema Complex Types and Top-Level Elements                                *
 *   urn:swus                                                                 *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Additional Top-Level Elements                                              *
 *   urn:swus                                                                 *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Additional Top-Level Attributes                                            *
 *   urn:swus                                                                 *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Services                                                                   *
 *                                                                            *
\******************************************************************************/


//gsoap ns2  service name:  swus
//gsoap ns2  service type:  swusPortType
//gsoap ns2  service port:  http://api.ametisco.ir:39000
//gsoap ns2  service namespace: urn:swus
//gsoap ns2  service transport: http://schemas.xmlsoap.org/soap/http

/** @mainpage swus Definitions

@section swus_bindings Service Bindings

  - @ref swus

@section swus_more More Information

  - @ref page_notes "Notes"

  - @ref page_XMLDataBinding "XML Data Binding"

  - @ref SOAP_ENV__Header "SOAP Header Content" (when applicable)

  - @ref SOAP_ENV__Detail "SOAP Fault Detail Content" (when applicable)


*/

/**

@page swus Binding "swus"

@section swus_service Service Documentation "swus"
gSOAP 2.7.9k generated service definition

@section swus_operations Operations of Binding "swus"

  - @ref ns2__login

@section swus_ports Default endpoints of Binding "swus"

  - http://api.ametisco.ir:39000

@note Use wsdl2h option -Nname to change the service binding prefix name


*/

/******************************************************************************\
 *                                                                            *
 * Service Binding                                                            *
 *   swus                                                                     *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Service Operation                                                          *
 *   ns2__login                                                               *
 *                                                                            *
\******************************************************************************/

/// Operation response struct "ns2__loginResponse" of operation "ns2__login".
struct ns2__loginResponse {
bool                                :
    success;   ///< Output parameter, : unqualified name as per RPC encoding
xsd__integer                        :
    errorCode; ///< Output parameter, : unqualified name as per RPC encoding
std::string                         :
    errorString;   ///< Output parameter, : unqualified name as per RPC encoding
std::string                         :
    token; ///< Output parameter, : unqualified name as per RPC encoding
xsd__integer                        :
    ttl;   ///< Output parameter, : unqualified name as per RPC encoding
};

/** Operation "ns2__login" of service binding "swus".
Service definition of function ns__add

  - SOAP RPC encodingStyle="http://schemas.xmlsoap.org/soap/encoding/"

  - Default endpoints:
    - http://api.ametisco.ir:39000

  - Addressing input action: ""

  - Addressing output action: "Response"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call_ns2__login(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // input parameters:
    std::string                         username,
    std::string                         password,
    // output parameters:
    struct ns2__loginResponse&
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int ns2__login(
    struct soap *soap,
    // input parameters:
    std::string                         username,
    std::string                         password,
    // output parameters:
    struct ns2__loginResponse&
  );
@endcode

C++ proxy class (defined in soapswusProxy.h generated with soapcpp2):
@code
  class swusProxy;
@endcode
Important: use soapcpp2 option '-j' (or '-i') to generate improved and easy-to-use proxy classes;

C++ service class (defined in soapswusService.h generated with soapcpp2):
@code
  class swusService;
@endcode
Important: use soapcpp2 option '-j' (or '-i') to generate improved and easy-to-use service classes;

*/

//gsoap ns2  service method-protocol:   login SOAP
//gsoap ns2  service method-style:  login rpc
//gsoap ns2  service method-encoding:   login http://schemas.xmlsoap.org/soap/encoding/
//gsoap ns2  service method-action: login ""
//gsoap ns2  service method-output-action:  login Response
int ns2__login(
    std::string                         : username, ///< Input parameter, : unqualified name as per RPC encoding
    std::string                         : password, ///< Input parameter, : unqualified name as per RPC encoding
    struct ns2__loginResponse&              ///< Output response struct parameter
);

/**

@page swus Binding "swus"

@section swus_policy_enablers Policy Enablers of Binding "swus"

None specified.

*/

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

Data can be read and deserialized from:
  - an int file descriptor, using soap->recvfd = fd
  - a socket, using soap->socket = (int)...
  - a C++ stream (istream, stringstream), using soap->is = (istream*)...
  - a C string, using soap->is = (const char*)...
  - any input, using the soap->frecv() callback

Data can be serialized and written to:
  - an int file descriptor, using soap->sendfd = (int)...
  - a socket, using soap->socket = (int)...
  - a C++ stream (ostream, stringstream), using soap->os = (ostream*)...
  - a C string, using soap->os = (const char**)...
  - any output, using the soap->fsend() callback

The following options are available for (de)serialization control:
  - soap->encodingStyle = NULL; to remove SOAP 1.1/1.2 encodingStyle
  - soap_mode(soap, SOAP_XML_TREE); XML without id-ref (no cycles!)
  - soap_mode(soap, SOAP_XML_GRAPH); XML with id-ref (including cycles)
  - soap_set_namespaces(soap, struct Namespace *nsmap); to set xmlns bindings


@section ns2 Top-level root elements of schema "urn:swus"

*/

/* End of SWUS.h */
