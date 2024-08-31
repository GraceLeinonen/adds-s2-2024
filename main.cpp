#include "QuickSort.h"
#include <iostream>

int main() {

    std::vector<int> array = {1,5,9,3,2};
    QuickSort quick;
    quick.sort(array);
    for (int i = 0; i < array.size(); i++) {
        std::cout << array[i];
    }

    std::cout << std::endl;
} 
