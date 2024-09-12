#include <vector>
#include "InsertionSort.h"

void InsertionSort::sort(std::vector<int>& array) {

    for (int i = 1; i < array.size(); i++) {

        for (int j = i; j >= 0; j--) {

            if (array.at(j) < array.at(j-1)) {

                int temp = array[j];
                array[j] = array[j-1];
                array[j-1] = temp;

            }

            else break;
        }
    }
}     