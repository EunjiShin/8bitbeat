
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
	printf("게임끝!\n");
	images(0, 0, "images");*/

	CursorView(0);
	make_own();
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

	
	
	get_character(200, bts, 0);
	printf("되나?\n");
	system("cls");
	add_menu();
	//BP_frame();

	

	return 0;
}
