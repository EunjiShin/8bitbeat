#pragma once
#include "Common.h"

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