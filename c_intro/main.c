#include "newLib.h"
#include <stdio.h>

int main(int argc, char** argv) {
    double radius = 3;
    double perim = newCalcPerim(radius);
    double area = newCalcArea(radius);

    printf("The perimiter is: %f and the aread is: %f\n",perim,area);
}

