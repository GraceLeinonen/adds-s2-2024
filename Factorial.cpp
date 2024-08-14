#include "Factorial.h"

int Factorial::findFactorial(int n) {

    if (n <= 1) {
        return n;
    }

    return n * findFactorial(n - 1);

}

int Factorial::findFactorialTail(int n, int acc) {

    if (n <= 1) {
        return acc;
    }

    return findFactorialTail((n - 1), n * acc);

}