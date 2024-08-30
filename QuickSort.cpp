#include "QuickSort.h"

void QuickSort::sort(std::vector<int>& array) {
    
    // define start and end
    int start = 0;
    int end = array.size() - 1;


    // base case, nothing to sort
    if (start >= end) {
        return;
    }

    int pivot;
    int pivot_current_index;
    // if array 3 or more, select the third element as pivot
    if (array.size() >= 3) {
        pivot = array.at(2);
        pivot_current_index = 2;
    }
   
    // if array less than 3, select the last element as pivot
    else {
        pivot = array.at(end);
        pivot_current_index = end;
    }

    int pivot_index = start; 

    for (int i = start; i < end; i++) {

        if (array.at(i) < pivot) {

            // swap ith element and element at pivot_index
            int temp = array.at(i);
            array[i] = array.at(pivot_index);
            array[pivot_index] = temp;

            // increment pivot_index
            pivot_index++;

            if (array.at(i) == pivot) {
                pivot_current_index = i;
            }

        }
    }

    // swap the pivot_index element and pivot
    int temp = array.at(pivot_current_index);
    array[pivot_current_index] = array.at(pivot_index);
    array[pivot_index] = temp;

    // create subarrays
    std::vector<int> front_array(start, pivot_index - 1);
    std::vector<int> back_array(pivot_index + 1, end);

    // call sort for subarrays
    sort(front_array);
    sort(back_array);
}