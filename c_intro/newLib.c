#include "newLib.h"

const double N_PI = 3.14159;

double newCalcPerim(double radius) {
    return 2*N_PI*radius;
}

double newCalcArea(double radius) {
    return N_PI*radius*radius;
}
