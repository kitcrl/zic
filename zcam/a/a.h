#ifndef __A_H_F2DBDC40_6196_4E67_A689_D31A9310BEC0__
#define __A_H_F2DBDC40_6196_4E67_A689_D31A9310BEC0__

#include <windows.h>
#include <resource.h>
#include <__wcommon.h>

#ifdef _DEBUG
#pragma comment(linker, "/entry:WinMainCRTStartup /subsystem:console")
#endif

#pragma comment(lib, "vfw32.lib")

enum
{
  _IDC_WEBCAM_VIEW,
  _IDC_MAX
};


#if (defined XWIN32 || defined WINCE)
#pragma pack(1)
#endif
typedef struct
{
  HINSTANCE  hinst[2];
  HWND       hdlg;

  WNDPROC       _oldproc;
  _WND       hitem[_IDC_MAX];
}XWND;
#if (defined XWIN32 || defined WINCE)
#pragma pack()
#endif


#endif