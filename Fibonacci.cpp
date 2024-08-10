#include "Fibonacci.h"

int Fibonacci::nFibonacci(int n) {

    // base case
    if (n <= 1) {
        return n;
    }

    // recursive case
    else {
        return nFibonacci(n - 1) + nFibonacci(n - 2);
    }
}