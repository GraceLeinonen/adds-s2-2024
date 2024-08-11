#include "MaxAndMin.h"
#include <iostream>

int main() {

    MaxAndMin maxAndMin;
    int array[4] = {2, 1, 4, 3};
    std::cout << maxAndMin.max(array, 0, 3) << std::endl;
    std::cout << maxAndMin.min(array, 0, 3) << std::endl;
    
    return 0;
}