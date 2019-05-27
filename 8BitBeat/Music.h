#pragma once
#include "Common.h"

typedef struct Music {
	int number; // 순서
	char title[20];  // 노래 제목
	char artist[20];  // 부른 사람
	int trap; // 트랩 수
	char sumnail[40][40];  // 썸네일
}music;

music RedFlavor;
music FakeLove;
music DDuduDDudu;

void choose_music();
void default_screen();