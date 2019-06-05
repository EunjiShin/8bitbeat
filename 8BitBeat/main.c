
#include "Common.h"
#include "Menu.h"
#include "Music.h"

#include "Character.h"

int main()
{
	system("mode con: cols=180 lines=50");
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
	//add_menu();
	//ready_number();
	//choose_fakelove();

	/*get_character(560, blackpink, 0);
	get_character(700, bts, 1);
	add_menu();
	*/

	own_blackpink = NULL;
	own_bts = NULL;
	free(own_blackpink);
	free(own_bts);

	system("pause>null");


	return 0;
}
