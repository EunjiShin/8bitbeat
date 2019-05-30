#pragma once
#include "Music.h"
#include "Menu.h"

void M_line_Print()		// menu box ���
{
	system("mode con: cols=135 lines=36");
	gotoxy(36, 10);
	printf("����������������������������������������������������������������������������������������������������������������������������\n");
	gotoxy(36, 11);
	printf("����������������������������������������������������������������\n");
	gotoxy(36, 12);
	printf("����������������������������������������������������������������\n");
	gotoxy(36, 13);
	printf("����������������������������������������������������������������\n");
	gotoxy(36, 14);
	printf("����������������������������������������������������������������\n");
	gotoxy(36, 15);
	printf("����������������������������������������������������������������\n");
	gotoxy(36, 16);
	printf("����������������������������������������������������������������\n");
	gotoxy(36, 17);
	printf("����������������������������������������������������������������\n");
	gotoxy(36, 18);
	printf("����������������������������������������������������������������\n");
	gotoxy(36, 19);
	printf("����������������������������������������������������������������\n");
	gotoxy(36, 20);
	printf("����������������������������������������������������������������\n");
	gotoxy(36, 21);
	printf("����������������������������������������������������������������\n");
	gotoxy(36, 22);
	printf("����������������������������������������������������������������\n");
	gotoxy(36, 23);
	printf("����������������������������������������������������������������\n");
	gotoxy(36, 24);
	printf("����������������������������������������������������������������\n");
	gotoxy(36, 25);
	printf("����������������������������������������������������������������\n");
	gotoxy(36, 26);
	printf("����������������������������������������������������������������������������������������������������������������������������\n");
}

void M_key(char key, int *x1, int *y1)	// menu���� ����Ű
{
	switch (key)
	{
	case UP:
		*y1 = *y1 - 3;
		if (*y1 < 12) *y1 = 12;	// menu 1������ ���� �������� �ʵ��� ����
		break;
	case DOWN:
		*y1 = *y1 + 3;
		if (*y1 > 24) *y1 = 24;	// menu 5������ �Ʒ��� �������� �ʵ��� ����
		break;
	default: return;
	}
}

void M_print()	// menu ����Ʈ
{
	gotoxy(61, 12);
	printf("1. ���� ����\n\n");
	gotoxy(61, 15);
	printf("2. ���� ����\n\n");
	gotoxy(61, 18);
	printf("3. ��ŷ ����\n\n");
	gotoxy(60, 21);
	printf("4. ĳ���� ����\n\n");
	gotoxy(61, 24);
	printf("5. ���� ����\n");
}

int M_move_arrow()			// ȭ��ǥ ���� �� Enter ������ menu�� ��ȯ
{
	char menu = 0, ch;		// menu 0�̸� ����, Ű���� �Է¹��� ch
	int x = 58, y = 24;		// �ʱ��� "��" ��ġ ����
	while (1)
	{
		switch (y)					// y���� ���� menu�� ����
		{
		case 12: menu = 1; break;
		case 15: menu = 2; break;
		case 18: menu = 3; break;
		case 21: menu = 4; break;
		case 24: menu = 5; break;
		default: printf("Error!\n"); exit(1);
		}
		gotoxy(x, y);
		printf("��");
		ch = getch();	// �Է�
		if (ch == ENTER)	// ENTER �Է½�
		{
			system("cls");
			return menu;	// menu���� ��ȯ
		}
		gotoxy(x, y);
		printf("  ");		// "��"�� ����� �̵�
		M_key(ch, &x, &y);	// �̵�
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
		switch (menu)	// �� �޴� ���ÿ� �´� ���� ����
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
			printf("������ �����մϴ�.");
			Sleep(900);
			system("cls");
			exit(1);
		}
	}
}
void Print_info()
{
	gotoxy(38, 10);
	printf("���̵��� �ǰ� ���� �� �� �� ^ * ��ȣ�� ...");
	gotoxy(38, 12);
	printf("-------------------------------------------------------");
	gotoxy(38, 15);
	printf("���뿡 ����");
	gotoxy(38, 17);
	printf("�޸��⸦ �����Ͽ� ���̵� ����� ��� ��ƺ�����!");
	gotoxy(38, 19);
	printf("���� ���� ������ ��ȣ���� ������ �� �ִ� ���̵��� �����˴ϴ�.");
	gotoxy(38, 21);
	printf("������ ���۰� �������� �̿��� ������ ���� ����!");
	gotoxy(38, 23);
	printf("�� �� �� ^ * �� ������ �޷� ���̵��� �� �� �ְ� �����ּ���!");

	while (!kbhit())
	{
		gotoxy(51, 15);
		printf("��SPACE��");
		gotoxy(52, 21);
		printf("[Ʈ��]");
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
	getch();	// ���� ������ ���� buffer ������
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
			// ���� �����Ѵ�  ���� music������!
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