#include "Common.h"
#include "Character.h"

void gotoxy(int x, int y)
{
	COORD Pos = { x - 1, y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void SetColor(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void CursorView(char show) {
	HANDLE hConsole;
	CONSOLE_CURSOR_INFO ConsoleCursor;

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	ConsoleCursor.bVisible = show;
	ConsoleCursor.dwSize = 1;

	SetConsoleCursorInfo(hConsole, &ConsoleCursor);
}

int GetFontSize(HANDLE windowHandle, COORD *size)
{
	CONSOLE_FONT_INFOEX font = { sizeof(CONSOLE_FONT_INFOEX) };

	if (!GetCurrentConsoleFontEx(windowHandle, 0, &font))
	{
		return 0;
	}

	*size = font.dwFontSize;

	return 1;
}

int SetFontSize(HANDLE windowHandle, COORD size)
{
	CONSOLE_FONT_INFOEX font = { sizeof(CONSOLE_FONT_INFOEX) };

	if (!GetCurrentConsoleFontEx(windowHandle, 0, &font))
	{
		return 0;
	}

	font.dwFontSize = size;

	if (!SetCurrentConsoleFontEx(windowHandle, 0, &font))
	{
		return 0;
	}

	return 1;
}

void changeFsize(double fsize) {
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD size;

	if (GetFontSize(h, &size))
	{
		size.X -= (SHORT)(size.X * fsize);
		size.Y -= (SHORT)(size.Y * fsize);
		SetFontSize(h, size);
	}
}

//void free_own() {
//	
//	
//	for (int k = 0; k < 4; k++) {
//		for (int i = 0; i < 60; i++) {
//			free(own_blackpink[k].member_image[i]);
//			own_blackpink[k].member_image[i] = NULL;
//		}
//		free(own_blackpink[k].member_image);
//		own_blackpink[k].member_image = NULL;
//		free(own_blackpink[k].name);
//	}
//	free(own_blackpink);
//
//	for (int k = 0; k < 7; k++) {
//
//		for (int i = 0; i <= 41; i++) {
//			free(own_bts[k].member_image[i]);
//		}
//		free(own_bts[k].member_image);
//		free(own_bts[k].name);
//	}
//	free(own_bts);
//
//}