#include "QuickSort.h"

void QuickSort::sort(std::vector<int>& array, int start, int end) {
    
    // base case, nothing to sort
    if (start >= end) {
        return;
    }

    int pivot;
    // if array 3 or more, select the third element as pivot
    if (array.size() >= 3) {
        pivot = array.at(2);
    }

    // if array less than 3, select the last element as pivot
    else {
        pivot = array.at(end);
    }

    int pivot_index = start;
    
    for (int i = start; i < end; i++) {

        if (array.at(i) < pivot) {

            // swap ith element and element at pivot_index
            int temp = array.at(i);
            array[i] = array.at(pivot_index);
            array[pivot_index] = temp;
        }
    }

    int pivot_position;
    // find position of pivot
    for (int i = 0; i < array.size(); i++) {
        if (array[i] = pivot) {
            pivot_position = i;
        }
    }
    // swap the pivot_index element and pivot
    int temp = array.at(pivot_index);
    array[pivot_index] = array.at(pivot_position);
    array[pivot_position] = temp;

    // call sort for subarrays
    sort(array, start, pivot_index - 1);
    sort(array, pivot_index + 1, end);
}