#include "Occurences.h"
#include <iostream>

int main() {

    Occurences occurences;
    int array[5] = {2, 1, 2, 2, 3};
    std::cout << occurences.numOccurences(array, 2, 5) << std::endl;
    
    return 0;
}