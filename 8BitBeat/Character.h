#pragma once

#include <stdio.h>
#include <Windows.h>

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
