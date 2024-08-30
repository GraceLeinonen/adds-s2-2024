#include "QuickSort.h"
#include <iostream>

int main() {

    std::vector<int> array = {10,8,6,2,0};
    QuickSort quickSort;
    quickSort.sort(array);

    for (int i = 0; i < array.size(); i++) {

        std::cout << array[i] << " ";
    }

    std::cout << std::endl;
} 
