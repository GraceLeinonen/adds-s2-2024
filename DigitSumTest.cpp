#include "DigitSum.h"
#include <iostream>

int main() {

    DigitSum digitSum;
    int value = 254;
    std::cout << digitSum.findDigitSum(value) << std::endl;
    std::cout << digitSum.findDigitSumTail(value, 0) << std::endl;
    
    return 0;
}