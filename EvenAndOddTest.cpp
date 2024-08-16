#include "EvenAndOdd.h"
#include <iostream>

int main() {

    EvenAndOdd evenAndOdd;
    int a = 2;
    int b = 6;
    std::cout << evenAndOdd.even(a,b) << std::endl;
    std::cout << evenAndOdd.odd(a,b) << std::endl;
    std::cout << evenAndOdd.evenTail(a,b,0) << std::endl;
    std::cout << evenAndOdd.oddTail(a,b,0) << std::endl;
    
    return 0;
}