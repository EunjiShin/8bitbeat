#include "Music.h"

//
//music RedFlavor = { 1, "���� ��", "���座��", 3,{} };
//music DDuduDDudu = { 2, "�ѵζѵ�", "����ũ", 3,{} };
//music FakeLove = { 3, "fake love", "BTS", 3 , {} };


void choose_music() {
}

void default_screen() {
	system("mode con: cols=135 lines=36");
	gotoxy(2, 18);
	printf("<");
	gotoxy(132, 18);
	printf(">");

	gotoxy(35, 28);
	printf("                             ��������� "); printf("\n");
	gotoxy(35, 29);
	printf("    ���� :                   ���� :                   ���� :                   "); printf("\n");//��� : 15ĭ
	gotoxy(35, 30);
	printf("    ��Ƽ��Ʈ :               ��Ƽ��Ʈ :               ��Ƽ��Ʈ :               "); printf("\n");//��Ƽ��Ʈ : 11ĭ
	gotoxy(35, 31);
	printf("    Ʈ�� �� :                Ʈ�� �� :                Ʈ�� �� :                 "); printf("\n");//���̵� : 13ĭ
	gotoxy(35, 32);
	printf("                             ��������� "); printf("\n");//***
	gotoxy(35, 33);
	printf("     "); printf("\n");
	gotoxy(50, 34);
	printf("   �� �̵� : ��,��    ���� : space");
}