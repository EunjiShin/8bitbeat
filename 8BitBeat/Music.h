#pragma once
#include "Common.h"
#include <process.h>
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")

#define Red_flavor "RedFlavor.wav"
#define Fake_love "FakeLove.wav"
#define DDDD "DDDD.wav"
#define traap "trap.wav"

typedef struct Music {

	char title[20];  // 노래 제목
	char artist[20];  // 부른 사람
	int trap; // 트랩 수
}music;

music RedFlavor;
music FakeLove;
music DDuduDDudu;

int musicFlag;

void choose_music();
void default_screen();
void choose_redflavor();
void choose_fakelove();
void choose_dddd();

void music_comeon();
void draw_equalizer(int *equalizer_count);


