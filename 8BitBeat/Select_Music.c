#include "Music.h"

//
music RedFlavor = { 1, "說除 蛻", "溯萄漣漯", 3,{{ "        ﹤﹤﹤﹤﹤  " }} };
//music DDuduDDudu = { 2, "剽舒剽舒", "綰楷ё觼", 3,{} };
//music FakeLove = { 3, "fake love", "BTS", 3 , {} };


int music_value = 100; // 喻楚 摹鷗衛 餌辨 滲熱

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
	printf("                             ∪∪∪∪∪∪∪∪ "); printf("\n");
	gotoxy(35, 27);
	printf("    薯跡 :                   薯跡 :                   薯跡 :                   "); printf("\n");//堊貲 : 15蘊
	gotoxy(35, 28);
	printf("    嬴じ蝶お :               嬴じ蝶お :               嬴じ蝶お :               "); printf("\n");//嬴じ蝶お : 11蘊
	gotoxy(35, 29);
	printf("    お椰 熱 :                お椰 熱 :                お椰 熱 :                 "); printf("\n");//陪檜紫 : 13蘊
	gotoxy(35, 30);
	printf("                             ～～～～～～～～ "); printf("\n");//***
	gotoxy(35, 31);
	printf("     "); printf("\n");
	gotoxy(50, 32);
	printf("忙收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收忖");
	gotoxy(50, 33);
	printf("早  堊 檜翕 : ∠,⊥    摹鷗 : space 早 ");
	gotoxy(50, 34);
	printf("戌收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收戎");
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