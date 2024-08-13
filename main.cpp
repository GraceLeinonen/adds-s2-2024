#include "NumInString.h"
#include <iostream>

int main() {

    NumInString numInString;
    std::string string = "3AC2";
    std::cout << numInString.firstNumber(string) << std::endl;

    return 0;
}