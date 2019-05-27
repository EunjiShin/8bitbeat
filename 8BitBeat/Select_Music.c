#include "Music.h"

//
//music RedFlavor = { 1, "»¡°£ ¸À", "·¹µåº§ºª", 3,{} };
//music DDuduDDudu = { 2, "¶ÑµÎ¶ÑµÎ", "ºí·¢ÇÎÅ©", 3,{} };
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
	printf("                             ¡å¡å¡å¡å¡å¡å¡å¡å "); printf("\n");
	gotoxy(35, 29);
	printf("    Á¦¸ñ :                   Á¦¸ñ :                   Á¦¸ñ :                   "); printf("\n");//°î¸í : 15Ä­
	gotoxy(35, 30);
	printf("    ¾ÆÆ¼½ºÆ® :               ¾ÆÆ¼½ºÆ® :               ¾ÆÆ¼½ºÆ® :               "); printf("\n");//¾ÆÆ¼½ºÆ® : 11Ä­
	gotoxy(35, 31);
	printf("    Æ®·¦ ¼ö :                Æ®·¦ ¼ö :                Æ®·¦ ¼ö :                 "); printf("\n");//³­ÀÌµµ : 13Ä­
	gotoxy(35, 32);
	printf("                             ¡ã¡ã¡ã¡ã¡ã¡ã¡ã¡ã "); printf("\n");//***
	gotoxy(35, 33);
	printf("     "); printf("\n");
	gotoxy(50, 34);
	printf("   °î ÀÌµ¿ : ¡ç,¡æ    ¼±ÅÃ : space");
}