#include "BubbleSort.h"
#include <iostream>

int main() {

    BubbleSort sort;
    std::vector<int> array = {5,3,7,10,3,5};
    sort.sort(array);

    for (int i = 0; i < array.size(); i++) {
        std::cout << array.at(i) << " ";
    }

    std::cout << std::endl;
    return 0;
}