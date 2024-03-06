#ifndef __A_H_F2DBDC40_6196_4E67_A689_D31A9310BEC0__
#define __A_H_F2DBDC40_6196_4E67_A689_D31A9310BEC0__

#include <windows.h>
#include <resource.h>

#if (defined XWIN32 || defined WINCE)
#pragma pack(1)
#endif
typedef struct
{
  HINSTANCE  hinst[2];
  HWND       hdlg;


}XWND;
#if (defined XWIN32 || defined WINCE)
#pragma pack()
#endif


#endif