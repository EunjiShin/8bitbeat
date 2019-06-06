#include "Character.h"
#include "Common.h"


void board() {
	system("mode con: cols=180 lines=50");
	//£ﬂÏ—Ï— Ï—Ï—£ﬂ
	//£æ µπø¨ªÁ £º
	//	£˛Y^Y^Y^Y£˛
	gotoxy(0, 0);
	printf("£ﬂÏ—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—£ﬂ\n");
	for (int m = 2; m < 50; m++) {
		gotoxy(0, m);
		printf("£æ                                                                                                                                                                                £º\n");
	}
	gotoxy(0, 49);
	printf("£˛Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^£˛");

}


void c_print()	// menu «¡∏∞∆Æ
{
	gotoxy(85, 43);
	printf("°⁄°Ÿƒ≥∏Ø≈Õ µÊ≈€!°Ÿ°⁄\n\n");
	gotoxy(85, 45);
	printf("∏ﬁ¿Œ ∏ﬁ¥∫∑Œ µπæ∆∞°∑¡∏È æ∆π´ ≈∞≥™ ¥©∏£ººø‰!\n\n");

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

