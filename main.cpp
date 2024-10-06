#include "PrefixMatcher.h"
#include <iostream>

int main() {

    PrefixMatcher ac;
    ac.insert("1011", 1);
    ac.insert("1001", 2);
    ac.insert("1010", 3);
    int routerNumber = ac.selectRouter("1001");
    std::cout << routerNumber << std::endl;

    return 0;
}