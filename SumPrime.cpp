#include "SumPrime.h"

int SumPrime::sumPrime(int a, int b) {

    // base case
    if (b < a) {
        return 0;
    }

    // logic
    int num = 0;
    if(b == 2) {
        num = b;
    }

    for (int i = 2; i <= b/2; i++) {

        if (b % i != 0) {
            num = b;
        }
    }

    // recursive case
    return num + sumPrime(a, b-1);
}