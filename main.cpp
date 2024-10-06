#include "PrefixMatcher.h"
#include <iostream>

int main() {

    PrefixMatcher pm;
    pm.insert("1001001", 1);
    pm.insert("1100110", 2);
    pm.insert("1110011", 3);
    int routerNumber = pm.selectRouter("1110");
    std::cout << routerNumber << std::endl;

    return 0;
}