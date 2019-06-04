#include "Menu.h"
#include "ingame.h"

void E_key(char key, int *x1, int *y1)	// ESC ���� ����Ű
{
	switch (key)
	{
	case UP:
		*y1 = *y1 - 6;
		if (*y1 < 22) *y1 = 22;	// menu 1������ ���� �������� �ʵ��� ����
		break;
	case DOWN:
		*y1 = *y1 + 6;
		if (*y1 > 28) *y1 = 28;	// menu 3������ �Ʒ��� �������� �ʵ��� ����
		break;
	default: return;
	}
}

void ESC_Print()	// ESC menu ����Ʈ
{
	gotoxy(84, 22);
	printf("1. ó������");
	gotoxy(84, 28);
	printf("2. �����ϱ�");
}

int e_move_arrow()		//ȭ��ǥ ���� �� Enter ������ menu�� ��ȯ
{
	char menu = 0, ch;	// menu 0�̸� ����, Ű���� �Է¹��� ch
	int x = 80, y = 22;	// �ʱ��� "��" ��ġ ����
	while (1)
	{
		switch (y)					// y���� ���� menu�� ����
		{
		case 22: menu = 1; break;
		case 28: menu = 2; break;
		default: printf("Erorr!\n"); exit(1);
		}
		gotoxy(x, y);
		printf("��");
		ch = getch();		// �Է�
		if (ch == ENTER)	// ENTER �Է½�
		{
			system("cls");
			return menu;	// menu���� ��ȯ
		}
		gotoxy(x, y);
		printf("  ");		// "��"�� ����� �̵�
		E_key(ch, &x, &y);	// �̵�
	}
}

void is_ESC()
{
	PlaySound(NULL, 0, 0);
	int menu;
	M_line_Print();
	ESC_Print();
	menu = e_move_arrow();	// �� �޴� ���ÿ� �´� ���� ����
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