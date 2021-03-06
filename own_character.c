#include "Character.h"
#include "Common.h"
#include "Menu.h"
#include <stdio.h>




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
		gotoxy(85, 25);
		printf("게임을 종료합니다.");
		Sleep(900);
		system("cls");
		exit(1);
	}
}

void Print_Box() {

	system("mode con: cols=180 lines=50");
	gotoxy(59, 18);
	printf("┌────────────────────────────────────────────────────────────┐\n");
	gotoxy(59, 19);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　│\n");
	gotoxy(59, 20);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　│\n");
	gotoxy(59, 21);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　│\n");
	gotoxy(59, 22);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　│\n");
	gotoxy(59, 23);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　│\n");
	gotoxy(59, 24);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　│\n");
	gotoxy(59, 25);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　│\n");
	gotoxy(59, 26);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　│\n");
	gotoxy(59, 27);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　│\n");
	gotoxy(59, 28);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　│\n");
	gotoxy(59, 29);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　│\n");
	gotoxy(59, 30);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　│\n");
	gotoxy(59, 31);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　│\n");
	gotoxy(59, 32);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　│\n");
	gotoxy(59, 33);
	printf("│　　　　　　　　　　　　　　　　　　　　　　　　　　　　　　│\n");
	gotoxy(59, 34);
	printf("└────────────────────────────────────────────────────────────┘\n");

}



void Print_Menu() {
	gotoxy(84, 20);
	printf("1. 블랙핑크  \n\n");
	gotoxy(84, 24);
	printf("2. 레드벨벳  \n\n");
	gotoxy(84, 28);
	printf("3. 방탄소년단   \n\n");
	gotoxy(84, 32);
	printf("4. 종료   \n\n");
}

void control_menu(char choice, int *height) {
	switch (choice)
	{
	case UP:
		*height = *height - 4;
		if (*height < 20) *height = 20;	// menu 1번보다 위로 움직이지 않도록 고정
		break;
	case DOWN:
		*height = *height + 4;
		if (*height > 32) *height = 32;	// menu 5번보다 아래로 움직이지 않도록 고정
		break;
	default: return;
	}
}

int Choice_Menu() {
	char menu = 0, ch;		
	int x = 80, y = 20;		
	while (1)
	{
		switch (y)					
		{
		case 20: menu = 1; break;
		case 24: menu = 2; break;
		case 28: menu = 3; break;
		case 32: menu = 4; break;
		default: printf("Error!\n");
			exit(1);
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


	if (own_blackpink[0].member_image[9][12] != 0) {
		for (k = 0; k < 40; k++) {
			gotoxy(30, height);
			printf("%s", own_blackpink[0].member_image[k]);
			height++;
		}
		Info(0, 50, 40, blackpink);
	}
	else {
		height = 13;
		print_question(30, height);
	}

	height = 13;


	if (own_blackpink[1].member_image[9][12] != 0) {
		for (k = 0; k < 40; k++) {
			gotoxy(120, height);
			printf("%s", own_blackpink[1].member_image[k]);
			height++;
		}
		Info(1, 140, 40, blackpink);
	}

	else {
		height = 13;
		print_question(120, height);
	}


	while (1) {
		key = getch();
		if (key == RIGHT) {
			BP_frame2();
			return;
		}
		if (key == ESC) {
			return;
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

		if (own_blackpink[2].member_image[8][15] != 0) {
		for (k = 0; k < 40; k++) {
			gotoxy(30, height);
			printf("%s", own_blackpink[2].member_image[k]);
			height++;
		}
		Info(2, 50, 40, blackpink);
	}

		else {
		height = 13;
		print_question(30, height);
	}

		if (own_blackpink[3].member_image[9][12] != 0) {
			for (k = 0; k < 40; k++) {
				gotoxy(120, height);
				printf("%s", own_blackpink[3].member_image[k]);
				height++;
			}
			Info(3, 140, 40, blackpink);
		}
		else {
			height = 13;
			print_question(120, height);
		}



	while (1) {
		key = getch();
		if (key == LEFT) {
			BP_frame();
			return;
		}
		if (key == ESC) {
			return;
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
			return;
		}
		else if (key == ESC) {
			return;
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
			return;
		}
		else if (key == ESC) {
			return;
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
	
	 if (own_bts[0].member_image[9][12] != 0) {
		for (k = 0; k < 40; k++) {
			gotoxy(17, height);
			printf("%s", own_bts[0].member_image[k]);
			height++;
		}
		Info(0, 17, 40, bts);
	}
	 else {
		height = 13;
		print_question(10, height);
	}

	 if(own_bts[1].member_image[9][12] != 0){
		 height = 15;
		 for (k = 0; k < 40; k++) {
			 gotoxy(70, height);
			 printf("%s", own_bts[1].member_image[k]);
			 height++;
		 }
		 Info(1, 90, 40, bts);
	 }
	 else {
		 height = 15;
		 print_question(70, height);
	 }

	 if(own_bts[2].member_image[9][12] != 0){
		 height = 15;
		 for (k = 0; k < 40; k++) {
			 gotoxy(128, height);
			 printf("%s", own_bts[2].member_image[k]);
			 height++;
		 }
		 Info(2, 150, 40, bts);
	 }
	 else {
		 height = 15;
		 print_question(128, height);
	 }

	while (1) {
		key = getch();
		if (key == RIGHT) {
			BTS_frame2();
			return;
		}
		else if (key == ESC) {
			return;
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

	if (own_bts[3].member_image[9][12] != 0) {
		for (k = 0; k < 40; k++) {
			gotoxy(25, height);
			printf("%s", own_bts[3].member_image[k]);
			height++;
		}
		Info(3, 45, 40, bts);
	}
	else {
		height = 15;
		print_question(25, height);
	}

	height = 13;
	if (own_bts[4].member_image[9][12] != 0) {
		for (k = 0; k < 40; k++) {
			gotoxy(120, height);
			printf("%s", own_bts[4].member_image[k]);
			height++;
		}
		Info(4, 135, 40, bts);
	}
	else {
		height = 13;
		print_question(120, height);
	}


	while (1) {
		key = getch();
		if (key == LEFT) {
			BTS_frame();
			return;
		}
		if (key == RIGHT) {
			BTS_frame3();
			return;
		}
		else if (key == ESC) {
			return;
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

	if (own_bts[5].member_image[9][12] != 0) {
		for (k = 0; k < 40; k++) {
			gotoxy(30, height);
			printf("%s", own_bts[5].member_image[k]);
			height++;
		}
		Info(5, 45, 40, bts);
	}
	else {
		height = 15;
		print_question(30, height);
	}

	height = 13;
	if (own_bts[6].member_image[9][12] != 0) {
		for (k = 0; k < 40; k++) {
			gotoxy(120, height);
			printf("%s", own_bts[6].member_image[k]);
			height++;
		}
		Info(6, 135, 40, bts);
	}
	else {
		height = 13;
		print_question(120, height);
	}

	while (1) {
		key = getch();
		if (key == LEFT) {
			BTS_frame2();
			return;
		}
		else if (key == ESC) {
			return;
		}
	}

}


void Info(int i, int x, int y, CH *group) {  // i는 그룹 구조체에서 몇번째 멤버인지 / X, Y는 좌표 / group는 그룹 구조체
	gotoxy(x, y + 3);
	printf("%s", group[i].name);
}

void make_own() {
	
	memset(own_blackpink->name, 0, sizeof(char)*20);
	memset(own_bts->name, 0, sizeof(char) * 20);

	for (int m = 0; m < 4; m++) {
		for (int k = 0; k < 40; k++) {
			for (int i = 0; i < 60; i++) {
				own_blackpink[m].member_image[k][i] = NULL;
			}
		}
	}

	for (int m = 0; m < 7; m++) {
		for (int k = 0; k < 40; k++) {
			for (int i = 0; i < 60; i++) {
				own_bts[m].member_image[k][i] = NULL;
			}
		}
	}

	//own_blackpink[2].member_image = (char**)calloc(40, sizeof(char*));
	//for (int i = 0; i < 41; i++) {
	//	own_blackpink[2].member_image[i] = (char*)calloc(60, sizeof(char));
	//}

	//own_blackpink[3].member_image = (char**)calloc(40, sizeof(char*));
	//for (int i = 0; i < 41; i++) {
	//	own_blackpink[3].member_image[i] = (char*)calloc(60, sizeof(char));
	//}

	// ---------- 방탄
	
	/*	own_bts[0].member_image = (char**)calloc(40, sizeof(char*));
		for (int i = 0; i < 41; i++) {
			own_bts[0].member_image[i] = (char*)calloc(60, sizeof(char));
		}
	
		own_bts[1].member_image = (char**)calloc(40, sizeof(char*));
		for (int i = 0; i < 41; i++) {
			own_bts[1].member_image[i] = (char*)calloc(60, sizeof(char));
		}

		own_bts[2].member_image = (char**)calloc(40, sizeof(char*));
		for (int i = 0; i < 41; i++) {
			own_bts[2].member_image[i] = (char*)calloc(60, sizeof(char));
		}

		own_bts[3].member_image = (char**)calloc(40, sizeof(char*));
		for (int i = 0; i < 41; i++) {
			own_bts[3].member_image[i] = (char*)calloc(60, sizeof(char));
		}

		own_bts[4].member_image = (char**)calloc(40, sizeof(char*));
		for (int i = 0; i < 41; i++) {
			own_bts[4].member_image[i] = (char*)calloc(60, sizeof(char));
		}

		own_bts[5].member_image = (char**)calloc(40, sizeof(char*));
		for (int i = 0; i < 41; i++) {
			own_bts[5].member_image[i] = (char*)calloc(60, sizeof(char));
		}

		own_bts[6].member_image = (char**)calloc(40, sizeof(char*));
		for (int i = 0; i < 41; i++) {
			own_bts[6].member_image[i] = (char*)calloc(60, sizeof(char));
		}

		own_bts[7].member_image = (char**)calloc(40, sizeof(char*));
		for (int i = 0; i < 41; i++) {
			own_bts[7].member_image[i] = (char*)calloc(60, sizeof(char));
		}
*/
}

OWN get_character(double score, CH *group, int flag) { // 해싱적용<< score는 총 획득 점수 / group는 aus그룹 구조체 / flag는 방탄인지 블핑인지

// #define MAX_ 로 해서 정해진 배열 크기 만들고
	// 전역으로 int image_size = 41; 같이 해서 for문 돌릴때 정해진 배열보다 작은 크기로 돌 수 있도록 한다. 


	switch (flag) {
	case 0: {  // 블핑. 지수제니리사로제
		if (score < 0) {
			for (int k = 0; k < 40; k++) {
				strcpy(own_blackpink[0].member_image[k], blackpink[0].member_image[k]);
			}
				strcpy(own_blackpink[0].name, blackpink[0].name);
			return own_blackpink[0];
		}
		else if (score >= 0 && score < 450) {
			for (int k = 0; k < 60; k++) {
				strcpy(own_blackpink[1].member_image[k], blackpink[1].member_image[k]);
			}
				strcpy(own_blackpink[1].name, blackpink[1].name);
			return own_blackpink[1];
		}
		else if (score >= 450 && score < 900) { 
			for (int k = 0; k < 60; k++) {
				strcpy(own_blackpink[2].member_image[k], blackpink[2].member_image[k]);
			}
				strcpy(own_blackpink[2].name, blackpink[2].name);
			return own_blackpink[2];
		}
		else if (score >= 900) {
			for (int k = 0; k < 60; k++) {
				strcpy(own_blackpink[3].member_image[k], blackpink[3].member_image[k]);
			}
				strcpy(own_blackpink[3].name, blackpink[3].name);
			return own_blackpink[3];
		}
	}
	case 1: { // 방탄. 지민슈가뷔제이홉정국RM진
		if (score < 0) {
			for (int k = 0; k < 60; k++) {
				strcpy(own_bts[0].member_image[k], bts[0].member_image[k]);
			}
			strcpy(own_bts[0].name, bts[0].name);
			return own_bts[0];
		}
		else if (score >= 0 && score < 280) {
			for (int k = 0; k < 60; k++) {
				strcpy(own_bts[1].member_image[k], bts[1].member_image[k]);
			}
			strcpy(own_bts[1].name, bts[1].name);
			return own_bts[1];
		}
		else if (score >= 280 && score < 560) {
			for (int k = 0; k < 60; k++) {
				strcpy(own_bts[2].member_image[k], bts[2].member_image[k]);
			}
			strcpy(own_bts[2].name, bts[2].name);
			return own_bts[2];
		}
		else if (score >= 560 && score < 840) {
			for (int k = 0; k < 60; k++) {
				strcpy(own_bts[3].member_image[k], bts[3].member_image[k]);
			}
			strcpy(own_bts[3].name, bts[3].name);
			return own_bts[3];
		}
		else if (score >= 840 && score < 1120) {
			for (int k = 0; k < 60; k++) {
				strcpy(own_bts[4].member_image[k], bts[4].member_image[k]);
			}
			strcpy(own_bts[4].name, bts[4].name);
			return own_bts[4];
	}
		else if (score >= 1120 && score < 1400) {
			for (int k = 0; k < 60; k++) {
				strcpy(own_bts[5].member_image[k], bts[5].member_image[k]);
			}
			strcpy(own_bts[5].name, bts[5].name);
			return own_bts[5];
		}
		else if (score >= 1400) {
			for (int k = 0; k < 60; k++) {
				strcpy(own_bts[6].member_image[k], bts[6].member_image[k]);
			}
			strcpy(own_bts[6].name, bts[6].name);
			return own_bts[6];
		}
	}
	}
}