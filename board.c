#include "Character.h"
#include "Common.h"


void board() {
	system("mode con: cols=180 lines=50");
	//������ ���ѣ�
	//�� ������ ��
	//	��Y^Y^Y^Y��
	gotoxy(0, 0);
	printf("���������������������������������������������������������������������������������������������������������������������������������������������������������������������������������ѣ�\n");
	for (int m = 2; m < 50; m++) {
		gotoxy(0, m);
		printf("��                                                                                                                                                                                ��\n");
	}
	gotoxy(0, 49);
	printf("��Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^��");

}


void c_print()	// menu ����Ʈ
{
	gotoxy(85, 43);
	printf("�ڡ�ĳ���� ����!�١�\n\n");
	gotoxy(85, 45);
	printf("���� �޴��� ���ư����� �ƹ� Ű�� ��������!\n\n");

}

void add_c(OWN get)
{
	changeFsize(1.5);
	int height = 10;
	board();
	for (int k = 0; k < 40; k++) {
		gotoxy(68, height);
		printf("%s", get.member_image[k]);
		height++;
	}
	gotoxy(90, 40);
	printf("%s", get.name);
	c_print();
	Sleep(2000);
	system("pause<null");

}

