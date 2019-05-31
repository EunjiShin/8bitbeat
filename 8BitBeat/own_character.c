#include "Character.h"
#include "Common.h"
#include "Menu.h"

void add_menu() {
	int num;
	int num2;
	int key;

			Print_Box(); // 메뉴박스
			Print_Menu();  // 메뉴 출력
			num = Choice_Menu(); // 위치 이동
			switch (num)	// 각 메뉴 선택에 맞는 동작 실행
			{
			case 1:
					BP_frame();
				break;
			case 2:
				RV_frame();
				break;
			case 3:
				BTS_frame();
				break;
			case 4:   // 종료
				system("cls");
				gotoxy(60, 19);
				printf("게임을 종료합니다.");
				Sleep(900);
				system("cls");
				exit(1);
			}
			
	
}

void Print_Box() {
	system("mode con: cols=180 lines=50");
	gotoxy(40, 10);
	printf("┌────────────────────────────────────────────────────┐\n");
	gotoxy(40, 11);
	printf("│　　　　　　　　　　　　　　　   　　　　　　　     │\n");
	gotoxy(40, 12);
	printf("│　　　 　　　　　　　　　　   　　　　　　　　　    │\n");
	gotoxy(40, 13);
	printf("│　　     　　　　　　　   　　　　　　　　　　　　　│\n");
	gotoxy(40, 14);
	printf("│　　　　     　　　   　　　　　　　　　　　　　　　│\n");
	gotoxy(40, 15);
	printf("│　　　　　 　       　　　　　　　 　　　　　　　　 │\n");
	gotoxy(40, 16);
	printf("│　　　　　　    　　    　　　　　 　　　　　　　　 │\n");
	gotoxy(40, 17);
	printf("│　　　　   　 　　　　　    　　　　　　　　　　　　│\n");
	gotoxy(40, 18);
	printf("│　　   　　　　 　　　　　　    　　　　　　　　　　│\n");
	gotoxy(40, 19);
	printf("│　　　 　　　　　 　　　 　　　    　 　　　    　　│\n");
	gotoxy(40, 20);
	printf("│　　　　　　　　　 　　　　　　　    　　   　　　　│\n");
	gotoxy(40, 21);
	printf("│　　　　　 　　　　　 　  　　　　　       　 　　　│\n");
	gotoxy(40, 22);
	printf("│　　　　　　　　　　　 　　　　　　　　　    　   　│\n");
	gotoxy(40, 23);
	printf("│　　　　　　　　　　　　 　　　　　　　　　   　    │\n");
	gotoxy(40, 24);
	printf("│　　　　　　　　　　　　　 　　　　　　   　　    　│\n");
	gotoxy(40, 25);
	printf("│　　　　　　　　　　　　　　 　　　   　　　　　    │\n");
	gotoxy(40, 26);
	printf("└────────────────────────────────────────────────────┘\n");

}


void Print_Menu() {
	gotoxy(64, 14);
	printf("1. 블랙핑크  \n\n");
	gotoxy(64, 17);
	printf("2. 레드벨벳  \n\n");
	gotoxy(64, 20);
	printf("3. 방탄소년단   \n\n");
	gotoxy(64, 23);
	printf("4. 종료   \n\n");
}

void control_menu(char choice, int *height) {
	switch (choice)
	{
	case UP:
		*height = *height - 3;
		if (*height < 14) *height = 14;	// menu 1번보다 위로 움직이지 않도록 고정
		break;
	case DOWN:
		*height = *height + 3;
		if (*height > 23) *height = 23;	// menu 5번보다 아래로 움직이지 않도록 고정
		break;
	default: return;
	}
}

int Choice_Menu() {
	char menu = 0, ch;		
	int x = 58, y = 14;		
	while (1)
	{
		switch (y)					
		{
		case 14: menu = 1; break;
		case 17: menu = 2; break;
		case 20: menu = 3; break;
		case 23: menu = 4; break;
		default: printf("Error!\n"); exit(1);
		}
		gotoxy(x, y);
		printf("▶");
		ch = getch();	
		if (ch == ENTER)	
		{
			system("cls");
			return menu;
		}
		gotoxy(x, y);
		printf("  ");	
		control_menu(ch, &y);
	}
}


void BP_frame() {
	system("mode con: cols=180 lines=50");
	int j, i;
	char key;
	int k;
	int height = 13;
	system("cls");

	gotoxy(2, 1);
	printf("==================================================================================================================================================================================");


	gotoxy(2, 50);
	printf("==================================================================================================================================================================================");
	for (j = 0; j < 3; j++)
	{
		for (i = 0; i < 48; i++)
		{
			gotoxy(j * 89 + 1, i + 2);
			printf("||");
		}
	}

	gotoxy(4, 25);
	printf("<");
	gotoxy(176, 25);
	printf(">");

	for (k = 0; k < 40; k++) {
		gotoxy(30, height);
		printf("%s", blackpink[3].member_image[k]);
		height++;
	}
	Info(0, 50, 40, blackpink);

	height = 13;

	for (k = 0; k < 40; k++) {
		gotoxy(120, height);
		printf("%s", blackpink[4].member_image[k]);
		height++;
	}
	Info(1, 140, 40, blackpink);

	while (1) {
		key = getch();
		if (key == RIGHT) {
			BP_frame2();
		}
	}


}

void BP_frame2() {
	system("mode con: cols=180 lines=50");
	int j, i;
	char key;
	int k;
	int height = 13;
	system("cls");

	gotoxy(2, 1);
	printf("==================================================================================================================================================================================");


	gotoxy(2, 50);
	printf("==================================================================================================================================================================================");
	for (j = 0; j < 3; j++)
	{
		for (i = 0; i < 48; i++)
		{
			gotoxy(j * 89 + 1, i + 2);
			printf("||");
		}
	}

	gotoxy(4, 25);
	printf("<");
	gotoxy(176, 25);
	printf(">");

	for (k = 0; k < 40; k++) {
		gotoxy(30, height);
		printf("%s", blackpink[2].member_image[k]);
		height++;
	}
	Info(3, 50, 40, blackpink);

	height = 13;

	print_question(120, height);


	while (1) {
		key = getch();
		if (key == LEFT) {
			BP_frame();
		}
	}

}




void print_question(int x, int y) {

	gotoxy(x + 10, y);
	printf("");
	gotoxy(x + 10, y + 1);
	printf("     *****************");
	gotoxy(x + 10, y + 2);
	printf("    **               **");
	gotoxy(x + 10, y + 3);
	printf("   **                 **");
	gotoxy(x + 10, y + 4);
	printf("  **                   **");
	gotoxy(x + 10, y + 5);
	printf(" **                     **");
	gotoxy(x + 10, y + 6);
	printf("                         **");
	gotoxy(x + 10, y + 7);
	printf("                        **");
	gotoxy(x + 10, y + 8);
	printf("                       **");
	gotoxy(x + 10, y + 9);
	printf("                      **");
	gotoxy(x + 10, y + 10);
	printf("                    **");
	gotoxy(x + 10, y + 11);
	printf("                  **");
	gotoxy(x + 10, y + 12);
	printf("                 **");
	gotoxy(x + 10, y + 13);
	printf("                 **");
	gotoxy(x + 10, y + 14);
	printf("                 **");
	gotoxy(x + 10, y + 15);
	printf("                 **");
	gotoxy(x + 10, y + 16);
	printf("                 **");
	gotoxy(x + 10, y + 17);
	printf("                 **");
	gotoxy(x + 10, y + 18);
	printf("                 **");
	gotoxy(x + 10, y + 19);
	printf("                 **");
	gotoxy(x + 10, y + 20);
	printf("");
	gotoxy(x + 10, y + 21);
	printf("                 **");
	gotoxy(x + 10, y + 22);
	printf("                 **");

}


void RV_frame() {
	system("mode con: cols=180 lines=50");
	int j, i;
	char key;
	int k;
	int height = 15;

	system("cls");

	gotoxy(2, 1);
	printf("==================================================================================================================================================================================");


	gotoxy(2, 50);
	printf("==================================================================================================================================================================================");
	for (j = 0; j <= 3; j++)
	{
		for (i = 0; i < 48; i++)
		{
			gotoxy(j * 59 + 1, i + 2);
			printf("||");
		}
	}

	gotoxy(4, 25);
	printf("<");
	gotoxy(176, 25);
	printf(">");


	for (k = 0; k < 40; k++) {
		gotoxy(17, height);
		printf("%s", redvelvet[0].member_image[k]);
		height++;
	}
	Info(0, 30, 40, redvelvet);

	height = 15;

	for (k = 0; k < 40; k++) {
		gotoxy(70, height);
		printf("%s", redvelvet[1].member_image[k]);
		height++;
	}
	Info(1, 90, 40, redvelvet);

	height = 15;

	for (k = 0; k < 40; k++) {
		gotoxy(133, height);
		printf("%s", redvelvet[2].member_image[k]);
		height++;
	}
	Info(2, 150, 40, redvelvet);

	while (1) {
		key = getch();
		if (key == RIGHT) {
			RV_frame2();
		}
	}

}

void RV_frame2(){
	system("mode con: cols=180 lines=50");
	int j, i;
	char key;
	int k;
	int height = 13;
	system("cls");

	gotoxy(2, 1);
	printf("==================================================================================================================================================================================");


	gotoxy(2, 50);
	printf("==================================================================================================================================================================================");
	for (j = 0; j < 3; j++)
	{
		for (i = 0; i < 48; i++)
		{
			gotoxy(j * 89 + 1, i + 2);
			printf("||");
		}
	}

	gotoxy(4, 25);
	printf("<");
	gotoxy(176, 25);
	printf(">");

	for (k = 0; k < 40; k++) {
		gotoxy(30, height);
		printf("%s", redvelvet[3].member_image[k]);
		height++;
	}
	Info(3, 45, 40, redvelvet);

	height = 13;

	for (k = 0; k < 40; k++) {
		gotoxy(120, height);
		printf("%s", redvelvet[4].member_image[k]);
		height++;
	}
	Info(4, 135, 40, redvelvet);
	
	while (1) {
		key = getch();
		if (key == LEFT) {
			RV_frame();
		}
	}

}




void BTS_frame() {
	system("mode con: cols=180 lines=50");
	int j, i;
	char key;
	int k;
	int height = 15;

	system("cls");

	gotoxy(2, 1);
	printf("==================================================================================================================================================================================");


	gotoxy(2, 50);
	printf("==================================================================================================================================================================================");
	for (j = 0; j <= 3; j++)
	{
		for (i = 0; i < 48; i++)
		{
			gotoxy(j * 59 + 1, i + 2);
			printf("||");
		}
	}

	gotoxy(4, 25);
	printf("<");
	gotoxy(176, 25);
	printf(">");

	for (k = 0; k < 40; k++) {
		gotoxy(17, height);
		printf("%s", bts[0].member_image[k]);
		height++;
	}
	Info(0, 30, 40, bts);

	height = 15;
	for (k = 0; k < 40; k++) {
		gotoxy(70, height);
		printf("%s", bts[1].member_image[k]);
		height++;
	}
	Info(1, 90, 40, bts);

	height = 15;
	for (k = 0; k < 40; k++) {
		gotoxy(128, height);
		printf("%s", bts[2].member_image[k]);
		height++;
	}
	Info(2, 150, 40, bts);

	while (1) {
		key = getch();
		if (key == RIGHT) {
			BTS_frame2();
		}
	}

}

void BTS_frame2() {
	system("mode con: cols=180 lines=50");
	int j, i;
	char key;
	int k; 
	int height = 15;
	system("cls");

	gotoxy(2, 1);
	printf("==================================================================================================================================================================================");


	gotoxy(2, 50);
	printf("==================================================================================================================================================================================");
	for (j = 0; j < 3; j++)
	{
		for (i = 0; i < 48; i++)
		{
			gotoxy(j * 89 + 1, i + 2);
			printf("||");
		}
	}

	gotoxy(4, 25);
	printf("<");
	gotoxy(176, 25);
	printf(">");

	for (k = 0; k < 40; k++) {
		gotoxy(25, height);
		printf("%s", bts[3].member_image[k]);
		height++;
	}
	Info(3, 45, 40, bts);

	height = 13;

	for (k = 0; k < 40; k++) {
		gotoxy(120, height);
		printf("%s", bts[4].member_image[k]);
		height++;
	}
	Info(4, 135, 40, bts);


	while (1) {
		key = getch();
		if (key == LEFT) {
			BTS_frame();
		}
		if (key == RIGHT) {
			BTS_frame3();
		}
	}

}

void BTS_frame3() {
	system("mode con: cols=180 lines=50");
	int j, i;
	char key;
	int k;
	int height = 15;

	system("cls");

	gotoxy(2, 1);
	printf("==================================================================================================================================================================================");


	gotoxy(2, 50);
	printf("==================================================================================================================================================================================");
	for (j = 0; j < 3; j++)
	{
		for (i = 0; i < 48; i++)
		{
			gotoxy(j * 89 + 1, i + 2);
			printf("||");
		}
	}

	gotoxy(4, 25);
	printf("<");
	gotoxy(176, 25);
	printf(">");

	for (k = 0; k < 40; k++) {
		gotoxy(30, height);
		printf("%s", bts[5].member_image[k]);
		height++;
	}
	Info(5, 45, 40, bts);

	height = 13;

	for (k = 0; k < 40; k++) {
		gotoxy(120, height);
		printf("%s", bts[6].member_image[k]);
		height++;
	}
	Info(6, 135, 40, bts);

	while (1) {
		key = getch();
		if (key == LEFT) {
			BTS_frame2();
		}
	}

}


void Info(int i, int x, int y, CH *group) {
	gotoxy(x, y + 3);
	printf("%s", group[i].name);
}