#include "Menu.h"

void Title()	// �ܼ� �߾ӿ� 8BIT BEAT ���
{
	gotoxy(71, 13);
	printf("����ᡡ�����ᡡ�����ᡡ������\n");
	gotoxy(71, 14);
	printf("�ᡡ���ᡡ�ᡡ�ᡡ�����ᡡ��������\n");
	gotoxy(71, 15);
	printf("�ᡡ���ᡡ�ᡡ�ᡡ�����ᡡ��������\n");
	gotoxy(71, 16);
	printf("����ᡡ������ᡡ���ᡡ��������\n");
	gotoxy(71, 17);
	printf("�ᡡ���ᡡ�ᡡ���ᡡ���ᡡ��������\n");
	gotoxy(71, 18);
	printf("�ᡡ���ᡡ�ᡡ���ᡡ���ᡡ��������\n");
	gotoxy(71, 19);
	printf("����ᡡ������ᡡ���ᡡ������\n");
	gotoxy(71, 23);
	printf("���ᡡ������ᡡ����ᡡ��������\n");
	gotoxy(71, 24);
	printf("�ᡡ�ᡡ���ᡡ�������ᡡ���ᡡ������\n");
	gotoxy(71, 25);
	printf("�ᡡ�ᡡ���ᡡ�������ᡡ���ᡡ������\n");
	gotoxy(71, 26);
	printf("����ᡡ����ᡡ����ᡡ������\n");
	gotoxy(71, 27);
	printf("�ᡡ���ᡡ�ᡡ�������ᡡ���ᡡ������\n");
	gotoxy(71, 28);
	printf("�ᡡ���ᡡ�ᡡ�������ᡡ���ᡡ������\n");
	gotoxy(71, 29);
	printf("����ᡡ����ᡡ�ᡡ���ᡡ������\n");
}
void Title_Print()
{
	system("mode con: cols=180 lines=50");	// �ܼ� ũ�� ���� 180 ���� 50

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
		gotoxy(76, 35);
		printf("�� Press any key to start ��");
		Sleep(600);
		gotoxy(76, 35);
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