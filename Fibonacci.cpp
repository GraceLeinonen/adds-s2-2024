#include "Fibonacci.h"

int Fibonacci::nFibonacci(int n) {

    // base case
    if (n <= 1) {
        return n;
    }

    // recursive case
    return nFibonacci(n - 1) + nFibonacci(n - 2);
}

int Fibonacci::nFibonacciTail(int n, int next_to_last, int last) {

    // base case
    if (n == 0) {
        return next_to_last;
    }
    if (n == 1) {
        return last;
    }

    // recursive case
    return nFibonacciTail(n - 1, last, next_to_last + last);
}

int Fibonacci::nFibonacciMemoisation(int n, std::vector<int>& memo) {

    // memoisation
    if (memo[n] != -1) {
        return memo[n];
    }

    // base case
    if (n <= 2) {
        return 1;
    }

    // recursive case
    memo[n] = nFibonacciMemoisation(n-1, memo) + nFibonacciMemoisation(n-2, memo);
    return memo[n];
}