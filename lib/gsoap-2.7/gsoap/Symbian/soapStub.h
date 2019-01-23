/* soapStub.h
   Generated by gSOAP 2.7.10 from interop_all.h
   Copyright(C) 2000-2008, Robert van Engelen, Genivia Inc. All Rights Reserved.
   This part of the software is released under one of the following licenses:
   GPL, the gSOAP public license, or Genivia's license for commercial use.
*/

#ifndef soapStub_H
#define soapStub_H
#include "stdsoap2.h"

/******************************************************************************\
 *                                                                            *
 * Enumerations                                                               *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Classes and Structs                                                        *
 *                                                                            *
\******************************************************************************/


#if 0 /* volatile type: do not redeclare here */

#endif

#ifndef SOAP_TYPE_ns__echoStringResponse
#define SOAP_TYPE_ns__echoStringResponse (10)
/* ns:echoStringResponse */
struct ns__echoStringResponse
{
public:
	char *_return;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* required element of type xsd:string */
};
#endif

#ifndef SOAP_TYPE_ns__echoString
#define SOAP_TYPE_ns__echoString (11)
/* ns:echoString */
struct ns__echoString
{
public:
	char *inputString;	/* optional element of type xsd:string */
};
#endif

#ifndef SOAP_TYPE_ArrayOfstring
#define SOAP_TYPE_ArrayOfstring (12)
/* SOAP encoded array of xsd:string schema type: */
struct ArrayOfstring
{
public:
	char **__ptr;
	int __size;
	int __offset;
};
#endif

#ifndef SOAP_TYPE_ns__echoStringArrayResponse
#define SOAP_TYPE_ns__echoStringArrayResponse (16)
/* ns:echoStringArrayResponse */
struct ns__echoStringArrayResponse
{
public:
	struct ArrayOfstring _return;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* required element of type ArrayOfstring */
};
#endif

#ifndef SOAP_TYPE_ns__echoStringArray
#define SOAP_TYPE_ns__echoStringArray (17)
/* ns:echoStringArray */
struct ns__echoStringArray
{
public:
	struct ArrayOfstring inputStringArray;	/* required element of type ArrayOfstring */
};
#endif

#ifndef SOAP_TYPE_ns__echoIntegerResponse
#define SOAP_TYPE_ns__echoIntegerResponse (22)
/* ns:echoIntegerResponse */
struct ns__echoIntegerResponse
{
public:
	long _return;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* required element of type xsd:int */
};
#endif

#ifndef SOAP_TYPE_ns__echoInteger
#define SOAP_TYPE_ns__echoInteger (23)
/* ns:echoInteger */
struct ns__echoInteger
{
public:
	long inputInteger;	/* required element of type xsd:int */
};
#endif

#ifndef SOAP_TYPE_ArrayOfint
#define SOAP_TYPE_ArrayOfint (24)
/* SOAP encoded array of xsd:int schema type: */
struct ArrayOfint
{
public:
	long **__ptr;
	int __size;
	int __offset;
};
#endif

#ifndef SOAP_TYPE_ns__echoIntegerArrayResponse
#define SOAP_TYPE_ns__echoIntegerArrayResponse (29)
/* ns:echoIntegerArrayResponse */
struct ns__echoIntegerArrayResponse
{
public:
	struct ArrayOfint _return;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* required element of type ArrayOfint */
};
#endif

#ifndef SOAP_TYPE_ns__echoIntegerArray
#define SOAP_TYPE_ns__echoIntegerArray (30)
/* ns:echoIntegerArray */
struct ns__echoIntegerArray
{
public:
	struct ArrayOfint inputIntegerArray;	/* required element of type ArrayOfint */
};
#endif

#ifndef SOAP_TYPE_ns__echoFloatResponse
#define SOAP_TYPE_ns__echoFloatResponse (35)
/* ns:echoFloatResponse */
struct ns__echoFloatResponse
{
public:
	float _return;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* required element of type xsd:float */
};
#endif

#ifndef SOAP_TYPE_ns__echoFloat
#define SOAP_TYPE_ns__echoFloat (36)
/* ns:echoFloat */
struct ns__echoFloat
{
public:
	float inputFloat;	/* required element of type xsd:float */
};
#endif

#ifndef SOAP_TYPE_ArrayOffloat
#define SOAP_TYPE_ArrayOffloat (37)
/* SOAP encoded array of xsd:float schema type: */
struct ArrayOffloat
{
public:
	float **__ptr;
	int __size;
	int __offset;
};
#endif

#ifndef SOAP_TYPE_ns__echoFloatArrayResponse
#define SOAP_TYPE_ns__echoFloatArrayResponse (42)
/* ns:echoFloatArrayResponse */
struct ns__echoFloatArrayResponse
{
public:
	struct ArrayOffloat _return;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* required element of type ArrayOffloat */
};
#endif

#ifndef SOAP_TYPE_ns__echoFloatArray
#define SOAP_TYPE_ns__echoFloatArray (43)
/* ns:echoFloatArray */
struct ns__echoFloatArray
{
public:
	struct ArrayOffloat inputFloatArray;	/* required element of type ArrayOffloat */
};
#endif

#ifndef SOAP_TYPE_s__SOAPStruct
#define SOAP_TYPE_s__SOAPStruct (44)
/* s:SOAPStruct */
struct s__SOAPStruct
{
public:
	char *varString;	/* optional element of type xsd:string */
	long *varInt;	/* optional element of type xsd:int */
	float *varFloat;	/* optional element of type xsd:float */
};
#endif

#ifndef SOAP_TYPE_ns__echoStructResponse
#define SOAP_TYPE_ns__echoStructResponse (45)
/* ns:echoStructResponse */
struct ns__echoStructResponse
{
public:
	struct s__SOAPStruct _return;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* required element of type s:SOAPStruct */
};
#endif

#ifndef SOAP_TYPE_ns__echoStruct
#define SOAP_TYPE_ns__echoStruct (48)
/* ns:echoStruct */
struct ns__echoStruct
{
public:
	struct s__SOAPStruct _inputStruct;	/* required element of type s:SOAPStruct */
};
#endif

#ifndef SOAP_TYPE_ArrayOfSOAPStruct
#define SOAP_TYPE_ArrayOfSOAPStruct (49)
/* SOAP encoded array of s:SOAPStruct schema type: */
struct ArrayOfSOAPStruct
{
public:
	struct s__SOAPStruct **__ptr;
	int __size;
	int __offset;
};
#endif

#ifndef SOAP_TYPE_ns__echoStructArrayResponse
#define SOAP_TYPE_ns__echoStructArrayResponse (54)
/* ns:echoStructArrayResponse */
struct ns__echoStructArrayResponse
{
public:
	struct ArrayOfSOAPStruct _return;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* required element of type ArrayOfSOAPStruct */
};
#endif

#ifndef SOAP_TYPE_ns__echoStructArray
#define SOAP_TYPE_ns__echoStructArray (55)
/* ns:echoStructArray */
struct ns__echoStructArray
{
public:
	struct ArrayOfSOAPStruct inputStructArray;	/* required element of type ArrayOfSOAPStruct */
};
#endif

#ifndef SOAP_TYPE_ns__echoVoidResponse
#define SOAP_TYPE_ns__echoVoidResponse (56)
/* ns:echoVoidResponse */
struct ns__echoVoidResponse
{
#ifdef WITH_NOEMPTYSTRUCT
private:
	char dummy;	/* dummy member to enable compilation */
#endif
};
#endif

#ifndef SOAP_TYPE_ns__echoVoid
#define SOAP_TYPE_ns__echoVoid (59)
/* ns:echoVoid */
struct ns__echoVoid
{
#ifdef WITH_NOEMPTYSTRUCT
private:
	char dummy;	/* dummy member to enable compilation */
#endif
};
#endif

#ifndef SOAP_TYPE_xsd__base64Binary
#define SOAP_TYPE_xsd__base64Binary (60)
/* Base64 schema type: */
struct xsd__base64Binary
{
public:
	unsigned char *__ptr;
	int __size;
};
#endif

#ifndef SOAP_TYPE_ns__echoBase64Response
#define SOAP_TYPE_ns__echoBase64Response (66)
/* ns:echoBase64Response */
struct ns__echoBase64Response
{
public:
	struct xsd__base64Binary _return;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* required element of type xsd:base64Binary */
};
#endif

#ifndef SOAP_TYPE_ns__echoBase64
#define SOAP_TYPE_ns__echoBase64 (67)
/* ns:echoBase64 */
struct ns__echoBase64
{
public:
	struct xsd__base64Binary inputBase64;	/* required element of type xsd:base64Binary */
};
#endif

#ifndef SOAP_TYPE_ns__echoDateResponse
#define SOAP_TYPE_ns__echoDateResponse (71)
/* ns:echoDateResponse */
struct ns__echoDateResponse
{
public:
	char *_return;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* required element of type xsd:dateTime */
};
#endif

#ifndef SOAP_TYPE_ns__echoDate
#define SOAP_TYPE_ns__echoDate (72)
/* ns:echoDate */
struct ns__echoDate
{
public:
	char *inputDate;	/* optional element of type xsd:dateTime */
};
#endif

#ifndef SOAP_TYPE_xsd__hexBinary
#define SOAP_TYPE_xsd__hexBinary (73)
/* hexBinary schema type: */
struct xsd__hexBinary
{
public:
	unsigned char *__ptr;
	int __size;
};
#endif

#ifndef SOAP_TYPE_ns__echoHexBinaryResponse
#define SOAP_TYPE_ns__echoHexBinaryResponse (76)
/* ns:echoHexBinaryResponse */
struct ns__echoHexBinaryResponse
{
public:
	struct xsd__hexBinary _return;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* required element of type xsd:hexBinary */
};
#endif

#ifndef SOAP_TYPE_ns__echoHexBinary
#define SOAP_TYPE_ns__echoHexBinary (77)
/* ns:echoHexBinary */
struct ns__echoHexBinary
{
public:
	struct xsd__hexBinary inputHexBinary;	/* required element of type xsd:hexBinary */
};
#endif

#ifndef SOAP_TYPE_ns__echoDecimalResponse
#define SOAP_TYPE_ns__echoDecimalResponse (81)
/* ns:echoDecimalResponse */
struct ns__echoDecimalResponse
{
public:
	char *_return;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* required element of type xsd:decimal */
};
#endif

#ifndef SOAP_TYPE_ns__echoDecimal
#define SOAP_TYPE_ns__echoDecimal (82)
/* ns:echoDecimal */
struct ns__echoDecimal
{
public:
	char *inputDecimal;	/* optional element of type xsd:decimal */
};
#endif

#ifndef SOAP_TYPE_ns__echoBooleanResponse
#define SOAP_TYPE_ns__echoBooleanResponse (87)
/* ns:echoBooleanResponse */
struct ns__echoBooleanResponse
{
public:
	bool _return;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* required element of type xsd:boolean */
};
#endif

#ifndef SOAP_TYPE_ns__echoBoolean
#define SOAP_TYPE_ns__echoBoolean (88)
/* ns:echoBoolean */
struct ns__echoBoolean
{
public:
	bool inputBoolean;	/* required element of type xsd:boolean */
};
#endif

#ifndef SOAP_TYPE_ns__echoStructAsSimpleTypesResponse
#define SOAP_TYPE_ns__echoStructAsSimpleTypesResponse (89)
/* ns:echoStructAsSimpleTypesResponse */
struct ns__echoStructAsSimpleTypesResponse
{
public:
	char *_outputString;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type xsd:string */
	long *_outputInteger;	/* optional element of type xsd:int */
	float *_outputFloat;	/* optional element of type xsd:float */
};
#endif

#ifndef SOAP_TYPE_ns__echoStructAsSimpleTypes
#define SOAP_TYPE_ns__echoStructAsSimpleTypes (92)
/* ns:echoStructAsSimpleTypes */
struct ns__echoStructAsSimpleTypes
{
public:
	struct s__SOAPStruct _inputStruct;	/* required element of type s:SOAPStruct */
};
#endif

#ifndef SOAP_TYPE_ns__echoSimpleTypesAsStructResponse
#define SOAP_TYPE_ns__echoSimpleTypesAsStructResponse (93)
/* ns:echoSimpleTypesAsStructResponse */
struct ns__echoSimpleTypesAsStructResponse
{
public:
	struct s__SOAPStruct _return;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* required element of type s:SOAPStruct */
};
#endif

#ifndef SOAP_TYPE_ns__echoSimpleTypesAsStruct
#define SOAP_TYPE_ns__echoSimpleTypesAsStruct (96)
/* ns:echoSimpleTypesAsStruct */
struct ns__echoSimpleTypesAsStruct
{
public:
	char *inputString;	/* optional element of type xsd:string */
	long *inputInteger;	/* optional element of type xsd:int */
	float *inputFloat;	/* optional element of type xsd:float */
};
#endif

#ifndef SOAP_TYPE_ArrayOfstring2D
#define SOAP_TYPE_ArrayOfstring2D (97)
/* SOAP encoded array of xsd:string schema type: */
struct ArrayOfstring2D
{
public:
	char **__ptr;
	int __size[2];
	int __offset[2];
};
#endif

#ifndef SOAP_TYPE_ns__echo2DStringArrayResponse
#define SOAP_TYPE_ns__echo2DStringArrayResponse (101)
/* ns:echo2DStringArrayResponse */
struct ns__echo2DStringArrayResponse
{
public:
	struct ArrayOfstring2D _return;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* required element of type ArrayOfstring2D */
};
#endif

#ifndef SOAP_TYPE_ns__echo2DStringArray
#define SOAP_TYPE_ns__echo2DStringArray (102)
/* ns:echo2DStringArray */
struct ns__echo2DStringArray
{
public:
	struct ArrayOfstring2D _input2DStringArray;	/* required element of type ArrayOfstring2D */
};
#endif

#ifndef SOAP_TYPE_s__SOAPStructStruct
#define SOAP_TYPE_s__SOAPStructStruct (103)
/* s:SOAPStructStruct */
struct s__SOAPStructStruct
{
public:
	char *varString;	/* optional element of type xsd:string */
	long *varInt;	/* optional element of type xsd:int */
	float *varFloat;	/* optional element of type xsd:float */
	struct s__SOAPStruct *varStruct;	/* optional element of type s:SOAPStruct */
};
#endif

#ifndef SOAP_TYPE_ns__echoNestedStructResponse
#define SOAP_TYPE_ns__echoNestedStructResponse (104)
/* ns:echoNestedStructResponse */
struct ns__echoNestedStructResponse
{
public:
	struct s__SOAPStructStruct _return;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* required element of type s:SOAPStructStruct */
};
#endif

#ifndef SOAP_TYPE_ns__echoNestedStruct
#define SOAP_TYPE_ns__echoNestedStruct (107)
/* ns:echoNestedStruct */
struct ns__echoNestedStruct
{
public:
	struct s__SOAPStructStruct _inputStruct;	/* required element of type s:SOAPStructStruct */
};
#endif

#ifndef SOAP_TYPE_s__SOAPArrayStruct
#define SOAP_TYPE_s__SOAPArrayStruct (108)
/* s:SOAPArrayStruct */
struct s__SOAPArrayStruct
{
public:
	char *varString;	/* optional element of type xsd:string */
	long *varInt;	/* optional element of type xsd:int */
	float *varFloat;	/* optional element of type xsd:float */
	struct ArrayOfstring varArray;	/* required element of type ArrayOfstring */
};
#endif

#ifndef SOAP_TYPE_ns__echoNestedArrayResponse
#define SOAP_TYPE_ns__echoNestedArrayResponse (109)
/* ns:echoNestedArrayResponse */
struct ns__echoNestedArrayResponse
{
public:
	struct s__SOAPArrayStruct _return;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* required element of type s:SOAPArrayStruct */
};
#endif

#ifndef SOAP_TYPE_ns__echoNestedArray
#define SOAP_TYPE_ns__echoNestedArray (112)
/* ns:echoNestedArray */
struct ns__echoNestedArray
{
public:
	struct s__SOAPArrayStruct _inputStruct;	/* required element of type s:SOAPArrayStruct */
};
#endif

#ifndef SOAP_TYPE_SOAP_ENV__Header
#define SOAP_TYPE_SOAP_ENV__Header (113)
/* SOAP Header: */
struct SOAP_ENV__Header
{
public:
	char *h__echoMeStringRequest;	/* optional element of type xsd:string */
	char *h__echoMeStringRequest_;	/* mustUnderstand */
	char *h__echoMeStringResponse;	/* optional element of type xsd:string */
	struct s__SOAPStruct *h__echoMeStructRequest;	/* optional element of type s:SOAPStruct */
	struct s__SOAPStruct *h__echoMeStructRequest_;	/* mustUnderstand */
	struct s__SOAPStruct *h__echoMeStructResponse;	/* optional element of type s:SOAPStruct */
	char *h__someUnknownRequest;	/* optional element of type xsd:string */
	char *h__someUnknownRequest_;	/* mustUnderstand */
};
#endif

#ifndef SOAP_TYPE_m__echoVoidResponse
#define SOAP_TYPE_m__echoVoidResponse (114)
/* m:echoVoidResponse */
struct m__echoVoidResponse
{
#ifdef WITH_NOEMPTYSTRUCT
private:
	char dummy;	/* dummy member to enable compilation */
#endif
};
#endif

#ifndef SOAP_TYPE_m__echoVoid
#define SOAP_TYPE_m__echoVoid (117)
/* m:echoVoid */
struct m__echoVoid
{
#ifdef WITH_NOEMPTYSTRUCT
private:
	char dummy;	/* dummy member to enable compilation */
#endif
};
#endif

#ifndef SOAP_TYPE_SOAP_ENV__Code
#define SOAP_TYPE_SOAP_ENV__Code (118)
/* SOAP Fault Code: */
struct SOAP_ENV__Code
{
public:
	char *SOAP_ENV__Value;	/* optional element of type xsd:QName */
	struct SOAP_ENV__Code *SOAP_ENV__Subcode;	/* optional element of type SOAP-ENV:Code */
};
#endif

#ifndef SOAP_TYPE_SOAP_ENV__Detail
#define SOAP_TYPE_SOAP_ENV__Detail (120)
/* SOAP-ENV:Detail */
struct SOAP_ENV__Detail
{
public:
	int __type;	/* any type of element <fault> (defined below) */
	void *fault;	/* transient */
	char *__any;
};
#endif

#ifndef SOAP_TYPE_SOAP_ENV__Reason
#define SOAP_TYPE_SOAP_ENV__Reason (123)
/* SOAP-ENV:Reason */
struct SOAP_ENV__Reason
{
public:
	char *SOAP_ENV__Text;	/* optional element of type xsd:string */
};
#endif

#ifndef SOAP_TYPE_SOAP_ENV__Fault
#define SOAP_TYPE_SOAP_ENV__Fault (124)
/* SOAP Fault: */
struct SOAP_ENV__Fault
{
public:
	char *faultcode;	/* optional element of type xsd:QName */
	char *faultstring;	/* optional element of type xsd:string */
	char *faultactor;	/* optional element of type xsd:string */
	struct SOAP_ENV__Detail *detail;	/* optional element of type SOAP-ENV:Detail */
	struct SOAP_ENV__Code *SOAP_ENV__Code;	/* optional element of type SOAP-ENV:Code */
	struct SOAP_ENV__Reason *SOAP_ENV__Reason;	/* optional element of type SOAP-ENV:Reason */
	char *SOAP_ENV__Node;	/* optional element of type xsd:string */
	char *SOAP_ENV__Role;	/* optional element of type xsd:string */
	struct SOAP_ENV__Detail *SOAP_ENV__Detail;	/* optional element of type SOAP-ENV:Detail */
};
#endif

/******************************************************************************\
 *                                                                            *
 * Types with Custom Serializers                                              *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Typedefs                                                                   *
 *                                                                            *
\******************************************************************************/

#ifndef SOAP_TYPE__QName
#define SOAP_TYPE__QName (5)
typedef char *_QName;
#endif

#ifndef SOAP_TYPE__XML
#define SOAP_TYPE__XML (6)
typedef char *_XML;
#endif

#ifndef SOAP_TYPE_xsd__string
#define SOAP_TYPE_xsd__string (7)
typedef char *xsd__string;
#endif

#ifndef SOAP_TYPE_xsd__int
#define SOAP_TYPE_xsd__int (19)
typedef long xsd__int;
#endif

#ifndef SOAP_TYPE_xsd__float
#define SOAP_TYPE_xsd__float (32)
typedef float xsd__float;
#endif

#ifndef SOAP_TYPE_xsd__dateTime
#define SOAP_TYPE_xsd__dateTime (68)
typedef char *xsd__dateTime;
#endif

#ifndef SOAP_TYPE_xsd__decimal
#define SOAP_TYPE_xsd__decimal (78)
typedef char *xsd__decimal;
#endif

#ifndef SOAP_TYPE_xsd__boolean
#define SOAP_TYPE_xsd__boolean (84)
typedef bool xsd__boolean;
#endif


/******************************************************************************\
 *                                                                            *
 * Typedef Synonyms                                                           *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Externals                                                                  *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Stubs                                                                      *
 *                                                                            *
\******************************************************************************/


SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns__echoString(struct soap *soap, const char *soap_endpoint, const char *soap_action, char *inputString, char *&_return);

SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns__echoStringArray(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct ArrayOfstring inputStringArray, struct ArrayOfstring &_return);

SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns__echoInteger(struct soap *soap, const char *soap_endpoint, const char *soap_action, long inputInteger, long &_return);

SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns__echoIntegerArray(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct ArrayOfint inputIntegerArray, struct ArrayOfint &_return);

SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns__echoFloat(struct soap *soap, const char *soap_endpoint, const char *soap_action, float inputFloat, float &_return);

SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns__echoFloatArray(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct ArrayOffloat inputFloatArray, struct ArrayOffloat &_return);

SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns__echoStruct(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct s__SOAPStruct _inputStruct, struct ns__echoStructResponse &result);

SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns__echoStructArray(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct ArrayOfSOAPStruct inputStructArray, struct ArrayOfSOAPStruct &_return);

SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns__echoVoid(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct ns__echoVoidResponse &result);

SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns__echoBase64(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct xsd__base64Binary inputBase64, struct xsd__base64Binary &_return);

SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns__echoDate(struct soap *soap, const char *soap_endpoint, const char *soap_action, char *inputDate, char *&_return);

SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns__echoHexBinary(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct xsd__hexBinary inputHexBinary, struct xsd__hexBinary &_return);

SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns__echoDecimal(struct soap *soap, const char *soap_endpoint, const char *soap_action, char *inputDecimal, char *&_return);

SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns__echoBoolean(struct soap *soap, const char *soap_endpoint, const char *soap_action, bool inputBoolean, bool &_return);

SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns__echoStructAsSimpleTypes(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct s__SOAPStruct _inputStruct, struct ns__echoStructAsSimpleTypesResponse &result);

SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns__echoSimpleTypesAsStruct(struct soap *soap, const char *soap_endpoint, const char *soap_action, char *inputString, long *inputInteger, float *inputFloat, struct ns__echoSimpleTypesAsStructResponse &result);

SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns__echo2DStringArray(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct ArrayOfstring2D _input2DStringArray, struct ArrayOfstring2D &_return);

SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns__echoNestedStruct(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct s__SOAPStructStruct _inputStruct, struct ns__echoNestedStructResponse &result);

SOAP_FMAC5 int SOAP_FMAC6 soap_call_ns__echoNestedArray(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct s__SOAPArrayStruct _inputStruct, struct ns__echoNestedArrayResponse &result);

SOAP_FMAC5 int SOAP_FMAC6 soap_call_m__echoVoid(struct soap *soap, const char *soap_endpoint, const char *soap_action, struct m__echoVoidResponse &result);

#endif

/* End of soapStub.h */
