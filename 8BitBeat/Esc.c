#include "Menu.h"

void E_key(char key, int *x1, int *y1)	// ESC ���� ����Ű
{
	switch (key)
	{
	case UP:
		*y1 = *y1 - 4;
		if (*y1 < 14) *y1 = 14;	// menu 1������ ���� �������� �ʵ��� ����
		break;
	case DOWN:
		*y1 = *y1 + 4;
		if (*y1 > 22) *y1 = 22;	// menu 3������ �Ʒ��� �������� �ʵ��� ����
		break;
	default: return;
	}
}

void ESC_Print()	// ESC menu ����Ʈ
{
	gotoxy(61, 14);
	printf("1. ����ϱ�");
	gotoxy(61, 18);
	printf("2. ó������");
	gotoxy(61, 22);
	printf("3. �����ϱ�");
}

int e_move_arrow()		//ȭ��ǥ ���� �� Enter ������ menu�� ��ȯ
{
	char menu = 0, ch;	// menu 0�̸� ����, Ű���� �Է¹��� ch
	int x = 58, y = 22;	// �ʱ��� "��" ��ġ ����
	while (1)
	{
		switch (y)					// y���� ���� menu�� ����
		{
		case 14: menu = 1; break;
		case 18: menu = 2; break;
		case 22: menu = 3; break;
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
	int menu;
	M_line_Print();
	ESC_Print();
	menu = e_move_arrow();	// �� �޴� ���ÿ� �´� ���� ����
	switch (menu)
	{
	case 1:
		Run_Game();
	case 2:
		Go_First();
		break;
	case 3:
		Select_Song();
		break;
	}
}

void Run_Game()
{

}

void Go_First()
{

}

void Select_Song()
{

}