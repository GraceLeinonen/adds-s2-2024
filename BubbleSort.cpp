#include "BubbleSort.h"
#include "Swap.h"

void BubbleSort::sort(std::vector<int>& array) {

    for (int i = array.size() - 1; i > 1; i--) {

        for (int j = 0; j < i; j++) {

            if (array.at(j) > array.at(j+1)) {
                
               swap.swap(array[j], array[j+1]);

            }
        }
    }
}

