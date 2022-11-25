#include <Windows.h>
#include <tchar.h>
#include "resource.h"

HWND hB1, hB2, hB3, hB4, hB5, hB6, hB7, hB8, hB9;
HWND hPic1, hPic2, hPic3, hPic4, hPic5, hPic6, hPic7, hPic8, hPic9;
HBITMAP hBmpX, hBmpO; 
short change = NULL; short step = NULL;
short x1X = NULL; short x2X = NULL; short x3X = NULL;
short x1O = NULL; short x2O = NULL; short x3O = NULL;
short y1X = NULL; short y2X = NULL; short y3X = NULL;
short y1O = NULL; short y2O = NULL; short y3O = NULL;
short d1X = NULL; short d2X = NULL; 
short d1O = NULL; short d2O = NULL; 

BOOL CALLBACK DlgProc(HWND, UINT, WPARAM, LPARAM);

int WINAPI _tWinMain(HINSTANCE hInstance, HINSTANCE hPrevInst, LPTSTR lpszCmdLine, int nCmdShow)
{
	return DialogBox(hInstance, MAKEINTRESOURCE(IDD_DIALOG1), NULL, (DLGPROC)DlgProc);
}

BOOL CALLBACK DlgProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	switch (message)
	{
	case WM_CLOSE:
		EndDialog(hWnd, NULL);
		return(TRUE);
	case WM_INITDIALOG:
		hB1 = GetDlgItem(hWnd, IDC_BUTTON1);
		hB2 = GetDlgItem(hWnd, IDC_BUTTON2);
		hB3 = GetDlgItem(hWnd, IDC_BUTTON3);
		hB4 = GetDlgItem(hWnd, IDC_BUTTON4);
		hB5 = GetDlgItem(hWnd, IDC_BUTTON5);
		hB6 = GetDlgItem(hWnd, IDC_BUTTON6);
		hB7 = GetDlgItem(hWnd, IDC_BUTTON7);
		hB8 = GetDlgItem(hWnd, IDC_BUTTON8);
		hB9 = GetDlgItem(hWnd, IDC_BUTTON9);
		hPic1 = GetDlgItem(hWnd, IDC_PICTURE1);
		hPic2 = GetDlgItem(hWnd, IDC_PICTURE2);
		hPic3 = GetDlgItem(hWnd, IDC_PICTURE3);
		hPic4 = GetDlgItem(hWnd, IDC_PICTURE4);
		hPic5 = GetDlgItem(hWnd, IDC_PICTURE5);
		hPic6 = GetDlgItem(hWnd, IDC_PICTURE6);
		hPic7 = GetDlgItem(hWnd, IDC_PICTURE7);
		hPic8 = GetDlgItem(hWnd, IDC_PICTURE8);
		hPic9 = GetDlgItem(hWnd, IDC_PICTURE9);
		hBmpX = LoadBitmap(GetModuleHandle(NULL), MAKEINTRESOURCE(IDB_BITMAP2));
		hBmpO = LoadBitmap(GetModuleHandle(NULL), MAKEINTRESOURCE(IDB_BITMAP3));
		return(TRUE);
	case WM_COMMAND:
		if (LOWORD(wParam) == IDC_BUTTON1)
		{
			if (change == NULL)
			{
				SendMessage(hPic1, STM_SETIMAGE, WPARAM(IMAGE_BITMAP), LPARAM(hBmpX));
				EnableWindow(hB1, FALSE);
				++change;
				++x1X;
				++y1X;
				++d1X;
				++step;
			}
			else
			{
				SendMessage(hPic1, STM_SETIMAGE, WPARAM(IMAGE_BITMAP), LPARAM(hBmpO));
				EnableWindow(hB1, FALSE);
				change = NULL; 
				++x1O;
				++y1O;
				++d1O;
				++step;
			}
		}
		else if (LOWORD(wParam) == IDC_BUTTON2)
		{
			if (change == NULL)
			{
				SendMessage(hPic2, STM_SETIMAGE, WPARAM(IMAGE_BITMAP), LPARAM(hBmpX));
				EnableWindow(hB2, FALSE);
				++change;
				++x2X;
				++y1X;
				++step;
			}
			else 
			{
				SendMessage(hPic2, STM_SETIMAGE, WPARAM(IMAGE_BITMAP), LPARAM(hBmpO));
				EnableWindow(hB2, FALSE);
				change = NULL;
				++x2O;
				++y1O;
				++step;
			}
		}
		else if (LOWORD(wParam) == IDC_BUTTON3)
		{
			if (change == NULL)
			{
				SendMessage(hPic3, STM_SETIMAGE, WPARAM(IMAGE_BITMAP), LPARAM(hBmpX));
				EnableWindow(hB3, FALSE);
				++change;
				++x3X;
				++y1X;
				++d2X;
				++step;
			}
			else
			{
				SendMessage(hPic3, STM_SETIMAGE, WPARAM(IMAGE_BITMAP), LPARAM(hBmpO));
				EnableWindow(hB3, FALSE);
				change = NULL;
				++x3O;
				++y1O;
				++d2O;
				++step;
			}
		}
		else if (LOWORD(wParam) == IDC_BUTTON4)
		{
			if (change == NULL)
			{
				SendMessage(hPic4, STM_SETIMAGE, WPARAM(IMAGE_BITMAP), LPARAM(hBmpX));
				EnableWindow(hB4, FALSE);
				++change;
				++x1X;
				++y2X;
				++step;
			}
			else
			{
				SendMessage(hPic4, STM_SETIMAGE, WPARAM(IMAGE_BITMAP), LPARAM(hBmpO));
				EnableWindow(hB4, FALSE);
				change = NULL;
				++x1O;
				++y2O;
				++step;
			}
		}
		else if (LOWORD(wParam) == IDC_BUTTON5)
		{
			if (change == NULL)
			{
				SendMessage(hPic5, STM_SETIMAGE, WPARAM(IMAGE_BITMAP), LPARAM(hBmpX));
				EnableWindow(hB5, FALSE);
				++change;
				++x2X;
				++y2X;
				++d1X;
				++d2X;
				++step;
			}
			else
			{
				SendMessage(hPic5, STM_SETIMAGE, WPARAM(IMAGE_BITMAP), LPARAM(hBmpO));
				EnableWindow(hB5, FALSE);
				change = NULL;
				++x2O;
				++y2O;
				++d1O;
				++d2O;
				++step;
			}
		}
		else if (LOWORD(wParam) == IDC_BUTTON6)
		{
			if (change == NULL)
			{
				SendMessage(hPic6, STM_SETIMAGE, WPARAM(IMAGE_BITMAP), LPARAM(hBmpX));
				EnableWindow(hB6, FALSE);
				++change;
				++x3X;
				++y2X;
				++step;
			}
			else
			{
				SendMessage(hPic6, STM_SETIMAGE, WPARAM(IMAGE_BITMAP), LPARAM(hBmpO));
				EnableWindow(hB6, FALSE);
				change = NULL;
				++x3O;
				++y2O;
				++step;
			}
		}
		else if (LOWORD(wParam) == IDC_BUTTON7)
		{
			if (change == NULL)
			{
				SendMessage(hPic7, STM_SETIMAGE, WPARAM(IMAGE_BITMAP), LPARAM(hBmpX));
				EnableWindow(hB7, FALSE);
				++change;
				++x1X;
				++y3X;
				++d2X;
				++step;
			}
			else
			{
				SendMessage(hPic7, STM_SETIMAGE, WPARAM(IMAGE_BITMAP), LPARAM(hBmpO));
				EnableWindow(hB7, FALSE);
				change = NULL;
				++x1O;
				++y3O;
				++d2O;
				++step;
			}
		}
		else if (LOWORD(wParam) == IDC_BUTTON8)
		{
			if (change == NULL)
			{
				SendMessage(hPic8, STM_SETIMAGE, WPARAM(IMAGE_BITMAP), LPARAM(hBmpX));
				EnableWindow(hB8, FALSE);
				++change;
				++x2X;
				++y3X;
				++step;
			}
			else
			{
				SendMessage(hPic8, STM_SETIMAGE, WPARAM(IMAGE_BITMAP), LPARAM(hBmpO));
				EnableWindow(hB8, FALSE);
				change = NULL;
				++x2O;
				++y3O;
				++step;
			}
		}
		else if (LOWORD(wParam) == IDC_BUTTON9)
		{
			if (change == NULL)
			{
				SendMessage(hPic9, STM_SETIMAGE, WPARAM(IMAGE_BITMAP), LPARAM(hBmpX));
				EnableWindow(hB9, FALSE);
				++change;
				++x3X;
				++y3X;
				++d1X;
				++step;
			}
			else
			{
				SendMessage(hPic9, STM_SETIMAGE, WPARAM(IMAGE_BITMAP), LPARAM(hBmpO));
				EnableWindow(hB9, FALSE);
				change = NULL;
				++x3O;
				++y3O;
				++d1O;
				++step;
			}
		}
		else
		{
			return(TRUE);
		}
		if (x1X == 3 || x2X == 3 || x3X == 3 || y1X == 3 || y2X == 3 || y3X == 3 || d1X == 3 || d2X == 3)
		{
			MessageBox(hWnd, TEXT("User X is won"), TEXT("Info"), MB_OK);
			EndDialog(hWnd, NULL);
			return(TRUE);
		}
		else if (x1O == 3 || x2O == 3 || x3O == 3 || y1O == 3 || y2O == 3 || y3O == 3 || d1O == 3 || d2O == 3)
		{
			MessageBox(hWnd, TEXT("User O is won"), TEXT("Info"), MB_OK);
			EndDialog(hWnd, NULL);
			return(TRUE);
		}
		else if (step == 9)
		{
			MessageBox(hWnd, TEXT("Draw"), TEXT("Info"), MB_OK);
			EndDialog(hWnd, NULL);
			return(TRUE);
		}
		else
		{
			return(TRUE);
		}
		return(TRUE);
	}
	return(FALSE);
}