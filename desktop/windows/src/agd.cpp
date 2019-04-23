#include "./pch.hpp"
#include "./resource.h"

BOOL CALLBACK DlgProc(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam) { 
  switch (message) { 
    case WM_COMMAND: 
      MessageBox(hDlg, NULL, NULL, MB_OK);
      switch (LOWORD(wParam)) { 
        case IDOK:
          /*
          if (!GetDlgItemText(hwndDlg, ID_ITEMNAME, szItemName, 80)) 
            *szItemName=0; 
          */
        case IDCANCEL: 
          EndDialog(hDlg, wParam); 
          return TRUE; 
      } 
  } 
  return FALSE; 
}

int main(int argc, char *argv[]) {
  DialogBox((HINSTANCE)GetModuleHandle(NULL), MAKEINTRESOURCE(IDD_HELP), NULL, (DLGPROC)DlgProc);
  return 0;
}
