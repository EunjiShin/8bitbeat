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
	music_comeon();
	//ingame(1);
}

void ingame(int music_value)
{
	system("cls");
	switch (music_value)
	{
	case 0:
		dddd();
		break;
	case 1:
		fakelove();
		break;
	}
}

void dddd()
{
	int trapFlag = 0; // 다음 파트 트랩값 저장 0: 기본 1: 빠르게 2: 거꾸로 3:마스크
	double TotalScore = 0;
	musicFlag = 0;
	system("cls");
	PlaySound(TEXT("dddd_Part_01.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	print_map("dddd", 1, trapFlag, &TotalScore, musicFlag, blackpink);
	PlaySound(TEXT("dddd_Part_02.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	print_map("dddd", 2, trapFlag, &TotalScore, musicFlag, blackpink);
	PlaySound(TEXT("dddd_Part_03.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	print_map("dddd", 3, trapFlag, &TotalScore, musicFlag, blackpink);
	PlaySound(TEXT("dddd_Part_04.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	print_map("dddd", 4, trapFlag, &TotalScore, musicFlag, blackpink);
	PlaySound(TEXT("dddd_Part_05.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	print_map("dddd", 5, trapFlag, &TotalScore, musicFlag, blackpink);
	PlaySound(TEXT("dddd_Part_06.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	print_map("dddd", 6, trapFlag, &TotalScore, musicFlag, blackpink);
	PlaySound(TEXT("dddd_Part_07.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	print_map("dddd", 7, trapFlag, &TotalScore, musicFlag, blackpink);
}

void fakelove()
{
	int trapFlag = 0;
	double TotalScore = 0;
	musicFlag = 1;
	system("cls");
	PlaySound(TEXT("fakelove_Part_01.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	print_map("fakelove", 1, trapFlag, &TotalScore, musicFlag, bts);
	PlaySound(TEXT("fakelove_Part_02.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	print_map("fakelove", 2, trapFlag, &TotalScore, musicFlag, bts);
	PlaySound(TEXT("fakelove_Part_03.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	print_map("fakelove", 3, trapFlag, &TotalScore, musicFlag, bts);
	PlaySound(TEXT("fakelove_Part_04.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	print_map("fakelove", 4, trapFlag, &TotalScore, musicFlag, bts);
	PlaySound(TEXT("fakelove_Part_05.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	print_map("fakelove", 5, trapFlag, &TotalScore, musicFlag, bts);
	PlaySound(TEXT("fakelove_Part_06.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	print_map("fakelove", 7, trapFlag, &TotalScore, musicFlag, bts);
}

int print_map(char* musicName, int part, int trapFlag, double *TotalScore, int musicFlag, CH *group)
{
	int mapDelay = 0, y = 3, map_y;
	double score = 0;
	char temp, ch;
	CursorView(0);
	system("mode con: cols=180 lines=50");
	if (part == 1)
	{
		changeFsize(3);
	}
	mapFrame();
	while (mapDelay != 100)
	{
		map_y = 1;
		for (int i = 0; i < 10; i++)
		{
			gotoxy(20, map_y);
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
		gotoxy(/*점수를 어디에 찍을까?*/20, 13);
		printf("SCORE : %4.2f + ", *TotalScore);
		score = score_check(score, trapFlag, DDDD_DELAY);
		gotoxy(20, y);
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
		over_check(y, mapDelay, score+(*TotalScore), musicFlag, group);
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
	gotoxy(20 + 17, 13);
	printf("%.2f", score);
	return score;
}

//void over_check(int y, int delay, double score)
//{
//	OWN temp;
//	
//	int overFlag = 0;
//	if (map[y - 2][delay] == 1)
//		overFlag++;
//	if (y > 11)
//		overFlag++;
//	if (overFlag)
//	{   
//		temp = get_character(score, blackpink, 0); // 임의로 넣어둔 것! blackpink랑 0은 노래 달라질때 bts랑 1로 바꿔야함.
//		system("cls");
//		//캐릭터 얻는 화면으로 이동
//		add_c(temp);
//		Sleep(3000);
//		Menu();
//	}
//	
//}

void over_check(int y, int delay, double score, int musicFlag, CH *group)
{
	OWN temp;
	int overFlag = 0;
	if (map[y - 2][delay] == 1)
		overFlag++;
	if (y > 11)
		overFlag++;

	if (overFlag)
	{
		temp = get_character(score, group, musicFlag); // 임의로 넣어둔 것! blackpink랑 0은 노래 달라질때 bts랑 1로 바꿔야함.
		system("cls");                        // musicFlag
		//캐릭터 얻는 화면으로 이동
		add_c(temp);
		Sleep(3000);

		Menu();
	}
	return;
}


void mapFrame()
{
	for (int i = 1; i <= 14; i++)
	{
		gotoxy(18, i);
		printf("▒");
		gotoxy(80, i);
		printf("▒");
	}
	gotoxy(20, 12);
	printf("============================================================");
	gotoxy(18, 14);
	printf("▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒");
}