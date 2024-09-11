#include "MergeSort2.h"
#include <iostream>

std::vector<int> MergeSort2::sort(std::vector<int> array) {

    // base case
    if (array.size() <= 1) {
        std::cout << "return " << array[0] << std::endl;
        return array;
    }

    // find mid point
    int start = 0;
    int end = array.size();
    int mid = array.size() / 2;

    std::cout << start << " " << end << " " << mid << std::endl;

    // create left and right array
    std::vector<int> left_array;
    for (int i = 0; i < mid; i++) {

        left_array.push_back(array.at(i));
    }

    std::vector<int> right_array;
    for (int i = mid; i < end; i++) {

        right_array.push_back(array.at(i));
    }
    
    for (int i = 0; i < left_array.size(); i++) {
        std::cout << left_array.at(i) << " ";
    }

    std::cout << std::endl;

    for (int i = 0; i < right_array.size(); i++) {
        std::cout << right_array.at(i) << " ";
    }

    std::cout << std::endl;
    
    // recursively call sort
    std::vector<int> sorted_left_array = sort(left_array);
    std::vector<int> sorted_right_array = sort(right_array);

    std::cout << "size right " << sorted_right_array.size() << std::endl;
    std::cout << "size left " << sorted_left_array.size() << std::endl;

    for (int i = 0; i < sorted_left_array.size(); i++) {
        std::cout << sorted_left_array.at(i) << " ";
    }

    std::cout << std::endl;
    
    for (int i = 0; i < sorted_right_array.size(); i++) {
        std::cout << sorted_right_array.at(i) << " ";
    }

    std::cout << std::endl;

    // make result vector
    std::vector<int> result;
    int l = 0;
    int r = 0;

    // loop until end of one array
    while (l < sorted_left_array.size() && r < sorted_right_array.size()) {

        std::cout << "l: " << l << " " << "r: " << r << std::endl;
        // if left element less than right element
        if (sorted_left_array.at(l) < sorted_right_array.at(r)) {

            // put in end of result
            result.push_back(sorted_left_array.at(l));
            l++;
        }

        // if left element less than right element
        else {

            // put in end of result
            result.push_back(sorted_right_array.at(r));
            r++;
        }
    }

    std::cout << "end while" << std::endl;

    // if elements left in left array
    if (l < sorted_left_array.size()) {
        
        // put leftover at end of result
        for (int i = l; i < sorted_left_array.size(); i++) {
            result.push_back(sorted_left_array.at(l));
        }
    }

    // if elements left in right array
    else {

        // put leftover at end of result
        for (int i = r; i < sorted_right_array.size(); i++) {
            result.push_back(sorted_right_array.at(r));
        }
    }

    // return
    return result;
}
