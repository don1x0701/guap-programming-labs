#include <iostream>
#include <ctime>
#include "my_lab.h"

using namespace std;

int main() {
    srand(time(0));

    int counts[NUM_INTERVALS] = {0};

    for (int i = 0; i < TOTAL_SAMPLES; i++) {
        int val = generateCustomRand();
        int idx = getIntervalIndex(val);
        if (idx >= 0 && idx < NUM_INTERVALS) {
            counts[idx]++;
        }
    }

    for (int i = 0; i < NUM_INTERVALS; i++) {
        cout << "Интервал " << i << ": " << counts[i] << endl;
    }

    return 0;
}