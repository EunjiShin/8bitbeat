#pragma once

#include <stdio.h>
#include <Windows.h>
#include <conio.h>

#define BlackPink 4
#define Redvelvet 5
#define BTS 7

typedef struct kpop_member {
	int num; // ��Ʈ�� ������ ĳ���� ��ȣ
	char name[20];  // ��� �̸�
	char member_image[40][60];  // ��� �̹���
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
void Print_Box(); // �޴��ڽ�
void Print_Menu();  // �޴� ���
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