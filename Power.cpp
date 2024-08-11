#include "Power.h"

// a to the power of b
int Power::Pow(int a, int b) {

    // base case
    if (b == 0) {
        return 1;
    }

    // recursive case
    return a * Pow(a, b-1);

};