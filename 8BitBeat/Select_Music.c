#include "Music.h"

//
music RedFlavor = { 1, "���� ��", "���座��", 3,{{ "        ������  " }} };
//music DDuduDDudu = { 2, "�ѵζѵ�", "����ũ", 3,{} };
//music FakeLove = { 3, "fake love", "BTS", 3 , {} };


int music_value = 100; // �뷡 ���ý� ��� ����

void choose_music() {
	int modular = 0;
	char num = 0;

	while(1){
		num = getch();
		
		if (num == '<') { music_value--; }
		else if (num == '>') { music_value++; }

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
	}
	}
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
	printf("    ���� :                   ���� :                   ���� :                   "); printf("\n");//��� : 15ĭ
	gotoxy(35, 28);
	printf("    ��Ƽ��Ʈ :               ��Ƽ��Ʈ :               ��Ƽ��Ʈ :               "); printf("\n");//��Ƽ��Ʈ : 11ĭ
	gotoxy(35, 29);
	printf("    Ʈ�� �� :                Ʈ�� �� :                Ʈ�� �� :                 "); printf("\n");//���̵� : 13ĭ
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
}
void choose_redflavor() {
	PlaySound(TEXT(Red_flavor), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	while (1) {
		gotoxy(71, 27);
		printf("%s", RedFlavor.title);
		gotoxy(75, 28);
		printf("%s", RedFlavor.artist);
		gotoxy(74, 29);
		printf("%d", RedFlavor.trap);
		Sleep(3000);

		break;
	}
	return;
}
void choose_fakelove() {
	PlaySound(TEXT(Fake_love), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	while (1) {
		Sleep(3000);
	}
}
void choose_dddd() {
	PlaySound(TEXT(DDDD), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	while (1) {
		Sleep(3000);
	}
}