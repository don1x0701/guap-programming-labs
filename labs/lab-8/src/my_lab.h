#ifndef MY_LAB_H
#define MY_LAB_H

#include <cstdlib>

const int TOTAL_SAMPLES = 500000;
const int INTERVAL_LEN = 10000;
const int NUM_INTERVALS = 4;
const int MY_MAX = 32767;

int generateCustomRand();
int getIntervalIndex(int value);

#endif