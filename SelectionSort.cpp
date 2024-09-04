#include "SelectionSort.h"
#include "Swap.h"

void SelectionSort::sort(std::vector<int>& array) {

    for (int i = 0; i < array.size(); i++) {

        int min_index = i;

        for (int j = i; j < array.size(); j++) {

            if (array[j] < array[min_index]) {
                
               min_index = j;

            }
        }

        if (i != min_index) {

            swap.swap(array[i], array[min_index]);
        }
    }
}

