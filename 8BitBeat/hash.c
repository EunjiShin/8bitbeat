//#define BTS_MAX_HASH_TABLE_SIZE 10
//#define PINK_MAX_HASH_TABLE_SIZE 10

#include "hash.h"
#include "character.h"

//int hashCode(int score, int flag) // 해시코드 분배
//{
//	 int choice_key;
//
//	if (flag == 0) { // 블핑
//		if (score < 0) { choice_key = 'K'; } // 지수
//		else if (score >= 0 && score < 450) { choice_key = 'L'; } // 리사
//		else if (score >= 450 && score < 900) { choice_key ='J'; } // 제니
//		else if (score >= 900) { choice_key = 'R'; } // 로제
//	}
//
//	else if (flag == 1) { // 방탕
//		if (score < 0) { choice_key = 'M'; }  // 지민
//		else if (score >= 0 && score < 280) { choice_key = 'S'; } // 슈가
//		else if (score >= 280 && score < 560) { choice_key = 'V'; } // 뷔
//		else if (score >= 560 && score < 840) { choice_key = 'H'; } // 제이홉
//		else if (score >= 840 && score < 1120) { choice_key = 'K'; } // 정국
//		else if (score >= 1120 && score < 1400) { choice_key = 'R'; } // RM
//		else if (score >= 1400) { choice_key = 'J'; } // 진
//	}
//
//	return choice_key;
//}
//
//InitializeHashTable() {  // 해시테이블 초기화
//	for (int i = 0; i < numBucket; i++) {
//		for (int j = 0; j < numSlot; j++) {
//			ht_BTS[i][j] = -1;
//			ht_PINK[i][j] = -1;
//		}
//	}
//}
//
//int search_hash(int search_data, int fullFlag, int hfResult, int *ht[]) { // 검색하는 함수
//	hfResult = hfDivision(search_data);
//	int sresult = 0;
//	for (int i = 0; i < numSlot; i++) {
//		if (ht[hfResult][i] == search_data) {
//			printf("데이터 찾음 [%d, %d]", hfResult, i);
//			sresult = 1;
//			break;
//		}
//		else if (ht[hfResult][i] == -1) {
//			fullFlag = 0;
//			break;
//		}
//	}
//	if (fullFlag == 1 && sresult == 0) {
//		printf("못찾음\n");
//	}
//
//}
//
//void insert_hash(int score, int flag) {
//	int code;
//	InitializeHashTable(); // 초기화 
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