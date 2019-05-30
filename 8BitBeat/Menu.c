#pragma once
#include "Music.h"
#include "Menu.h"

void M_line_Print()		// menu box 출력
{
	system("mode con: cols=135 lines=36");
	gotoxy(36, 10);
	printf("┌────────────────────────────────────────────────────────────┐\n");
	gotoxy(36, 11);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　│\n");
	gotoxy(36, 12);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　│\n");
	gotoxy(36, 13);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　│\n");
	gotoxy(36, 14);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　│\n");
	gotoxy(36, 15);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　│\n");
	gotoxy(36, 16);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　│\n");
	gotoxy(36, 17);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　│\n");
	gotoxy(36, 18);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　│\n");
	gotoxy(36, 19);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　│\n");
	gotoxy(36, 20);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　│\n");
	gotoxy(36, 21);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　│\n");
	gotoxy(36, 22);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　│\n");
	gotoxy(36, 23);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　│\n");
	gotoxy(36, 24);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　│\n");
	gotoxy(36, 25);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　│\n");
	gotoxy(36, 26);
	printf("└────────────────────────────────────────────────────────────┘\n");
}

void M_key(char key, int *x1, int *y1)	// menu에서 동작키
{
	switch (key)
	{
	case UP:
		*y1 = *y1 - 3;
		if (*y1 < 12) *y1 = 12;	// menu 1번보다 위로 움직이지 않도록 고정
		break;
	case DOWN:
		*y1 = *y1 + 3;
		if (*y1 > 24) *y1 = 24;	// menu 5번보다 아래로 움직이지 않도록 고정
		break;
	default: return;
	}
}

void M_print()	// menu 프린트
{
	gotoxy(61, 12);
	printf("1. 게임 설명\n\n");
	gotoxy(61, 15);
	printf("2. 게임 시작\n\n");
	gotoxy(61, 18);
	printf("3. 랭킹 보기\n\n");
	gotoxy(60, 21);
	printf("4. 캐릭터 보기\n\n");
	gotoxy(61, 24);
	printf("5. 게임 종료\n");
}

int M_move_arrow()			// 화살표 동작 중 Enter 눌리면 menu값 반환
{
	char menu = 0, ch;		// menu 0이면 오류, 키보드 입력받을 ch
	int x = 58, y = 24;		// 초기의 "▶" 위치 지정
	while (1)
	{
		switch (y)					// y값에 따라 menu값 결정
		{
		case 12: menu = 1; break;
		case 15: menu = 2; break;
		case 18: menu = 3; break;
		case 21: menu = 4; break;
		case 24: menu = 5; break;
		default: printf("Error!\n"); exit(1);
		}
		gotoxy(x, y);
		printf("▶");
		ch = getch();	// 입력
		if (ch == ENTER)	// ENTER 입력시
		{
			system("cls");
			return menu;	// menu값을 반환
		}
		gotoxy(x, y);
		printf("  ");		// "▶"를 지우고 이동
		M_key(ch, &x, &y);	// 이동
	}
}

void Menu()
{
	int menu;
	while (1)
	{
		M_line_Print();
		M_print();
		menu = M_move_arrow();
		switch (menu)	// 각 메뉴 선택에 맞는 동작 실행
		{
		case 1:
			Print_info();
			break;
		case 2:
			Start_Game();
			break;
		case 3:
			Print_Lank();
			break;
		case 4:
			Print_character();
			break;
		case 5:
			system("cls");
			gotoxy(60, 19);
			printf("게임을 종료합니다.");
			Sleep(900);
			system("cls");
			exit(1);
		}
	}
}
void Print_info()
{
	gotoxy(38, 10);
	printf("아이돌이 되고 싶은 ● ■ ▲ ^ * 기호들 ...");
	gotoxy(38, 12);
	printf("-------------------------------------------------------");
	gotoxy(38, 15);
	printf("리듬에 맞춰");
	gotoxy(38, 17);
	printf("달리기를 완주하여 아이돌 멤버를 모두 모아보세요!");
	gotoxy(38, 19);
	printf("내가 받은 점수로 기호들이 성장할 수 있는 아이돌이 결정됩니다.");
	gotoxy(38, 21);
	printf("간단한 조작과 　　　을 이용한 전략적 점수 조절!");
	gotoxy(38, 23);
	printf("● ■ ▲ ^ * 가 열심히 달려 아이돌이 될 수 있게 도와주세요!");

	while (!kbhit())
	{
		gotoxy(51, 15);
		printf("▶SPACE◀");
		gotoxy(52, 21);
		printf("[트랩]");
		gotoxy(82, 27);
		printf("Press Enter...");
		Sleep(500);
		gotoxy(51, 15);
		printf("          ");
		gotoxy(52, 21);
		printf("      ");
		gotoxy(82, 27);
		printf("               ");
		Sleep(300);
	}
	getch();	// 다음 동작을 위해 buffer 버리기
}
void Start_Game()
{
	char ch;
	int music = 100;
	music_comeon();
	do {
		ch = getch();
		switch (ch)
		{
		case LEFT: 
			music--;
			break;
		case RIGHT:
			music++;
			break;
		case ENTER:
			music %= 3;
			// 게임 시작한다  음악 music번으로!
			break;
		default:
			break;
		}
	} while (ch != ESC);
}
void Print_Lank()
{

}
void Print_character()
{
	system("mode con: cols=135 lines=36");
	system("cls");

	PrintBP(0, 5, 5);

	system("pause");
	system("cls");
	PrintBP(1, 5, 5);
	system("pause");
	system("cls");
	PrintBP(2, 5, 5);
	system("pause");
	system("cls");
	PrintBP(3, 5, 5);
	system("pause");
	system("cls");
}