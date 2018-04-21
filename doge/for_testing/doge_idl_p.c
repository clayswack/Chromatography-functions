

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Wed Apr 18 21:31:45 2018
 */
/* Compiler settings for C:\Users\Cole Swackhamer\Documents\MATLAB\doge\for_testing\doge_idl.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if !defined(_M_IA64) && !defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "doge_idl.h"

#define TYPE_FORMAT_STRING_SIZE   79                                
#define PROC_FORMAT_STRING_SIZE   145                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   1            

typedef struct _doge_idl_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } doge_idl_MIDL_TYPE_FORMAT_STRING;

typedef struct _doge_idl_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } doge_idl_MIDL_PROC_FORMAT_STRING;

typedef struct _doge_idl_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } doge_idl_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const doge_idl_MIDL_TYPE_FORMAT_STRING doge_idl__MIDL_TypeFormatString;
extern const doge_idl_MIDL_PROC_FORMAT_STRING doge_idl__MIDL_ProcFormatString;
extern const doge_idl_MIDL_EXPR_FORMAT_STRING doge_idl__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IClass1_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IClass1_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif

#if !(TARGET_IS_NT50_OR_LATER)
#error You need Windows 2000 or later to run this stub because it uses these features:
#error   /robust command line switch.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const doge_idl_MIDL_PROC_FORMAT_STRING doge_idl__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure get_MWFlags */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x7 ),	/* 7 */
/*  8 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 16 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppvFlags */

/* 24 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Return value */

/* 30 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_MWFlags */

/* 36 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 38 */	NdrFcLong( 0x0 ),	/* 0 */
/* 42 */	NdrFcShort( 0x8 ),	/* 8 */
/* 44 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 46 */	NdrFcShort( 0x0 ),	/* 0 */
/* 48 */	NdrFcShort( 0x8 ),	/* 8 */
/* 50 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 52 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 54 */	NdrFcShort( 0x0 ),	/* 0 */
/* 56 */	NdrFcShort( 0x0 ),	/* 0 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pvFlags */

/* 60 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 62 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 64 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Return value */

/* 66 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 68 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 70 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure doge */

/* 72 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 74 */	NdrFcLong( 0x0 ),	/* 0 */
/* 78 */	NdrFcShort( 0x9 ),	/* 9 */
/* 80 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 82 */	NdrFcShort( 0x0 ),	/* 0 */
/* 84 */	NdrFcShort( 0x8 ),	/* 8 */
/* 86 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 88 */	0x8,		/* 8 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 90 */	NdrFcShort( 0x0 ),	/* 0 */
/* 92 */	NdrFcShort( 0x0 ),	/* 0 */
/* 94 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 96 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 98 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_help */

/* 102 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 104 */	NdrFcLong( 0x0 ),	/* 0 */
/* 108 */	NdrFcShort( 0xa ),	/* 10 */
/* 110 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 114 */	NdrFcShort( 0x8 ),	/* 8 */
/* 116 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 118 */	0x8,		/* 8 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 120 */	NdrFcShort( 0x1 ),	/* 1 */
/* 122 */	NdrFcShort( 0x1 ),	/* 1 */
/* 124 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter funcname */

/* 126 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 128 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 130 */	NdrFcShort( 0x32 ),	/* Type Offset=50 */

	/* Parameter helptext */

/* 132 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 134 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 136 */	NdrFcShort( 0x44 ),	/* Type Offset=68 */

	/* Return value */

/* 138 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 140 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 142 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const doge_idl_MIDL_TYPE_FORMAT_STRING doge_idl__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/*  4 */	NdrFcShort( 0x2 ),	/* Offset= 2 (6) */
/*  6 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/*  8 */	NdrFcLong( 0xa295776 ),	/* 170481526 */
/* 12 */	NdrFcShort( 0x23a1 ),	/* 9121 */
/* 14 */	NdrFcShort( 0x410a ),	/* 16650 */
/* 16 */	0x94,		/* 148 */
			0xbd,		/* 189 */
/* 18 */	0xc,		/* 12 */
			0x6c,		/* 108 */
/* 20 */	0x61,		/* 97 */
			0xb8,		/* 184 */
/* 22 */	0x91,		/* 145 */
			0xb7,		/* 183 */
/* 24 */	
			0x12, 0x0,	/* FC_UP */
/* 26 */	NdrFcShort( 0xe ),	/* Offset= 14 (40) */
/* 28 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 30 */	NdrFcShort( 0x2 ),	/* 2 */
/* 32 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 34 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 36 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 38 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 40 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 42 */	NdrFcShort( 0x8 ),	/* 8 */
/* 44 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (28) */
/* 46 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 48 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 50 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 52 */	NdrFcShort( 0x0 ),	/* 0 */
/* 54 */	NdrFcShort( 0x4 ),	/* 4 */
/* 56 */	NdrFcShort( 0x0 ),	/* 0 */
/* 58 */	NdrFcShort( 0xffde ),	/* Offset= -34 (24) */
/* 60 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 62 */	NdrFcShort( 0x6 ),	/* Offset= 6 (68) */
/* 64 */	
			0x13, 0x0,	/* FC_OP */
/* 66 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (40) */
/* 68 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 70 */	NdrFcShort( 0x0 ),	/* 0 */
/* 72 */	NdrFcShort( 0x4 ),	/* 4 */
/* 74 */	NdrFcShort( 0x0 ),	/* 0 */
/* 76 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (64) */

			0x0
        }
    };

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            BSTR_UserSize
            ,BSTR_UserMarshal
            ,BSTR_UserUnmarshal
            ,BSTR_UserFree
            }

        };



/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IClass1, ver. 0.0,
   GUID={0x0A917A90,0x5DC3,0x46F2,{0x9A,0xC4,0x82,0x52,0x65,0x15,0xE6,0xE8}} */

#pragma code_seg(".orpc")
static const unsigned short IClass1_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36,
    72,
    102
    };

static const MIDL_STUBLESS_PROXY_INFO IClass1_ProxyInfo =
    {
    &Object_StubDesc,
    doge_idl__MIDL_ProcFormatString.Format,
    &IClass1_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IClass1_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    doge_idl__MIDL_ProcFormatString.Format,
    &IClass1_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _IClass1ProxyVtbl = 
{
    &IClass1_ProxyInfo,
    &IID_IClass1,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IClass1::get_MWFlags */ ,
    (void *) (INT_PTR) -1 /* IClass1::put_MWFlags */ ,
    (void *) (INT_PTR) -1 /* IClass1::doge */ ,
    (void *) (INT_PTR) -1 /* IClass1::get_help */
};


static const PRPC_STUB_FUNCTION IClass1_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IClass1StubVtbl =
{
    &IID_IClass1,
    &IClass1_ServerInfo,
    11,
    &IClass1_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    doge_idl__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x700022b, /* MIDL Version 7.0.555 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _doge_idl_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IClass1ProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _doge_idl_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IClass1StubVtbl,
    0
};

PCInterfaceName const _doge_idl_InterfaceNamesList[] = 
{
    "IClass1",
    0
};

const IID *  const _doge_idl_BaseIIDList[] = 
{
    &IID_IDispatch,
    0
};


#define _doge_idl_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _doge_idl, pIID, n)

int __stdcall _doge_idl_IID_Lookup( const IID * pIID, int * pIndex )
{
    
    if(!_doge_idl_CHECK_IID(0))
        {
        *pIndex = 0;
        return 1;
        }

    return 0;
}

const ExtendedProxyFileInfo doge_idl_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _doge_idl_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _doge_idl_StubVtblList,
    (const PCInterfaceName * ) & _doge_idl_InterfaceNamesList,
    (const IID ** ) & _doge_idl_BaseIIDList,
    & _doge_idl_IID_Lookup, 
    1,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64)*/

