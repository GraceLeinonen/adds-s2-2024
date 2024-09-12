#include "InsertionSort.h"
#include <iostream>

int main() {

    InsertionSort sort;
    std::vector<int> array = {1,5,3,7,4};
    sort.sort(array);

    for (int i = 0; i < array.size(); i++) {
        std::cout << array[i] << " ";

    }

    std::cout << std::endl;

    return 0;
}