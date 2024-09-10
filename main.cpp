#include "MergeSort.h"
#include <iostream>

int main() {

    MergeSort mergeSort;
    std::vector<int> array = {1,5,3,7,4};
    mergeSort.sort(array, 0, 6);

    for (int i = 0; i < array.size(); i++) {
        std::cout << array[i] << " ";

    }

    std::cout << std::endl;

    return 0;
}