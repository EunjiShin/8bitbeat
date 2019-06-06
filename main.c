
#include "Common.h"
#include "Menu.h"
#include "Music.h"

#include "Character.h"

int main()
{
	char key;
	/*HideCursor();
	Title_Print();
	Menu();
	is_ESC();
	printf("°ÔÀÓ³¡!\n");
	images(0, 0, "images");*/


	make_own();
	CursorView(0);
	Title_Print();
	Menu();


	//change_screen();
	//change();
	//back_screen();
	//back_screen2();
	/*_beginthreadex(NULL, 0, default_screen, 0, 0, NULL);
	choose_music();*/

	//music_comeon();
	

	/*get_character(560, blackpink, 0);
	add_menu();
	system("pause>null");*/

	//free(own_blackpink);
	//free(own_bts);

	return 0;
}
