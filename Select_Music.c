#include "Music.h"
#include "Common.h"

//
music RedFlavor = { "���� ��           ", "���座��       ", 3 };
music DDuduDDudu = { "�ѵζѵ�          ", "����ũ     ", 3 };
music FakeLove = { "fake love         ", "BTS      ", 3 };

int equalizer_count = 0;
int equalizer_count2 = 0;
//char pic[15][15] = { 0, };  // ����������
int music_value = 99; // �뷡 ���ý� ��� ����
int modular = 0;
char num = 0;

int flag;

void choose_music() {
	default_screen();
	do
	{


		modular = music_value % 2;

		switch (modular) {
		case 0: {
			choose_dddd();
			break;
		}
		case 1: {
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

	system("mode con: cols=180 lines=50");
	gotoxy(28, 22);
	printf("<");
	gotoxy(152, 22);
	printf(">");


	gotoxy(55, 33);
	printf("                             ��������� "); printf("\n");
	gotoxy(55, 34);
	printf("    ���� :                    ���� : �ѵζѵ�                     ���� :                   "); printf("\n");//��� : 15ĭ
	gotoxy(55, 35);
	printf("    ��Ƽ��Ʈ :                ��Ƽ��Ʈ : ����ũ                  ��Ƽ��Ʈ :               "); printf("\n");//��Ƽ��Ʈ : 11ĭ
	gotoxy(55, 36);
	printf("    Ʈ�� �� :                 Ʈ�� �� :  3                  Ʈ�� �� :                 "); printf("\n");//���̵� : 13ĭ
	gotoxy(55, 37);
	printf("                             ��������� "); printf("\n");//***
	gotoxy(55, 38);
	printf("     "); printf("\n");
	gotoxy(73, 40);
	printf("������������������������������������������������������������������������");
	gotoxy(73, 41);
	printf("��  �� �̵� : ��,��    ���� : space �� ");
	gotoxy(73, 42);
	printf("������������������������������������������������������������������������");



		return;  // ���� �ѹ� �� �̵��ϸ� �Լ� ��
	}
	//draw_equalizer(&equalizer_count);




void choose_redflavor() {
	PlaySound(TEXT(Red_flavor), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	

		gotoxy(92, 34);
		printf("%s", RedFlavor.title);
		gotoxy(95, 35);
		printf("%s", RedFlavor.artist);
		gotoxy(94, 36);
		printf("%d ", RedFlavor.trap);

		if (num = getch()) {
			if (num == LEFT) { music_value--; }
			else if (num == RIGHT) { music_value++; }

			return;  // ���� �ѹ� �� �̵��ϸ� �Լ� ��
		}

	
		return;
	
}
void choose_fakelove() {
	PlaySound(TEXT(Fake_love), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);

	
		gotoxy(92, 34);
		printf("%s", FakeLove.title);
		gotoxy(95, 35);
		printf("%s", FakeLove.artist);
		gotoxy(94, 36);
		printf("%d ", FakeLove.trap);

		if (num = getch()) {
			if (num == LEFT) { music_value--; }
			else if (num == RIGHT) { music_value++; }

			return;  // ���� �ѹ� �� �̵��ϸ� �Լ� ��
		}
		


	return;
}
void choose_dddd() {
	PlaySound(TEXT(DDDD), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	

		gotoxy(92, 34);
		printf("%s", DDuduDDudu.title);
		gotoxy(95, 35);
		printf("%s", DDuduDDudu.artist);
		gotoxy(94, 36);
		printf("%d ", DDuduDDudu.trap);

		if (num = getch()) {
			if (num == LEFT) { music_value--; }
			else if (num == RIGHT) { music_value++; }

			return;  // ���� �ѹ� �� �̵��ϸ� �Լ� ��
		}




	return;
}

void draw_equalizer(int *equalizer_count)
{
	PlaySound(TEXT(DDDD), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	char ch;
	char pic[15][15] = { 0, };  // ����������
	int x = 78, y = 0, i, j, k;
	system("mode con: cols=180 lines=50");
	gotoxy(28, 22);
	printf("<");
	gotoxy(152, 22);
	printf(">");


	gotoxy(55, 33);
	printf("                             ��������� "); printf("\n");
	gotoxy(55, 34);
	printf("    ���� :                    ���� : �ѵζѵ�                 ���� :                   "); printf("\n");//��� : 15ĭ
	gotoxy(55, 35);
	printf("    ��Ƽ��Ʈ :                ��Ƽ��Ʈ : ����ũ             ��Ƽ��Ʈ :               "); printf("\n");//��Ƽ��Ʈ : 11ĭ
	gotoxy(55, 36);
	printf("    Ʈ�� �� :                 Ʈ�� �� :  3                    Ʈ�� �� :                 "); printf("\n");//���̵� : 13ĭ
	gotoxy(55, 37);
	printf("                             ��������� "); printf("\n");//***
	gotoxy(55, 38);
	printf("     "); printf("\n");
	gotoxy(73, 40);
	printf("������������������������������������������������������������������������");
	gotoxy(73, 41);
	printf("��  �� �̵� : ��,��    ���� : space �� ");
	gotoxy(73, 42);
	printf("������������������������������������������������������������������������");

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
			gotoxy(x, y+15);
			for (j = 0; j < 14; j++)
			{
				if (pic[j][i] == 1)
					printf("��");
				else if (pic[j][i] == 0)
					printf("  ");
			}
			y += 1;

			if (kbhit())
			{
				ch = getch();
				switch (ch)
				{
				case LEFT:
					draw_equalizer2(&equalizer_count2);
					break;
				case RIGHT:
					draw_equalizer2(&equalizer_count2);
					break;
				case ENTER:
					ingame(0);
					break;
				case ESC:
					return;
				}
			}
		}

		Sleep(20);
		*equalizer_count = *equalizer_count + 1;
	}

	return;
}

void draw_equalizer2(int *equalizer_count2)
{
	PlaySound(TEXT(Fake_love), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	char ch;
	char pic[15][15] = { 0, };  // ����������
	int x = 78, y = 0, i, j, k;
	system("mode con: cols=180 lines=50");
	gotoxy(28, 22);
	printf("<");
	gotoxy(152, 22);
	printf(">");


	gotoxy(55, 33);
	printf("                             ��������� "); printf("\n");
	gotoxy(55, 34);
	printf("    ���� :                    ���� : Fake Love                ���� :                   "); printf("\n");//��� : 15ĭ
	gotoxy(55, 35);
	printf("    ��Ƽ��Ʈ :                ��Ƽ��Ʈ : BTS                  ��Ƽ��Ʈ :               "); printf("\n");//��Ƽ��Ʈ : 11ĭ
	gotoxy(55, 36);
	printf("    Ʈ�� �� :                 Ʈ�� �� :  3                    Ʈ�� �� :                 "); printf("\n");//���̵� : 13ĭ
	gotoxy(55, 37);
	printf("                             ��������� "); printf("\n");//***
	gotoxy(55, 38);
	printf("     "); printf("\n");
	gotoxy(73, 40);
	printf("������������������������������������������������������������������������");
	gotoxy(73, 41);
	printf("��  �� �̵� : ��,��    ���� : space �� ");
	gotoxy(73, 42);
	printf("������������������������������������������������������������������������");

	while (1) {
		if (*equalizer_count2 == 3)
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
			*equalizer_count2 = 0;
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
			gotoxy(x, y+15);
			for (j = 0; j < 14; j++)
			{
				if (pic[j][i] == 1)
					printf("��");
				else if (pic[j][i] == 0)
					printf("  ");
			}
			y += 1;

			if (kbhit())
			{
				ch = getch();
				switch (ch)
				{
				case LEFT:
					draw_equalizer(&equalizer_count);
					break;
				case RIGHT:
					draw_equalizer(&equalizer_count);
					break;
				case ENTER:
					ingame(1);
					break;
				case ESC:
					return;
				}
			}
		}

		Sleep(20);
		*equalizer_count2 = *equalizer_count2 + 1;
	}

	return;
}


void music_comeon() {
	char key;
	/*_beginthreadex(NULL, 0, default_screen, 0, 0, NULL);
	_beginthreadex(NULL, 0, choose_music, 0, 0, NULL);
	_beginthreadex(NULL, 0, draw_equalizer, &equalizer_count, 0, NULL);*/
	//choose_music();
	draw_equalizer(&equalizer_count);
	system("pause>null");

}  