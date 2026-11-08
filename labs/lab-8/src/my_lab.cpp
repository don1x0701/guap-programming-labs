#include "my_lab.h"

static int f1 = 0;
static int f2 = 1;

int generateCustomRand() {
    int f_next = (f1 + f2) % (MY_MAX + 1);
    f1 = f2;
    f2 = f_next;
    return (rand() + f_next) % (MY_MAX + 1);
}

int getIntervalIndex(int value) {
    return value / INTERVAL_LEN;
}