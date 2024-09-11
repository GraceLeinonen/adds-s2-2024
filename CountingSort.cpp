#include "CountingSort.h"

std::vector<int> CountingSort::sort(std::vector<int> array) {

    // go through array and find max number
    int max = array.at(0);
    for (int i = 1; i < array.size(); i++) {
        if (array.at(i) > max) {
            max = array.at(i);
        }
    }

    // create new vector for count
    std::vector<int> count(max - 1, 0);

    //
    for (int i = 0; i < array.size(); i++) {

        count[array.at(i)-1]++;
    }

    // find cumulative sum
    for (int i = 1; i < array.size(); i++) {

        count.at(i) = count.at(i) + count.at(i-1);
    }

    // create new vector for sorted array
    std::vector<int> result;

    for (int i = 0; i < array.size(); i++) {

        int index = array.at(i);
        result.insert(index, array.at(i));

    }

    






}
