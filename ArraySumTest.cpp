#include "ArraySum.h"
#include <iostream>

int main() {

    ArraySum arraySum;
    int array[3] = {1, 2, 3};
    
    std::cout << arraySum.findArraySum(array, 3) << std::endl;

    return 0;
}