#pragma once

#include <stdio.h>
#include <Windows.h>
#include <conio.h>
#include <string.h>

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


typedef struct own_member {
	char name[20];  // 멤버 이름
	char member_image[40][60];
}OWN;

OWN own_bts[7];
OWN own_blackpink[4];

void add_c(OWN get);
void c_print();
void board();

// --------------own_character.c---------------
void add_menu();
void Print_Box(); // 메뉴박스
void Print_Menu();  // 메뉴 출력
int Choice_Menu();
void control_menu(char choice, int *height);


void BP_frame();
void BP_frame2();


void RV_frame();
void RV_frame2();


void BTS_frame();
void BTS_frame2();
void BTS_frame3();


void print_question(int x, int y);
void Info(int i, int x, int y, CH *group);
OWN get_character(double score, CH *group, int flag);

//-----------------

void make_own();