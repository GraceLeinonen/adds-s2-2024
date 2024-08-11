#include "EvenAndOdd.h"

int EvenAndOdd::even(int a, int b) {
    
    // base case
    if (b < a) {
        return 0;
    }

    // logic
    int num = 0;
    if (b % 2 == 0) {
        num = b;
    }

    // recursive case
    return num + even(a, b - 1);

}

int EvenAndOdd::odd(int a, int b) {
    
    // base case
    if (b < a) {
        return 0;
    }

    // logic
    int num = 0;
    if (b % 2 != 0) {
        num = b;
    }

    // recursive case
    return num + odd(a, b - 1);

}