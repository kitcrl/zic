#include "a.h"

XWND wnd;




void fxWM_INIT_TABCONTROL(HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam)
{
}

void fxWM_INITDIALOG(HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam)
{
  //int _index = 0;
  //char _top_title[256];
  //init_rand();


  //wnd.hdlg = hwnd;
  //fxWM_INIT_TABCONTROL(hwnd, msg, wparam, lparam);

  //#if defined USER_TAB
  //SHOW_MODE[USER_TAB]= SW_SHOW;
  //#else
  //SHOW_MODE[WDRAWWND]= SW_SHOW;
  //#endif

  //#if 1
  //wnd.htabwnd[WDRAWWND] = CreateDialogParam(wnd.hinst[0], MAKEINTRESOURCE(IDD_FORMVIEW_DRAW), wnd.hitem[TAB_CONTROL], (DLGPROC)wdrawwnd_dlgproc, lparam);
  //SetParent(wnd.htabwnd[WDRAWWND], hwnd);
  //SetWindowPos(wnd.htabwnd[WDRAWWND], 0, wnd.rct.left+TAB_LEFT_MARGIN, wnd.rct.top+TAB_TOP_MARGIN, wnd.rct.right, wnd.rct.bottom, SWP_NOZORDER|SWP_SHOWWINDOW);
  //ShowWindow(wnd.htabwnd[WDRAWWND], SHOW_MODE[WDRAWWND]);

  //wnd.htabwnd[WMTIF] = CreateDialogParam(wnd.hinst[0], MAKEINTRESOURCE(IDD_FORMVIEW_MAIN), wnd.hitem[TAB_CONTROL], (DLGPROC)wmtif_dlgproc, lparam);
  //SetParent(wnd.htabwnd[WMTIF], hwnd);
  //SetWindowPos(wnd.htabwnd[WMTIF], 0, wnd.rct.left+TAB_LEFT_MARGIN, wnd.rct.top+TAB_TOP_MARGIN, wnd.rct.right, wnd.rct.bottom, SWP_NOZORDER|SWP_SHOWWINDOW);
  //ShowWindow(wnd.htabwnd[WMTIF], SHOW_MODE[WMTIF]);

  //wnd.htabwnd[WPRIME] = CreateDialogParam(wnd.hinst[0], MAKEINTRESOURCE(IDD_FORMVIEW_PRIME), wnd.hitem[TAB_CONTROL], (DLGPROC)wprime_dlgproc, lparam);
  //SetParent(wnd.htabwnd[WPRIME], hwnd);
  //SetWindowPos(wnd.htabwnd[WPRIME], 0, wnd.rct.left+TAB_LEFT_MARGIN, wnd.rct.top+TAB_TOP_MARGIN, wnd.rct.right, wnd.rct.bottom, SWP_NOZORDER|SWP_SHOWWINDOW);
  //ShowWindow(wnd.htabwnd[WPRIME], SHOW_MODE[WPRIME]);

  //wnd.htabwnd[WBITMAP] = CreateDialogParam(wnd.hinst[0], MAKEINTRESOURCE(IDD_FORMVIEW_BITMAP), wnd.hitem[TAB_CONTROL], (DLGPROC)wbitmap_dlgproc, lparam);
  //SetParent(wnd.htabwnd[WBITMAP], hwnd);
  //SetWindowPos(wnd.htabwnd[WBITMAP], 0, wnd.rct.left + TAB_LEFT_MARGIN, wnd.rct.top + TAB_TOP_MARGIN, wnd.rct.right, wnd.rct.bottom, SWP_NOZORDER | SWP_SHOWWINDOW);
  //ShowWindow(wnd.htabwnd[WBITMAP], SHOW_MODE[WBITMAP]);

  //wnd.htabwnd[WWSC] = CreateDialogParam(wnd.hinst[0], MAKEINTRESOURCE(IDD_FORMVIEW_WSC), wnd.hitem[TAB_CONTROL], (DLGPROC)wwsc_dlgproc, lparam);
  //SetParent(wnd.htabwnd[WWSC], hwnd);
  //SetWindowPos(wnd.htabwnd[WWSC], 0, wnd.rct.left + TAB_LEFT_MARGIN, wnd.rct.top + TAB_TOP_MARGIN, wnd.rct.right, wnd.rct.bottom, SWP_NOZORDER | SWP_SHOWWINDOW);
  //ShowWindow(wnd.htabwnd[WWSC], SHOW_MODE[WWSC]);

  //wnd.htabwnd[WWSGW] = CreateDialogParam(wnd.hinst[0], MAKEINTRESOURCE(IDD_FORMVIEW_WSGW), wnd.hitem[TAB_CONTROL], (DLGPROC)wwsgw_dlgproc, lparam);
  //SetParent(wnd.htabwnd[WWSGW], hwnd);
  //SetWindowPos(wnd.htabwnd[WWSGW], 0, wnd.rct.left + TAB_LEFT_MARGIN, wnd.rct.top + TAB_TOP_MARGIN, wnd.rct.right, wnd.rct.bottom, SWP_NOZORDER | SWP_SHOWWINDOW);
  //ShowWindow(wnd.htabwnd[WWSGW], SHOW_MODE[WWSGW]);


  //for ( _index=0; ; _index++)
  //{
  //  if ( SHOW_MODE[_index] == SW_SHOW )
  //  {
  //    break;
  //  }
  //}  
  //SendMessage(wnd.hitem[TAB_CONTROL], TCM_SETCURSEL, (WPARAM)_index, 0);


  //InvalidateRect(wnd.hitem[TAB_CONTROL], 0, TRUE);


  //mtif_create(&wnd.mtif);
  //wnd.wd.pm = &wnd.mtif;
  //wnd.wm.pm = &wnd.mtif;
  //wnd.wp.pm = &wnd.mtif;
  //wnd.wb.pm = &wnd.mtif;
  //wnd.ww.pm = &wnd.mtif;
  //wnd.wg.pm = &wnd.mtif;

  //wdrawwnd_init(wnd.htabwnd[WDRAWWND], &wnd.wd);
  //wmtif_init(wnd.htabwnd[WMTIF], &wnd.wm);
  //wprime_init(wnd.htabwnd[WPRIME], &wnd.wp);
  //wbitmap_init(wnd.htabwnd[WBITMAP], &wnd.wb);
  //wwsc_init(wnd.htabwnd[WWSC], &wnd.ww);
  //wwsgw_init(wnd.htabwnd[WWSGW], &wnd.wg);
  //#endif


  //

  //sprintf(_top_title, TEXT("%s : (%d) "), TOP_TITLE, (int)GetCurrentThreadId());

  ////sprintf(_top_title, TEXT("%s : (%cE) (%d) "), TOP_TITLE, wnd.mtif.checkArch(0), (int)GetCurrentThreadId());

  //SetWindowText(hwnd, _top_title);

  //init_tray(wnd.hinst[0], hwnd);
}

void fxWM_COMMAND(HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam)
{
  //ontray_command(hwnd, msg, wparam, lparam);
}



void fxWM_NOTIFY(HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam)
{
}



BOOL CALLBACK dlgproc(HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam)
{
  switch(msg)
  {
    case WM_INITDIALOG:
      fxWM_INITDIALOG(hwnd, msg, wparam, lparam);
      return TRUE;

    case WM_CREATE:
      return TRUE;

    case WM_COMMAND:
      fxWM_COMMAND(hwnd, msg, wparam, lparam);
      return TRUE;

    case WM_NOTIFY:
      fxWM_NOTIFY(hwnd, msg, wparam, lparam);
      return TRUE;

    case WM_PAINT:
      InvalidateRect(hwnd, 0, TRUE);      
      break;

    case WM_CLOSE:
    case WM_DESTROY:
      PostQuitMessage(0);
      break;

    default:
      //return ontray_proc(hwnd, msg, wparam, lparam);
      break;
  }

  return 0;
}


void setup(HINSTANCE hinst, HINSTANCE hpinst, LPSTR cmd, int nshow)
{
  wnd.hinst[0] = hinst;
  wnd.hinst[1] = hpinst;
  DialogBox(hinst, (LPCSTR)IDD_DIALOG, HWND_DESKTOP, (DLGPROC)dlgproc);
}


int WINAPI WinMain(HINSTANCE hinst, HINSTANCE hpinst, LPSTR cmd, int nshow)
{
  setup(hinst, hpinst, cmd, nshow);
  return TRUE;
}
