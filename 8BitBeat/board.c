//#include "Character.h" /// OR "Common.h" ≥÷æÓµµ µ 
#include "Character.h"

void board() {
	system("mode con: cols=135 lines=36");
	//£ﬂÏ—Ï— Ï—Ï—£ﬂ
	//£æ µπø¨ªÁ £º
	//	£˛Y^Y^Y^Y£˛
	gotoxy(0, 0);
	printf("£ﬂÏ—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—Ï—£ﬂ\n");
	for (int m = 2; m < 36; m++) {
		gotoxy(0, m);
		printf("£æ                                                                                                                                  £º\n");
	}
	gotoxy(0, 36);
	printf("£˛Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^Y^£˛");

}


void c_print()	// menu «¡∏∞∆Æ
{
	gotoxy(50, 33);
	printf("°⁄°Ÿƒ≥∏Ø≈Õ µÊ≈€!°Ÿ°⁄\n\n");

}

void add_c()
{
	board();
	c_print();

}

