#include "Factorial.h"

int Factorial::findFactorial(int n) {

    if (n <= 1) {
        return n;
    }

    return n * findFactorial(n - 1);

}