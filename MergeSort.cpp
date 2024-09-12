#include <vector>
#include <iostream>
#include "MergeSort.h"

std::vector<int> MergeSort::sort(std::vector<int> array) {

    // base case
    if (array.size() <= 1) {

        return array;
    }

    // find start, end and mid
    int start = 0;
    int end = array.size();
    int mid = array.size() / 2;

    // create left and right arrays
    std::vector<int> left_array(array.begin() + start, array.begin() + mid);
    std::vector<int> right_array(array.begin() + mid, array.begin() + end);

    // call sort on each
    std::vector<int> sorted_left_array = sort(left_array);
    std::vector<int> sorted_right_array = sort(right_array);

    // create new array and iterators
    std::vector<int> result;
    int l = 0;
    int r = 0;

    // go through until you reach the end of one array
    while (l < sorted_left_array.size() && r < sorted_right_array.size()) {

        // put smaller value in result array
        if (sorted_left_array.at(l) < sorted_right_array.at(r)) {

            result.push_back(sorted_left_array.at(l));
            l++;
        }

        else {

            result.push_back(sorted_right_array.at(r));
            r++;
        }
    }

    // append the leftover array onto result

    if (l < sorted_left_array.size()) {

        for (int i = l; i < sorted_left_array.size(); i++) {

            result.push_back(sorted_left_array.at(i));
        }
    }

    else {

        for (int i = r; i < sorted_right_array.size(); i++) {

            result.push_back(sorted_right_array.at(i));
        }
    }

    // return array
    return result;

}
