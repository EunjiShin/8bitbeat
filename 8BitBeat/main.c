#include "Title.h"
#include "Common.h"
#include "Menu.h"

int main()
{
	HideCursor();
	Title_Print();
	Menu();
	is_ESC();
	printf("���ӳ�!\n");
	images(0, 0, "images");

	return 0;
}
