// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently,
// but are changed infrequently

#pragma once

#if !defined(STRICT)
#define STRICT
#endif

#include "targetver.h"
#include "resource.h"
#include <Windows.h>
#include <ShellAPI.h>
#include <CommCtrl.h>

#define _ATL_APARTMENT_THREADED
#define _ATL_NO_AUTOMATIC_NAMESPACE
#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS
#define ATL_NO_ASSERT_ON_DESTROY_NONEXISTENT_WINDOW
#include <atlbase.h>
#include <atlcom.h>
#include <atlstr.h>
#include <atltypes.h>
#include <atlcoll.h>
#include <atlsync.h>
#include <atlwin.h>
#include <atlctl.h>
