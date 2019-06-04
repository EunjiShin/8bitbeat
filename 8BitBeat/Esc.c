#include "Menu.h"
#include "ingame.h"

void E_key(char key, int *x1, int *y1)	// ESC 에서 동작키
{
	switch (key)
	{
	case UP:
		*y1 = *y1 - 6;
		if (*y1 < 22) *y1 = 22;	// menu 1번보다 위로 움직이지 않도록 고정
		break;
	case DOWN:
		*y1 = *y1 + 6;
		if (*y1 > 28) *y1 = 28;	// menu 3번보다 아래로 움직이지 않도록 고정
		break;
	default: return;
	}
}

void ESC_Print()	// ESC menu 프린트
{
	gotoxy(84, 22);
	printf("1. 처음으로");
	gotoxy(84, 28);
	printf("2. 종료하기");
}

int e_move_arrow()		//화살표 동작 중 Enter 눌리면 menu값 반환
{
	char menu = 0, ch;	// menu 0이면 오류, 키보드 입력받을 ch
	int x = 80, y = 22;	// 초기의 "▶" 위치 지정
	while (1)
	{
		switch (y)					// y값에 따라 menu값 결정
		{
		case 22: menu = 1; break;
		case 28: menu = 2; break;
		default: printf("Erorr!\n"); exit(1);
		}
		gotoxy(x, y);
		printf("▶");
		ch = getch();		// 입력
		if (ch == ENTER)	// ENTER 입력시
		{
			system("cls");
			return menu;	// menu값을 반환
		}
		gotoxy(x, y);
		printf("  ");		// "▶"를 지우고 이동
		E_key(ch, &x, &y);	// 이동
	}
}

void is_ESC()
{
	PlaySound(NULL, 0, 0);
	int menu;
	M_line_Print();
	ESC_Print();
	menu = e_move_arrow();	// 각 메뉴 선택에 맞는 동작 실행
	switch (menu)
	{
	case 1:
		ingame(musicFlag);
		break;
	case 2:
		Select_Song();
		break;
	}
}


void Go_First()
{
	if (musicFlag == 1)
		dddd();
	else if (musicFlag == 2)
		fakelove();
}

void Select_Song()
{

}