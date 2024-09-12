#include "CountingSort.h"
#include <iostream>

int main() {

    CountingSort sort;
    std::vector<int> array = {1,5,3,7,4};
    array = sort.sort(array);

    for (int i = 0; i < array.size(); i++) {
        std::cout << array[i] << " ";

    }

    std::cout << std::endl;

    return 0;
}