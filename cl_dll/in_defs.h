//========= Copyright (c) 1996-2002, Valve LLC, All rights reserved. ============
//
// Purpose:
//
// $NoKeywords: $
//=============================================================================

#ifndef __IN_DEFS_H__
#define __IN_DEFS_H__

// up / down
#define PITCH 0
// left / right
#define YAW 1
// fall over
#define ROLL 2

#ifdef _WIN32
#define HSPRITE HSPRITE_win32
#include <windows.h>
#undef HSPRITE
#undef LoadImage // BRUH
#else
typedef struct point_s
{
	int x;
	int y;
} POINT;
#define GetCursorPos( x )
#define SetCursorPos( x, y )
#endif

#endif // __IN_DEFS_H__
