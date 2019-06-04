#pragma once
#ifndef HASH_H
#define HASH_H
#include "common.h"

#define BTS_SIZE 100
#define PINK_SIZE 100
#define MAX_SIZE 200
int hashCode(int key, int score, int flag);
int hashing(int *a, int **ht);
int search(int *ht, int key);
int numBucket = 10;
int numSlot = 5;

int ht_BTS[BTS_SIZE][MAX_SIZE];
int ht_PINK[PINK_SIZE][MAX_SIZE];
int own_BTS[BTS_SIZE][MAX_SIZE];
int own_PINK[PINK_SIZE][MAX_SIZE];

int hashCode(int score, int flag);


#endif