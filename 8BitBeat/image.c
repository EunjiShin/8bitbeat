#include "Common.h"

void images(int x, int y, char* string)
{
	HINSTANCE hInstance = GetModuleHandle(NULL);
	HWND myconsole = GetConsoleWindow();
	HBITMAP hImage, hOldBitmap;

	HDC hdc = GetDC(myconsole);
	HDC hMemDC = CreateCompatibleDC(hdc);
	// 이미지 로드
	hImage = (HBITMAP)LoadImage(NULL,
		TEXT("consolbmp.bmp"), IMAGE_BITMAP,
		0,
		0,
		LR_LOADFROMFILE | LR_CREATEDIBSECTION);

	hOldBitmap = (HBITMAP)SelectObject(hMemDC, hImage);
	BitBlt(hdc, x, y, 135, 36, hMemDC, 0, 0, SRCCOPY);

	return;
}