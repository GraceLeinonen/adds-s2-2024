#include "DigitSum.h"
#include <math.h>

int DigitSum::findDigitSum(int value) {

    // base case
    if (value <= 0) {
        return 0;
    }

    // recursive case
    return (value % 10) + findDigitSum(value/10);
}

int DigitSum::findDigitSumTail(int value, int acc) {

    // base case
    if (value <= 0) {
        return acc;
    }

    // recursive case
    return findDigitSumTail(value/10, acc + (value % 10));
}