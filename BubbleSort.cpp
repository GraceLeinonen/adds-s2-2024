#include "BubbleSort.h"

std::vector<int> BubbleSort::sort(std::vector<int> array) {

    for (int i = array.size() - 1; i > 1; i--) {
        for (int j = 0; j < i; j++) {
            if (array.at(j) > array.at(j+1)) {

                int temp = array.at(j);
                array[j] = array.at(j+1);
                array[j+1] = temp;
            }
        }
    }

    return array;
}