#include "Menu.h"

void Title()	// 콘솔 중앙에 8BIT BEAT 출력
{
	gotoxy(71, 13);
	printf("　■■　　■■■　　■■■　■■■■■\n");
	gotoxy(71, 14);
	printf("■　　■　■　■　　　■　　　　■\n");
	gotoxy(71, 15);
	printf("■　　■　■　■　　　■　　　　■\n");
	gotoxy(71, 16);
	printf("　■■　　■■■■　　■　　　　■\n");
	gotoxy(71, 17);
	printf("■　　■　■　　■　　■　　　　■\n");
	gotoxy(71, 18);
	printf("■　　■　■　　■　　■　　　　■\n");
	gotoxy(71, 19);
	printf("　■■　　■■■■　■■■　　　■\n");
	gotoxy(71, 23);
	printf("■■■　　■■■■　　■■　　■■■■■\n");
	gotoxy(71, 24);
	printf("■　■　　■　　　　■　　■　　　■\n");
	gotoxy(71, 25);
	printf("■　■　　■　　　　■　　■　　　■\n");
	gotoxy(71, 26);
	printf("■■■■　■■■■　■■■■　　　■\n");
	gotoxy(71, 27);
	printf("■　　■　■　　　　■　　■　　　■\n");
	gotoxy(71, 28);
	printf("■　　■　■　　　　■　　■　　　■\n");
	gotoxy(71, 29);
	printf("■■■■　■■■■　■　　■　　　■\n");
}
void Title_Print()
{
	system("mode con: cols=180 lines=50");	// 콘솔 크기 가로 180 세로 50

	SetColor(8);			/*38 ~ 61    Title이 깜빡이는 효과*/
	Title();

	Sleep(100);
	system("cls");
	Sleep(100);

	SetColor(6);
	Title();

	Sleep(800);
	system("cls");
	Sleep(70);

	SetColor(8);
	Title();

	Sleep(50);
	system("cls");
	Sleep(50);

	SetColor(14);
	Title();
	Sleep(600);

	while (1)	// 사용자가 키보드를 입력할 때 까지 "press any key to start" 깜빡거리기
	{
		SetColor(7);
		gotoxy(76, 35);
		printf("▶ Press any key to start ◀");
		Sleep(600);
		gotoxy(76, 35);
		printf("                             ");
		Sleep(600);
		if (kbhit())	// 사용자 키 입력
		{
			getch();	// 다음 동작을 위해 buffer 버리기
			system("cls");
			return;
		}
	}
}