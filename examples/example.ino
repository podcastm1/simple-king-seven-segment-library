#include <Arduino.h>
#include "segment.h"

int dataArray[6][4] = {
    {22, 23, 24, 25},
    {26, 27 ,28, 29},
    {37, 36, 35, 34},
    {33, 32, 31, 30},
    {49, 48, 47, 46},
    {45, 44, 43, 42}
};

void setup() {
    // put your setup code here, to run once:
    for (int index = 0; index < 6; index++) {
        for (int innerIndex = 0; innerIndex < 4; innerIndex++) {
            pinMode(dataArray[index][innerIndex], OUTPUT);
        }
    }
}

void loop() {
    // put your main code here, to run repeatedly:
    Segment::setDisplay(dataArray[1], 1);
}
