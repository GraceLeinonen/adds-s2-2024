#include "QuickSort.h"
#include <iostream>

int main() {

    QuickSort quickSort;
    std::vector<int> array = {1,5,3,7,4};
    std::vector<int> sorted_array = quickSort.sort(array);

    for (int i = 0; i < sorted_array.size(); i++) {
        std::cout << sorted_array[i] << " ";

    }

    std::cout << std::endl;

    return 0;
}