#include "Pattern.h"
#include <iostream>

void Pattern::pattern(int n, int start, int end) {

    // base case
    if (start == end) {
        std::cout << n << std::endl;
    }

    // recursive case
    return pattern(n - 1, start + 1, end - 1);

}