#include "Factorial.h"
#include <iostream>

int main() {

    Factorial factorial;
    int n = 4;
    std::cout << factorial.findFactorial(n) << std::endl;
    std::cout << factorial.findFactorialTail(n, 1) << std::endl;

    return 0;
}