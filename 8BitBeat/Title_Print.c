#include "Menu.h"

void Title()	// �ܼ� �߾ӿ� 8BIT BEAT ���
{
	gotoxy(48, 10);
	printf("����ᡡ�����ᡡ�����ᡡ������\n");
	gotoxy(48, 11);
	printf("�ᡡ���ᡡ�ᡡ�ᡡ�����ᡡ��������\n");
	gotoxy(48, 12);
	printf("�ᡡ���ᡡ�ᡡ�ᡡ�����ᡡ��������\n");
	gotoxy(48, 13);
	printf("����ᡡ������ᡡ���ᡡ��������\n");
	gotoxy(48, 14);
	printf("�ᡡ���ᡡ�ᡡ���ᡡ���ᡡ��������\n");
	gotoxy(48, 15);
	printf("�ᡡ���ᡡ�ᡡ���ᡡ���ᡡ��������\n");
	gotoxy(48, 16);
	printf("����ᡡ������ᡡ���ᡡ������\n");
	gotoxy(48, 20);
	printf("���ᡡ������ᡡ����ᡡ��������\n");
	gotoxy(48, 21);
	printf("�ᡡ�ᡡ���ᡡ�������ᡡ���ᡡ������\n");
	gotoxy(48, 22);
	printf("�ᡡ�ᡡ���ᡡ�������ᡡ���ᡡ������\n");
	gotoxy(48, 23);
	printf("����ᡡ����ᡡ����ᡡ������\n");
	gotoxy(48, 24);
	printf("�ᡡ���ᡡ�ᡡ�������ᡡ���ᡡ������\n");
	gotoxy(48, 25);
	printf("�ᡡ���ᡡ�ᡡ�������ᡡ���ᡡ������\n");
	gotoxy(48, 26);
	printf("����ᡡ����ᡡ�ᡡ���ᡡ������\n");
}
void Title_Print()
{
	system("mode con: cols=135 lines=36");	// �ܼ� ũ�� ���� 135 ���� 36

	SetColor(8);			/*38 ~ 61    Title�� �����̴� ȿ��*/
	Title();

	Sleep(100);
	system("cls");
	Sleep(100);

	SetColor(6);
	Title();

	Sleep(800);
	system("cls");
	Sleep(70);

	SetColor(8);
	Title();

	Sleep(50);
	system("cls");
	Sleep(50);

	SetColor(14);
	Title();
	Sleep(600);

	while (1)	// ����ڰ� Ű���带 �Է��� �� ���� "press any key to start" �����Ÿ���
	{
		SetColor(7);
		gotoxy(52, 32);
		printf("�� Press any key to start ��");
		Sleep(600);
		gotoxy(52, 32);
		printf("                             ");
		Sleep(600);
		if (kbhit())	// ����� Ű �Է�
		{
			getch();	// ���� ������ ���� buffer ������
			system("cls");
			return;
		}
	}
}