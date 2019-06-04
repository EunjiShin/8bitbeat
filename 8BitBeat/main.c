
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
	//add_menu();
	//ready_number();
	//choose_fakelove();
	
	free(own_blackpink);
	free(own_bts);
	system("pause>null");


	return 0;
}
