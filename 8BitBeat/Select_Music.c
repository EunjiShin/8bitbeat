#include "Music.h"
#include "Common.h"

//
music RedFlavor = { "���� ��           ", "���座��       ", 3 };
music DDuduDDudu = { "�ѵζѵ�          ", "����ũ     ", 3 };
music FakeLove = { "fake love         ", "BTS      ", 3 };

int equalizer_count = 0;
//char pic[15][15] = { 0, };  // ����������
int music_value = 99; // �뷡 ���ý� ��� ����
int modular = 0;
char num = 0;

int flag;

void choose_music() {

	do
	{


		modular = music_value % 3;

		switch (modular) {
		case 0: {
			choose_redflavor();
			break; }
		case 1: {
			choose_dddd();
			break;
		}
		case 2: {
			choose_fakelove();
			break;
		}

				num = getch();

				if (num == LEFT) { music_value--; }
				else if (num == RIGHT) { music_value++; }
		}
	} while (num != ESC);
}

void default_screen() {
	system("mode con: cols=135 lines=36");
	gotoxy(26, 18);
	printf("<");
	gotoxy(112, 18);
	printf(">");


	gotoxy(35, 26);
	printf("                             ��������� "); printf("\n");
	gotoxy(35, 27);
	printf("    ���� :                    ���� :                       ���� :                   "); printf("\n");//��� : 15ĭ
	gotoxy(35, 28);
	printf("    ��Ƽ��Ʈ :                ��Ƽ��Ʈ :                   ��Ƽ��Ʈ :               "); printf("\n");//��Ƽ��Ʈ : 11ĭ
	gotoxy(35, 29);
	printf("    Ʈ�� �� :                 Ʈ�� �� :                    Ʈ�� �� :                 "); printf("\n");//���̵� : 13ĭ
	gotoxy(35, 30);
	printf("                             ��������� "); printf("\n");//***
	gotoxy(35, 31);
	printf("     "); printf("\n");
	gotoxy(50, 32);
	printf("������������������������������������������������������������������������");
	gotoxy(50, 33);
	printf("��  �� �̵� : ��,��    ���� : space �� ");
	gotoxy(50, 34);
	printf("������������������������������������������������������������������������");

	
	draw_equalizer(&equalizer_count);

}
void choose_redflavor() {
	PlaySound(TEXT(Red_flavor), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	while (1) {

		gotoxy(71, 27);
		printf("%s", RedFlavor.title);
		gotoxy(74, 28);
		printf("%s", RedFlavor.artist);
		gotoxy(73, 29);
		printf("%d ", RedFlavor.trap);

		if (num = getch()) {
			if (num == LEFT) { music_value--; }
			else if (num == RIGHT) { music_value++; }

			return;  // ���� �ѹ� �� �̵��ϸ� �Լ� ��
		}


		Sleep(3000);

		break;
	}
	return;
}
void choose_fakelove() {
	PlaySound(TEXT(Fake_love), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	while (1) {
		gotoxy(71, 27);
		printf("%s", FakeLove.title);
		gotoxy(74, 28);
		printf("%s", FakeLove.artist);
		gotoxy(73, 29);
		printf("%d ", FakeLove.trap);

		if (num = getch()) {
			if (num == LEFT) { music_value--; }
			else if (num == RIGHT) { music_value++; }

			return;  // ���� �ѹ� �� �̵��ϸ� �Լ� ��
		}


		Sleep(3000);

		break;
	}
	return;
}
void choose_dddd() {
	PlaySound(TEXT(DDDD), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	while (1) {

		gotoxy(71, 27);
		printf("%s", DDuduDDudu.title);
		gotoxy(74, 28);
		printf("%s", DDuduDDudu.artist);
		gotoxy(73, 29);
		printf("%d ", DDuduDDudu.trap);

		if (num = getch()) {
			if (num == LEFT) { music_value--; }
			else if (num == RIGHT) { music_value++; }

			return;  // ���� �ѹ� �� �̵��ϸ� �Լ� ��
		}


		Sleep(3000);

		break;
	}
	return;
}

void draw_equalizer(int *equalizer_count)
{
	char pic[15][15] = { 0, };  // ����������
	int x = 55, y = 15, i, j, k;

	while (1) {
		if (*equalizer_count == 3)
		{
			for (i = 0; i < 15; i++)
			{
				k = rand() % 10;
				pic[i][k] = 1;
			}
			for (i = 0; i < 15; i++)
			{
				for (j = 0; j < 14; j++)
				{
					if (pic[i][j] == 1)
					{
						pic[i][j + 1] = 1;
					}
				}
			}
			*equalizer_count = 0;
		}


		for (i = 0; i < 15; i++)
		{
			for (j = 14; j > 0; j--)
			{
				pic[i][j] = pic[i][j - 1];
				pic[i][j - 1] = 0;
			}
		}


		for (i = 0; i < 15; i++)
		{
			y %= 15;
			gotoxy(x, y+8);
			for (j = 0; j < 14; j++)
			{
				if (pic[j][i] == 1)
					printf("��");
				else if (pic[j][i] == 0)
					printf("  ");
			}
			y += 1;

		}

		Sleep(20);
		*equalizer_count = *equalizer_count + 1;
	}

	return;
}


void music_comeon() {
	
	_beginthreadex(NULL, 0, default_screen, 0, 0, NULL);
	choose_music();

	if (kbhit() == 1) {
		_endthread();
		system("cls");
		printf("�ȳ�ȳ�\n");
	}
}