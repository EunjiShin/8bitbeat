#pragma once

#include <stdio.h>
#include <Windows.h>

#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80
#define ESC 27
#define ENTER 13
#define SPACE 32


void gotoxy(int x, int y);
void HideCursor();
void SetColor(int color);
void images(int x, int y, char* string);


// ingame용 헤더 나중에 만들기
void change_screen();
void back_screen();
void back_screen2();
void change();
unsigned _stdcall Thread_change_screen(void *arg);
void ready_number();
void ready_start();

void CursorView(char show);
