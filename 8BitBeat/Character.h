#pragma once

#include <stdio.h>
#include <Windows.h>
#include <conio.h>

#define BlackPink 4
#define Redvelvet 5
#define BTS 7

typedef struct kpop_member {
	int num; // 파트당 배정할 캐릭터 번호
	char name[20];  // 멤버 이름
	char member_image[40][60];  // 멤버 이미지
}CH;

void PrintBP(int i, int x, int y);
void PrintRV(int i, int x, int y);
void PrintBT(int i, int x, int y);

CH blackpink[BlackPink];
CH redvelvet[Redvelvet];
CH bts[BTS];

void add_c();
void c_print();
void board();

// --------------own_character.c---------------
void add_menu();
void Own_Character();
void Print_Box(); // 메뉴박스
void Print_Menu();  // 메뉴 출력
int Choice_Menu();
void control_menu(char choice, int *height);


void BP_frame();
void BP_Print();
void BP_Info(int i, int x, int y);


void RV_frame();
void RV_frame2();
void RV_Print();
void RV_Info(int i, int x, int y);



void BTS_frame();
void BTS_frame2();
void BTS_frame3();
void BTS_Print();
void BTS_Info(int i, int x, int y);

void print_question(int x, int y);