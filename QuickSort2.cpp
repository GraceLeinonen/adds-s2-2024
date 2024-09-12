#include "QuickSort2.h"

std::vector<int> QuickSort2::sort(std::vector<int> array) {

    // base case
    if (array.size() <= 1) {
        return array;
    }
    // select pivot
    int pivot_index = array.size() - 1;

    // create subarrays
    std::vector<int> left_array;
    std::vector<int> right_array;
    std::vector<int> equal_array;

    // loop through array
    for (int i = 0; i < array.size(); i++) {

        // if element less than pivot, put in left array
        if (array.at(i) < array.at(pivot_index)) {
            left_array.push_back(array.at(i));
        }

        // if element greater than pivot, put in right array
        else if (array.at(i) > array.at(pivot_index)) {
            right_array.push_back(array.at(i));
        }

        // if element equal to pivot, put in equal array
        else {
            equal_array.push_back(array.at(i));
        }
    }

    // call sort on left and right array
    std::vector<int> sorted_left_array = sort(left_array);
    std::vector<int> sorted_right_array = sort(right_array);

    // create result array
    std::vector<int> result;

    // push_back left_array, equal_array and right_array
    for (int i = 0; i < left_array.size(); i++) {
        result.push_back(left_array.at(i));
    }
    for (int i = 0; i < equal_array.size(); i++) {
        result.push_back(equal_array.at(i));
    }
    for (int i = 0; i < right_array.size(); i++) {
        result.push_back(right_array.at(i));
    }

    return result;

}