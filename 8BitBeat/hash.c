//#define BTS_MAX_HASH_TABLE_SIZE 10
//#define PINK_MAX_HASH_TABLE_SIZE 10

#include "hash.h"
#include "character.h"

//int hashCode(int score, int flag) // �ؽ��ڵ� �й�
//{
//	 int choice_key;
//
//	if (flag == 0) { // ����
//		if (score < 0) { choice_key = 'K'; } // ����
//		else if (score >= 0 && score < 450) { choice_key = 'L'; } // ����
//		else if (score >= 450 && score < 900) { choice_key ='J'; } // ����
//		else if (score >= 900) { choice_key = 'R'; } // ����
//	}
//
//	else if (flag == 1) { // ����
//		if (score < 0) { choice_key = 'M'; }  // ����
//		else if (score >= 0 && score < 280) { choice_key = 'S'; } // ����
//		else if (score >= 280 && score < 560) { choice_key = 'V'; } // ��
//		else if (score >= 560 && score < 840) { choice_key = 'H'; } // ����ȩ
//		else if (score >= 840 && score < 1120) { choice_key = 'K'; } // ����
//		else if (score >= 1120 && score < 1400) { choice_key = 'R'; } // RM
//		else if (score >= 1400) { choice_key = 'J'; } // ��
//	}
//
//	return choice_key;
//}
//
//InitializeHashTable() {  // �ؽ����̺� �ʱ�ȭ
//	for (int i = 0; i < numBucket; i++) {
//		for (int j = 0; j < numSlot; j++) {
//			ht_BTS[i][j] = -1;
//			ht_PINK[i][j] = -1;
//		}
//	}
//}
//
//int search_hash(int search_data, int fullFlag, int hfResult, int *ht[]) { // �˻��ϴ� �Լ�
//	hfResult = hfDivision(search_data);
//	int sresult = 0;
//	for (int i = 0; i < numSlot; i++) {
//		if (ht[hfResult][i] == search_data) {
//			printf("������ ã�� [%d, %d]", hfResult, i);
//			sresult = 1;
//			break;
//		}
//		else if (ht[hfResult][i] == -1) {
//			fullFlag = 0;
//			break;
//		}
//	}
//	if (fullFlag == 1 && sresult == 0) {
//		printf("��ã��\n");
//	}
//
//}
//
//void insert_hash(int score, int flag) {
//	int code;
//	InitializeHashTable(); // �ʱ�ȭ 
//	code = hashCode(score, flag);
//			for (int i = 0; i < numSlot; i++) {
//				if (ht_BTS[code][i] == -1) {
//					ht_BTS[code][i] = *bts;
//					break;
//				}
//				}
//	*/
//
//}