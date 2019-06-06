#pragma once

#include "Menu.h"
#include "Music.h"

void test();
void ingame(int music_value);
int print_map(char* musicName, int part, int trapFlag, double *TotalScore, int musicFlag, CH *group);
void dddd();
void fakelove();
void over_check(int y, int delay, double score, int musicFlag, CH *group);
double score_check(double score, int trapFlag, int delaytime);
void mapFrame();