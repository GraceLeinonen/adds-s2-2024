#include "MergeSort2.h"
#include <iostream>

int main() {

    MergeSort2 mergeSort;
    std::vector<int> array = {1,5,3,7,4};
    array = mergeSort.sort(array);

    for (int i = 0; i < array.size(); i++) {
        std::cout << array[i] << " ";

    }

    std::cout << std::endl;

    return 0;
}