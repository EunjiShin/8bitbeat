#include "Character.h"
#include "Common.h"
#include "Menu.h"

void add_menu() {
	int num;
	int num2;

			Print_Box(); // 메뉴박스
			Print_Menu();  // 메뉴 출력
			num = Choice_Menu(); // 위치 이동
			switch (num)	// 각 메뉴 선택에 맞는 동작 실행
			{
			case 1:
				BP_Print();
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

	system("cls");

	gotoxy(2, 1);
	printf("==================================================================================================================================================================================");

	gotoxy(2, 25);                                               
	printf("==================================================================================================================================================================================");

	gotoxy(2, 50);
	printf("==================================================================================================================================================================================");
	for (j = 0; j < 3; j++)
	{
		for (i = 0; i < 48; i++)
		{
			gotoxy(j*89+1, i+2);                                      
			printf("||");
		}
	}

}

void BP_Print() {
	int k;
	int height = 3;
	BP_frame();
	BP_Info(0, 25, 3);
	gotoxy(34, height);

		for (k = 0; k < 40; k++) {
			gotoxy(34, height);
			printf("%s", blackpink[0].member_image[k]);
			height++;
		}

		height = 3;
		BP_Info(1, 110, 3);
		gotoxy(120, height);
		for (k = 0; k < 40; k++) {
			gotoxy(120, height);
			printf("%s", blackpink[1].member_image[k]);
			height++;
		}

		height = 27;
		BP_Info(2, 25, 27);
		gotoxy(34, height);
		for (k = 0; k < 40; k++) {
			gotoxy(34, height);
			printf("%s", blackpink[2].member_image[k]);
			height++;
		}

		height = 26;
		int x = 115;
		print_question(x, height);

		system("pause>null");
}


void BP_Info(int i, int x, int y){
	gotoxy(x - 10, y);
	printf("%s", blackpink[i].name);
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

	while (1) {
		key = getch();
		if (key == RIGHT) {
			RV_frame2();
		}
	}

}

void RV_frame2() {
	system("mode con: cols=180 lines=50");
	int j, i;
	char key;
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

	while (1) {
		key = getch();
		if (key == LEFT) {
			BTS_frame2();
		}
	}

}