#pragma once

#include "Common.h"
#include "Character.h"

void Title();
void Title_Print();

void M_line_Print();
void M_key(char key, int *x1, int *y1);
void M_print();
int M_move_arrow();
void Menu();

void E_key(char key, int *x1, int *y1);
void ESC_Print();
int e_move_arrow();
void is_ESC();

void Print_info();
void Print_Lank();
void Print_character();

void Run_Game();
void Go_First();
void Select_Song();