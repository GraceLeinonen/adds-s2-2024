#include <vector>
#include "SelectionSort.h"

void SelectionSort::sort(std::vector<int>& array) {

    for (int i = 0; i < array.size(); i++) {

        int min_index = i;

        for (int j = i; j < array.size(); j++) {

            if (array.at(j) < array.at(min_index)) {
                    min_index = j;
            }
        }

        if (i != min_index) {
            int temp = array.at(min_index);
            array.at(min_index) = array.at(i);
            array.at(i) = temp;
        }
    }
}