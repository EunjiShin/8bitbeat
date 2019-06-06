#include "Common.h"// ingame용 헤더 나중에 만들기
#include "Music.h"

void change_screen() {
	system("mode con: cols=135 lines=36");
	char ch1[3] = "○";
	int y, check = 35;

	do {
		for (y = 36 - check; y < 35; y += 1) {
			gotoxy(67, y);
			printf("%s", ch1);
			Sleep(50);
			gotoxy(67, y);
			printf(" ");
		}
		system("cls");
	} while (check != 1);

	printf("\n");
	return 0;

}

void back_screen() {
	int i, j;
	system("mode con: cols=135 lines=36");

	j = 1;
	for (i = 0; i < 17; i++) {
		gotoxy(22, j);
		//printf("                    ");
		printf("▥▥▥▥▥▥▥▥▥▥▥▥▥▥▥[ ]\n");
		j++;
		gotoxy(22, j);
		printf("▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤[ ]\n");
		j++;

	}

	j = 1;
	for (i = 0; i < 17; i++) {
		gotoxy(84, j);
		printf("[ ]▥▥▥▥▥▥▥▥▥▥▥▥▥▥▥\n");
		j++;
		gotoxy(84, j);
		printf("[ ]▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤\n");
		j++;
	}

}

void change() {
	PlaySound(TEXT(traap), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
	while (1) {
		_beginthreadex(NULL, 0, Thread_change_screen, 0, 0, NULL);
		back_screen2();
	}
	//back_screen();   // 스레드로 배경 + 공
}

unsigned _stdcall Thread_change_screen(void *arg) {
	system("mode con: cols=135 lines=36");
	char ch1[3] = "○";
	int y, check = 35;

	//do {
		for (y = 36 - check; y < 35; y += 1) {
			gotoxy(69, y);
			printf("%s", ch1);
			Sleep(70);
			gotoxy(69, y);
			printf(" ");
		}
	//} while (check != 1);



	printf("\n");
	return 0;

}



void back_screen2() {
	system("mode con: cols=135 lines=36");
	int m, n, j;
	int g[25] = {
		1,1,1,1,1,
		1,0,0,0,0,
		1,0,1,1,1,
		1,0,0,0,1,
		1,1,1,1,1
	};
	int o[25] = {
		1,1,1,1,1,
		1,0,0,0,1,
		1,0,0,0,1,
		1,0,0,0,1,
		1,1,1,1,1
	};

	int t[25] = {
		1,1,1,1,1,
		0,0,1,0,0,
		0,0,1,0,0,
		0,0,1,0,0,
		0,0,1,0,0
	};

	int r[25] = {
		1,1,1,1,1,
		1,0,0,0,1,
		1,1,1,1,0,
		1,0,0,1,0,
		1,0,0,0,1
	};

	int a[25] = {
		1,1,1,1,1,
		1,0,0,0,1,
		1,1,1,1,1,
		1,0,0,0,1,
		1,0,0,0,1
	};

	int p[25] = {
		1,1,1,1,1,
		1,0,0,0,1,
		1,1,1,1,1,
		1,0,0,0,0,
		1,0,0,0,0
	};

	j = 2;
	for (m = 0; m < 5; m++) {
		gotoxy(1, j);
		for (n = m * 5; n <= m * 5 + 4; n++)
			if (g[n] == 1) {
				printf("■");
			}
			else {
				printf("  ");
			}
			printf("\n");
			j++;
	}
	printf("\n");


	j = 9;
	for (m = 0; m < 5; m++) {
		gotoxy(1, j);
		for (n = m * 5; n <= m * 5 + 4; n++)
			if (o[n] == 1) {
				printf("■");
			}
			else {
				printf("  ");
			}
			printf("\n");
			j++;
	}
	printf("\n");


	j = 18;
	for (m = 0; m < 5; m++) {
		gotoxy(1, j);
		for (n = m * 5; n <= m * 5 + 4; n++)
			if (t[n] == 1) {
				printf("■");
			}
			else {
				printf("  ");
			}
			printf("\n");
			j++;
	}
	printf("\n");


	j = 27;
	for (m = 0; m < 5; m++) {
		gotoxy(1, j);
		for (n = m * 5; n <= m * 5 + 4; n++)
			if (o[n] == 1) {
				printf("■");
			}
			else {
				printf("  ");
			}
			printf("\n");
			j++;
	}
	printf("\n");

	//----------------------------------------------------------------------------------------------------

	int i;

	j = 1;
	for (i = 0; i < 17; i++) {
		gotoxy(22, j);
		//printf("                    ");
		printf("▥▥▥▥▥▥▥▥▥▥▥▥▥▥▥[ ]\n");
		j++;
		gotoxy(22, j);
		printf("▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤[ ]\n");
		j++;

	}

	j = 1;
	for (i = 0; i < 17; i++) {
		gotoxy(84, j);
		printf("[ ]▥▥▥▥▥▥▥▥▥▥▥▥▥▥▥\n");
		j++;
		gotoxy(84, j);
		printf("[ ]▤▤▤▤▤▤▤▤▤▤▤▤▤▤▤\n");
		j++;
	}


	//--------------------------------------------------------------------------------------------------trap

	j = 2;
	for (m = 0; m < 5; m++) {
		gotoxy(125, j);
		for (n = m * 5; n <= m * 5 + 4; n++)
			if (t[n] == 1) {
				printf("■");
			}
			else {
				printf("  ");
			}
			printf("\n");
			j++;
	}
	printf("\n");


	j = 9;
	for (m = 0; m < 5; m++) {
		gotoxy(125, j);
		for (n = m * 5; n <= m * 5 + 4; n++)
			if (r[n] == 1) {
				printf("■");
			}
			else {
				printf("  ");
			}
			printf("\n");
			j++;
	}
	printf("\n");

	j = 18;
	for (m = 0; m < 5; m++) {
		gotoxy(125, j);
		for (n = m * 5; n <= m * 5 + 4; n++)
			if (a[n] == 1) {
				printf("■");
			}
			else {
				printf("  ");
			}
			printf("\n");
			j++;
	}
	printf("\n");

	j = 27;
	for (m = 0; m < 5; m++) {
		gotoxy(125, j);
		for (n = m * 5; n <= m * 5 + 4; n++)
			if (p[n] == 1) {
				printf("■");
			}
			else {
				printf("  ");
			}
			printf("\n");
			j++;
	}
	printf("\n");

	system("pause>null");

}



void ready_number() {
	system("mode con: cols=180 lines=50");

	gotoxy(55, 16);
	printf("┌──────────────────────────────────────────────────────────────────────┐\n");
	gotoxy(55, 17);
	printf("│　　　　　　　　　　　　　　　   　　　　　　　                       │\n");
	gotoxy(55, 18);
	printf("│　　　　　　　　　　　　　　　   　　　　　　　                       │\n");
	gotoxy(55, 19);
	printf("│　　　　　　　　　　　　　　　   　　　　　　　                       │\n");
	gotoxy(55, 20);
	printf("│　　　　　　　　　　　　　　　   　　　　　　  　                     │\n");
	gotoxy(55, 21);
	printf("│　　　　　　　　　　　　　　　   　　　　　　　                       │\n");
	gotoxy(55, 22);
	printf("│　　　　　　　　　　　　　　　   　　　　　　　                       │\n");
	gotoxy(55, 23);
	printf("│　　　　　　　　　　　　　　　   　　　　　　　                       │\n");
	gotoxy(55, 24);
	printf("│　　　　　　　　　　　　　　　   　　　　　　　                       │\n");
	gotoxy(55, 25);
	printf("│　　　　　　　　　　　　　　　   　　　　　　　                       │\n");
	gotoxy(55, 26);
	printf("│　　　　　　　　　　　　　　　   　　　　　　　                       │\n");
	gotoxy(55, 27);
	printf("│　　　　　　　　　　　　　　　   　　　　　　　                       │\n");
	gotoxy(55, 28);
	printf("│　　　　　　　　　　　　　　　   　　　　　　　                       │\n");
	gotoxy(55, 29);
	printf("│　　　　　　　　　　　　　　　   　　　　　　　                       │\n");
	gotoxy(55, 30);
	printf("│　　　　　　　　　　　　　　　   　　　　　　　                       │\n");
	gotoxy(55, 31);
	printf("│　　　　　　　　　　　　　　　   　　　　　　　                       │\n");
	gotoxy(55, 32);
	printf("└──────────────────────────────────────────────────────────────────────┘\n");
	SetColor(1);
	gotoxy(80, 20);
	printf("■■■■■■■■■■");
	gotoxy(80, 21);
	printf("                  ■");
	gotoxy(80, 22);
	printf("                  ■");
	gotoxy(80, 23);
	printf("                  ■");
	gotoxy(80, 24);
	printf("■■■■■■■■■■");
	gotoxy(80, 25);
	printf("                  ■");
	gotoxy(80, 26);
	printf("                  ■");
	gotoxy(80, 27);
	printf("                  ■");
	gotoxy(80, 28);
	printf("■■■■■■■■■■");
	Sleep(1000);
	system("cls");
	gotoxy(55, 16);
	printf("┌──────────────────────────────────────────────────────────────────────┐\n");
	gotoxy(55, 17);
	printf("│　　　　　　　　　　　　　　　   　　　　　　　                       │\n");
	gotoxy(55, 18);
	printf("│　　　　　　　　　　　　　　　   　　　　　　　                       │\n");
	gotoxy(55, 19);
	printf("│　　　　　　　　　　　　　　　   　　　　　　　                       │\n");
	gotoxy(55, 20);
	printf("│　　　　　　　　　　　　　　　   　　　　　　　                       │\n");
	gotoxy(55, 21);
	printf("│　　　　　　　　　　　　　　　   　　　　　　　                       │\n");
	gotoxy(55, 22);
	printf("│　　　　　　　　　　　　　　　   　　　　　　　                       │\n");
	gotoxy(55, 23);
	printf("│　　　　　　　　　　　　　　　   　　　　　　　                       │\n");
	gotoxy(55, 24);
	printf("│　　　　　　　　　　　　　　　   　　　　　　　                       │\n");
	gotoxy(55, 25);
	printf("│　　　　　　　　　　　　　　　   　　　　　　　                       │\n");
	gotoxy(55, 26);
	printf("│　　　　　　　　　　　　　　　   　　　　　　　                       │\n");
	gotoxy(55, 27);
	printf("│　　　　　　　　　　　　　　　   　　　　　　　                       │\n");
	gotoxy(55, 28);
	printf("│　　　　　　　　　　　　　　　   　　　　　　　                       │\n");
	gotoxy(55, 29);
	printf("│　　　　　　　　　　　　　　　   　　　　　　　                       │\n");
	gotoxy(55, 30);
	printf("│　　　　　　　　　　　　　　　   　　　　　　　                       │\n");
	gotoxy(55, 31);
	printf("│　　　　　　　　　　　　　　　   　　　　　　　                       │\n");
	gotoxy(55, 32);
	printf("└──────────────────────────────────────────────────────────────────────┘\n");
	SetColor(2);
	gotoxy(80, 20);
	printf("■■■■■■■■■■");
	gotoxy(80, 21);
	printf("                  ■");
	gotoxy(80, 22);
	printf("                  ■");
	gotoxy(80, 23);
	printf("                  ■");
	gotoxy(80, 24);
	printf("■■■■■■■■■■");
	gotoxy(80, 25);
	printf("■");
	gotoxy(80, 26);
	printf("■");
	gotoxy(80, 27);
	printf("■");
	gotoxy(80, 28);
	printf("■■■■■■■■■■");

	Sleep(1000);
	system("cls");
	gotoxy(55, 16);
	printf("┌──────────────────────────────────────────────────────────────────────┐\n");
	gotoxy(55, 17);
	printf("│　　　　　　　　　　　　　　　   　　　　　　　                       │\n");
	gotoxy(55, 18);
	printf("│　　　　　　　　　　　　　　　   　　　　　　　                       │\n");
	gotoxy(55, 19);
	printf("│　　　　　　　　　　　　　　　   　　　　　　　                       │\n");
	gotoxy(55, 20);
	printf("│　　　　　　　　　　　　　　　   　　　  　　　　                     │\n");
	gotoxy(55, 21);
	printf("│　　　　　　　　　　　　　　　   　　　　  　　　                     │\n");
	gotoxy(55, 22);
	printf("│　　　　　　　　　　　　　　　   　　　　　  　　                     │\n");
	gotoxy(55, 23);
	printf("│　　　　　　　　　　　　　　　   　　　　　　  　                     │\n");
	gotoxy(55, 24);
	printf("│　　　　　　　　　　　　　　　   　　　　　　　                       │\n");
	gotoxy(55, 25);
	printf("│　　　　　　　　　　　　　　　   　　　　　　　                       │\n");
	gotoxy(55, 26);
	printf("│　　　　　　　　　　　　　　　   　　　　　　　                       │\n");
	gotoxy(55, 27);
	printf("│　　　　　　　　　　　　　　　   　　　　　　　                       │\n");
	gotoxy(55, 28);
	printf("│　　　　　　　　　　　　　　　   　　　　　　　                       │\n");
	gotoxy(55, 29);
	printf("│　　　　　　　　　　　　　　　   　　　　　　　                       │\n");
	gotoxy(55, 30);
	printf("│　　　　　　　　　　　　　　　   　　　　　　　                       │\n");
	gotoxy(55, 31);
	printf("│　　　　　　　　　　　　　　　   　　　　　　　                       │\n");
	gotoxy(55, 32);
	printf("└──────────────────────────────────────────────────────────────────────┘\n");
	SetColor(4);
	gotoxy(75, 19);
	printf("                  ■");
	gotoxy(75, 20);
	printf("               ■ ■");
	gotoxy(75, 21);
	printf("             ■   ■");
	gotoxy(75, 22);
	printf("                  ■");
	gotoxy(75, 23);
	printf("                  ■");
	gotoxy(75, 24);
	printf("                  ■");
	gotoxy(75, 25);
	printf("                  ■");
	gotoxy(75, 26);
	printf("                  ■");
	gotoxy(75, 27);
	printf("                  ■");
	gotoxy(75, 28);
	printf("                  ■");
	gotoxy(75, 29);
	printf("              ■■■■■    ");

	Sleep(1000);
	system("cls");
	ready_start();
}


void ready_start(){
	gotoxy(55, 16);
	printf("┌──────────────────────────────────────────────────────────────────────┐\n");
	gotoxy(55, 17);
	printf("│　　　　　　　　　　　　　　　   　　　　　　　                       │\n");
	gotoxy(55, 18);
	printf("│　　　　　　　　　　　　　　　   　　　　　　　                       │\n");
	gotoxy(55, 19);
	printf("│　　　　　　　　　　　　　　　   　　　　　　　                       │\n");
	gotoxy(55, 20);
	printf("│　　　　　　　　　　　　　　　   　　　　　　　                       │\n");
	gotoxy(55, 21);
	printf("│　　　　　　　　　　　　　　　    　　　　　　　                      │\n");
	gotoxy(55, 22);
	printf("│　　　　　　　　　　　　　　　    　　　　　　　                      │\n");
	gotoxy(55, 23);
	printf("│　　　　　　　　　　　　　　　    　　　　　　　                      │\n");
	gotoxy(55, 24);
	printf("│　　　　　　　　　　　　　　　    　　　　　　　                      │\n");
	gotoxy(55, 25);
	printf("│　　　　　　　　　　　　　　　   　 　　　　　　                      │\n");
	gotoxy(55, 26);
	printf("│　　　　　　　　　　　　　　　   　　 　　　　　                      │\n");
	gotoxy(55, 27);
	printf("│　　　　　　　　　　　　　　　   　　　 　　　　                      │\n");
	gotoxy(55, 28);
	printf("│　　　　　　　　　　　　　　　   　　　　　　　                       │\n");
	gotoxy(55, 29);
	printf("│　　　　　　　　　　　　　　　   　　　　　　　                       │\n");
	gotoxy(55, 30);
	printf("│　　　　　　　　　　　　　　　   　　　　　　　                       │\n");
	gotoxy(55, 31);
	printf("│　　　　　　　　　　　　　　　   　　　　　　　                       │\n");
	gotoxy(55, 32);
	printf("└──────────────────────────────────────────────────────────────────────┘\n");

	SetColor(6);
	gotoxy(65, 21);
	printf("■■■■■");
	gotoxy(65, 22);
	printf("■        ");
	gotoxy(65, 23);
	printf("■        ");
	gotoxy(65, 24);
	printf("■■■■■");
	gotoxy(65, 25);
	printf("        ■");
	gotoxy(65, 26);
	printf("        ■");
	gotoxy(65, 27);
	printf("■■■■■");


	gotoxy(77, 21);
	printf("■■■■■");
	gotoxy(77, 22);
	printf("    ■    ");
	gotoxy(77, 23);
	printf("    ■    ");
	gotoxy(77, 24);
	printf("    ■    ");
	gotoxy(77, 25);
	printf("    ■    ");
	gotoxy(77, 26);
	printf("    ■    ");
	gotoxy(77, 27);
	printf("    ■    ");

	gotoxy(89, 21);
	printf("■■■■■");
	gotoxy(89, 22);
	printf("■      ■");
	gotoxy(89, 23);
	printf("■      ■");
	gotoxy(89, 24);
	printf("■■■■■");
	gotoxy(89, 25);
	printf("■      ■");
	gotoxy(89, 26);
	printf("■      ■");
	gotoxy(89, 27);
	printf("■      ■");

	gotoxy(101, 21);
	printf("■■■■■");
	gotoxy(101, 22);
	printf("■      ■");
	gotoxy(101, 23);
	printf("■    ■  ");
	gotoxy(101, 24);
	printf("■■■    ");
	gotoxy(101, 25);
	printf("■  ■    ");
	gotoxy(101, 26);
	printf("■    ■  ");
	gotoxy(101, 27);
	printf("■      ■");


	gotoxy(113, 21);
	printf("■■■■■ ");
	gotoxy(113, 22);
	printf("    ■     ");
	gotoxy(113, 23);
	printf("    ■     ");
	gotoxy(113, 24);
	printf("    ■     ");
	gotoxy(113, 25);
	printf("    ■     ");
	gotoxy(113, 26);
	printf("    ■     ");
	gotoxy(113, 27);
	printf("    ■     ");

}

