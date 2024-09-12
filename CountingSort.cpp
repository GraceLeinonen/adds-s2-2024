#include "CountingSort.h"
#include <iostream>

std::vector<int> CountingSort::sort(std::vector<int> array) {

    // go through array and find max number
    int max = array.at(0);
    for (int i = 1; i < array.size(); i++) {
        if (array.at(i) > max) {
            max = array.at(i);
        }
    }

    // create new vector for count; initialise size to be max and elements to be 0
    std::vector<int> count(max, 0);

    // fill buckets
    for (int i = 0; i < array.size(); i++) {
        count[array.at(i)-1]++;
    }

    // find cumulative sum
    for (int i = 1; i < count.size(); i++) {

        count.at(i) = count.at(i) + count.at(i-1);
    }

    // create new vector for sorted array; initialise size to be array.suze() and elements to be 0
    std::vector<int> result(array.size(), 0);

    for (int i = 0; i < array.size(); i++) {

        // get index for cummulative sum (count)
        int index_cum_sum = array.at(i);        
        int index_result = count.at(index_cum_sum - 1);
        result.at(index_result - 1) = array.at(i);

    }

    return result;

}
