#include "segment.h"
#include <Arduino.h>

int bcdCode[10][4] = {
    {0, 0, 0, 0},
    {0, 0, 0, 1},
    {0, 0, 1, 0},
    {0, 0, 1, 1},
    {0, 1, 0, 0},
    {0, 1, 0, 1},
    {0, 1, 1, 0},
    {0, 1, 1, 1},
    {1, 0, 0, 0},
    {1, 0, 0, 1}
};

void Segment::setDisplay(int* pinMap, const int value) {
    for (int index = 0; index < 4; index++) {
        digitalWrite(pinMap[index], bcdCode[value - 1][index]);
    }
};