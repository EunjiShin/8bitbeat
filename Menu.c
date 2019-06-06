#include "Music.h"
#include "Menu.h"

void M_line_Print()		// menu box 출력
{
	system("mode con: cols=180 lines=50");
	gotoxy(59, 18);
	printf("┌────────────────────────────────────────────────────────────┐\n");
	gotoxy(59, 19);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　│\n");
	gotoxy(59, 20);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　│\n");
	gotoxy(59, 21);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　│\n");
	gotoxy(59, 22);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　│\n");
	gotoxy(59, 23);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　│\n");
	gotoxy(59, 24);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　│\n");
	gotoxy(59, 25);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　│\n");
	gotoxy(59, 26);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　│\n");
	gotoxy(59, 27);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　│\n");
	gotoxy(59, 28);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　│\n");
	gotoxy(59, 29);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　│\n");
	gotoxy(59, 30);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　│\n");
	gotoxy(59, 31);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　│\n");
	gotoxy(59, 32);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　│\n");
	gotoxy(59, 33);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　│\n");
	gotoxy(59, 34);
	printf("└────────────────────────────────────────────────────────────┘\n");
}

void M_key(char key, int *x1, int *y1)	// menu에서 동작키
{
	switch (key)
	{
	case UP:
		*y1 = *y1 - 4;
		if (*y1 < 20) *y1 = 20;	// menu 1번보다 위로 움직이지 않도록 고정
		break;
	case DOWN:
		*y1 = *y1 + 4;
		if (*y1 > 32) *y1 = 32;	// menu 5번보다 아래로 움직이지 않도록 고정
		break;
	default: return;
	}
}

void M_print()	// menu 프린트
{
	gotoxy(84, 20);
	printf("1. 게임 설명");
	gotoxy(84, 24);
	printf("2. 게임 시작");
	gotoxy(84, 28);
	printf("3. 캐릭터 보기");
	gotoxy(84, 32);
	printf("4. 게임 종료");
}

int M_move_arrow()			// 화살표 동작 중 Enter 눌리면 menu값 반환
{
	char menu = 0, ch;		// menu 0이면 오류, 키보드 입력받을 ch
	int x = 80, y = 20;		// 초기의 "▶" 위치 지정
	while (1)
	{
		switch (y)					// y값에 따라 menu값 결정
		{
		case 20: menu = 1; break;
		case 24: menu = 2; break;
		case 28: menu = 3; break;
		case 32: menu = 4; break;
		default: printf("Error!\n"); 
			exit(1);
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
			test();
			break;
		case 3:
			add_menu();
			break;
		case 4:
			system("cls");
			gotoxy(85, 25);
			printf("게임을 종료합니다.");
			Sleep(900);
			system("cls");
			exit(1);
		}
	}
}
void Print_info()
{
	gotoxy(54, 16);
	printf("@=========================================================================@");
	gotoxy(54, 17);
	printf("∥                                                                       ∥");
	gotoxy(54, 18);
	printf("∥                                                                       ∥");
	gotoxy(54, 19);
	printf("∥                                                                       ∥");
	gotoxy(54, 20);
	printf("∥                                                                       ∥");
	gotoxy(54, 21);
	printf("∥                                                                       ∥");
	gotoxy(54, 22);
	printf("∥                                                                       ∥");
	gotoxy(54, 23);
	printf("∥                                                                       ∥");
	gotoxy(54, 24);
	printf("∥                                                                       ∥");
	gotoxy(54, 25);
	printf("∥                                                                       ∥");
	gotoxy(54, 26);
	printf("∥                                                                       ∥");
	gotoxy(54, 27);
	printf("∥                                                                       ∥");
	gotoxy(54, 28);
	printf("∥                                                                       ∥");
	gotoxy(54, 29);
	printf("∥                                                                       ∥");
	gotoxy(54, 30);
	printf("∥                                                                       ∥");
	gotoxy(54, 31);
	printf("∥                                                                       ∥");
	gotoxy(54, 32);
	printf("∥                                                                       ∥");
	gotoxy(54, 33);
	printf("∥                                                                       ∥");
	gotoxy(54, 34);
	printf("∥                                                                       ∥");
	gotoxy(54, 35);
	printf("∥                                                                       ∥");
	gotoxy(54, 36);
	printf("∥                                                                       ∥");
	gotoxy(54, 37);
	printf("@=========================================================================@");


	gotoxy(58, 18);
	printf("아이돌이 되고 싶은 ● ■ ▲ ★ ♣ ♥ ◆ 기호들 ...");
	gotoxy(58, 20);
	printf("-------------------------------------------------------------------");
	gotoxy(58, 23);
	printf("리듬에 맞춰");
	gotoxy(58, 25);
	printf("달리기를 완주하여 아이돌 멤버를 모두 모아보세요!");
	gotoxy(58, 27);
	printf("내가 받은 점수로 기호들이 성장할 수 있는 아이돌이 결정됩니다.");
	gotoxy(58, 29);
	printf("간단한 조작과 　　　을 이용한 전략적 점수 조절!");
	gotoxy(58, 31);
	printf("● ■ ▲ ★ ♣ ♥ ◆ 가 열심히 달려 아이돌이 될 수 있게 도와주세요!");


	while (!kbhit())
	{
		gotoxy(71, 23);
		printf("▶SPACE◀");
		gotoxy(72, 29);
		printf("[트랩]");
		gotoxy(110, 35);
		printf("Press Enter...");
		Sleep(500);
		gotoxy(71, 23);
		printf("          ");
		gotoxy(72, 29);
		printf("      ");
		gotoxy(110, 35);
		printf("               ");
		Sleep(300);
	}
	getch();	// 다음 동작을 위해 buffer 버리기

}