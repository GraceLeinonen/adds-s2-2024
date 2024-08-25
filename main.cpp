#include "QuickSort.h"
#include <iostream>

int main() {

    std::vector<int> array = {1,3,7,5,8,3};
    QuickSort quickSort;
    quickSort.sort(array, 0, 5);

    for (int i = 0; i < array.size(); i++) {

        std::cout << array[i] << " ";
    }

    std::cout << std::endl;
}