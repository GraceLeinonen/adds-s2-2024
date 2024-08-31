#include "QuickSort.h"

void QuickSort::sort(std::vector<int>& array) {
    
    // define start and end
    int start = 0;
    int end = array.size() - 1;


    // base case
    if (array.size() == 1) {
    }

    // initialise
    int pivot = array.at(end);
    int pivot_index = start; 

    for (int i = start; i < end; i++) {

        if (array.at(i) < pivot) {

            // swap ith element and element at pivot_index
            int temp = array.at(i);
            array[i] = array.at(pivot_index);
            array[pivot_index] = temp;

            // increment pivot_index
            pivot_index++;

        }
    }

    // swap the pivot_index element and pivot
    int temp = array.at(end);
    array[end] = array.at(pivot_index);
    array[pivot_index] = temp;

    // create subarrays
    std::vector<int> front_array(start, pivot_index - 1);
    std::vector<int> back_array(pivot_index + 1, end);

    // call sort for subarrays
    sort(front_array);
    sort(back_array);

}