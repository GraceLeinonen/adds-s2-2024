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