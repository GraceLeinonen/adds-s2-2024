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

int Power::PowTail(int a, int b, int acc) {

    // base case
    if (b == 0) {
        return acc;
    }

    // recursive case
    return PowTail(a, b-1, a * acc);

};