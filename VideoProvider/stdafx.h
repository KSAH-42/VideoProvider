// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently,
// but are changed infrequently

#pragma once

#ifndef STRICT
#define STRICT
#endif

#include "targetver.h"

#define _ATL_APARTMENT_THREADED

#define _ATL_NO_AUTOMATIC_NAMESPACE

#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS	// some CString constructors will be explicit


#define ATL_NO_ASSERT_ON_DESTROY_NONEXISTENT_WINDOW

#include "resource.h"
#include <atlbase.h>
#include <atlcom.h>
#include <atlctl.h>
#include <atlctl.h>
#include <atlstr.h>


#pragma warning( disable : 4995 )

#include <DShow.h>
#include <d3d9.h>
#include <Vmr9.h>
#include "DataConverter.h"
#include "CoInitializer.h"

#pragma comment( lib , "Strmiids" )

#pragma warning ( disable : 4091 )

extern "C" const GUID ;

#pragma warning ( suppress : 4091 )