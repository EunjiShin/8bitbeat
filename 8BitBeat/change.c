#include "common.h"// ingame용 헤더 나중에 만들기

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

	_beginthreadex(NULL, 0, Thread_change_screen, 0, 0, NULL);
	back_screen2();
	//back_screen();   // 스레드로 배경 + 공
}

unsigned _stdcall Thread_change_screen(void *arg) {
	system("mode con: cols=135 lines=36");
	char ch1[3] = "○";
	int y, check = 35;

	do {
		for (y = 36 - check; y < 35; y += 1) {
			gotoxy(69, y);
			printf("%s", ch1);
			Sleep(50);
			gotoxy(69, y);
			printf(" ");
		}
	} while (check != 1);



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