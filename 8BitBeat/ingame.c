#include "Music.h"
#include "Menu.h"
#include "ingame.h"

#define DDDD_DELAY 190

char ingameCharacter[7][4] = { "●", "■", "▲", "★", "♣","♥","◆" };

char map[11][130] = {
	{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
	{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
	{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
	{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,1,0,0,0,0,0 },
	{ 0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,1,1,0,0,1,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,1,1,0,0,1,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,1,1,0,0,1,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,1,1,0,0,1,1,0,0,1,1,0,0,0 },
	{ 1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
	{ 0,0,0,0,0,1,1,0,1,1,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,1,1,0,1,1,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,1,1,0,1,1,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,1,1,0,1,1,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1 },
	{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
	{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 },
	{ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 }
};

void test()
{
	ingame(1);
}

void ingame(int music_value)
{
	system("cls");
	switch (music_value)
	{
	case 1:
		dddd();
		break;
	case 2:
		fakelove();
		break;
	}
}

void dddd()
{
	int trapFlag = 0; // 다음 파트 트랩값 저장 0: 기본 1: 빠르게 2: 거꾸로 3:마스크
	double TotalScore = 0;
	musicFlag = 1;
	system("cls");
	PlaySound(TEXT("dddd_Part_01.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	print_map("dddd", 1, trapFlag, &TotalScore);
	PlaySound(TEXT("dddd_Part_02.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	print_map("dddd", 2, trapFlag, &TotalScore);
	PlaySound(TEXT("dddd_Part_03.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	print_map("dddd", 3, trapFlag, &TotalScore);
	PlaySound(TEXT("dddd_Part_04.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	print_map("dddd", 4, trapFlag, &TotalScore);
	PlaySound(TEXT("dddd_Part_05.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	print_map("dddd", 5, trapFlag, &TotalScore);
	PlaySound(TEXT("dddd_Part_06.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	print_map("dddd", 6, trapFlag, &TotalScore);
	PlaySound(TEXT("dddd_Part_07.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	print_map("dddd", 7, trapFlag, &TotalScore);
}

void fakelove()
{
	int trapFlag = 0;
	double TotalScore = 0;
	musicFlag = 2;
	system("cls");
	PlaySound(TEXT("fakelove_Part_01.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	print_map("fakelove", 1, trapFlag, &TotalScore);
	PlaySound(TEXT("fakelove_Part_02.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	print_map("fakelove", 2, trapFlag, &TotalScore);
	PlaySound(TEXT("fakelove_Part_03.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	print_map("fakelove", 3, trapFlag, &TotalScore);
	PlaySound(TEXT("fakelove_Part_04.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	print_map("fakelove", 4, trapFlag, &TotalScore);
	PlaySound(TEXT("fakelove_Part_05.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	print_map("fakelove", 7, trapFlag, &TotalScore);
}

int print_map(char* musicName, int part, int trapFlag, double *TotalScore)
{
	int mapDelay = 0, y = 3, map_y;
	double score = 0;
	char temp, ch;

	HideCursor();
	if (part == 1)
	{
		changeFsize(3);
	}
	while (mapDelay != 100)
	{
		map_y = 1;
		for (int i = 0; i < 10; i++)
		{
			gotoxy(10, map_y);
			for (int j = mapDelay; j < 30 + mapDelay; j++)
			{
				temp = map[i][j];
				if (temp == 0)					/// 숫자로 바꿔서 따옴표 필요 없음!
					printf("  ");
				else if (temp == 1)				/// 숫자로 바꿔서 따옴표 필요 없음!
					printf("■");
			}
			map_y++;

		}
		gotoxy(/*점수를 어디에 찍을까?*/20, 12);
		printf("SCORE : %4.2f + ", *TotalScore);
		score = score_check(score, trapFlag, DDDD_DELAY);
		gotoxy(10, y);
		printf("%s", ingameCharacter[part - 1]);
		if (kbhit())
		{
			ch = getch();
			if (ch == ESC)
			{
				system("cls");
				is_ESC();
			}
			if (ch == SPACE)
			{
				y -= 3;
			}
		}
		// 바닥 검사
		if (map[y][mapDelay] != 1)
		{
			y++;
		}
		Sleep(DDDD_DELAY);
		over_check(y, mapDelay, score+(*TotalScore));
		mapDelay++;
	}
	*TotalScore += score;
	if (part == 7)
	{
		changeFsize(1.5);
	}
}

double score_check(double score, int trapFlag, int delaytime)
{
	switch (trapFlag)
	{
	case 0:
		score += 1 * ((double)delaytime / 100); break;
	case 1:
		score += 2 * ((double)delaytime / 100); break;
	case 2:
		score += 3 * ((double)delaytime / 100); break;
	case 3:
		score += 5 * ((double)delaytime / 100); break;
	}
	gotoxy(20 + 17, 12);
	printf("%.2f", score);
	return score;
}

void over_check(int y, int delay, double score)
{
	OWN *temp;
	temp = (char*)malloc(sizeof(char*) * 4);
	int overFlag = 0;
	if (map[y - 2][delay] == 1)
		overFlag++;
	if (y > 15)
		overFlag++;

	if (overFlag)
	{   
		*temp = get_character(score, blackpink, 0); // 임의로 넣어둔 것! blackpink랑 0은 노래 달라질때 bts랑 1로 바꿔야함.
		system("cls");
		//캐릭터 얻는 화면으로 이동
		add_c(temp);
		exit(1);
	}
	return;
}