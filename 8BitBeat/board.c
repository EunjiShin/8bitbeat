//#include "Character.h" /// OR "Common.h" �־ ��
#include "Character.h"

void board() {
	system("mode con: cols=135 lines=36");
	//������ ���ѣ�
	//�� ������ ��
	//	��Y^Y^Y^Y��
	gotoxy(0, 0);
	printf("���������������������������������������������������������������������������������������������������������������������������������ѣ�\n");
	for (int m = 2; m < 36; m++) {
		gotoxy(0, m);
		printf("��                                                                                                                                  ��\n");
	}
	gotoxy(0, 36);
	printf("��Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^��");

}


void c_print()	// menu ����Ʈ
{
	gotoxy(50, 33);
	printf("�ڡ�ĳ���� ����!�١�\n\n");

}

void add_c()
{
	board();
	c_print();

}

