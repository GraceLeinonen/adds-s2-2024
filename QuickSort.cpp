#include <vector>
#include "QuickSort.h"

std::vector<int> QuickSort::sort(std::vector<int> array) {

    // base case
    if (array.size() <= 1) {

        return array;
    }

    // select a pivot index - in this case, the last element
    int pivot_index = array.size() - 1;

    // create less, equal and greater arrays
    std::vector<int> less;
    std::vector<int> equal;
    std::vector<int> greater;

    // put elements in arrays depending on if they are less than, greater than or equal to pivot
    for (int i = 0; i < array.size(); i++) {

        if (array.at(i) < array.at(pivot_index)) {
            less.push_back(array.at(i));
        }

        else if (array.at(i) > array.at(pivot_index)) {
            greater.push_back(array.at(i));
        }

        else {
            equal.push_back(array.at(i));
        }
    }

    // call sort on less and greater arrays
    std::vector<int> sorted_less = sort(less);
    std::vector<int> sorted_greater = sort(greater);

    // create a new array and append the arrays in order: less, equal and greater
    std::vector<int> result;

    for (int i = 0; i < sorted_less.size(); i++) {
        result.push_back(sorted_less.at(i));
    }
    for (int i = 0; i < equal.size(); i++) {
        result.push_back(equal.at(i));
    }
    for (int i = 0; i < sorted_greater.size(); i++) {
        result.push_back(sorted_greater.at(i));
    }

    // return result
    return result;
}