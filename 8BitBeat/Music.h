#pragma once
#include "Common.h"
#include <process.h>
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")

#define Red_flavor "C:\\Users\\Administrator\\Desktop\\RedFlavor.wav"
#define Fake_love "C:\\Users\\Administrator\\Desktop\\FakeLove.wav"
#define DDDD "C:\\Users\\Administrator\\Desktop\\DDDD.wav"

typedef struct Music {
	int number; // ����
	char title[20];  // �뷡 ����
	char artist[20];  // �θ� ���
	int trap; // Ʈ�� ��
	char sumnail[40][40];  // �����
}music;

music RedFlavor;
music FakeLove;
music DDuduDDudu;

void choose_music();
void default_screen();
void choose_redflavor();
void choose_fakelove();
void choose_dddd();