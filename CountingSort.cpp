#include <vector>
#include "CountingSort.h"

std::vector<int> CountingSort::sort(std::vector<int> array) {

    // find maximum element
    int max = array[0];

    for (int i = 0; i < array.size(); i++) {

        if (array.at(i) > max) {
            array.at(i) = max;
        }
    }

    // create buckets for count of each element - creates max ints with value 0
    std::vector<int> count(max, 0);

    // count the occurences of each number and put number in associated index of count;
    for (int i = 0; i < array.size(); i++) {

        count.at(array.at(i) - 1)++;
    }

    // find cumulative sum
    for (int i = 0; i < count.size(); i++) {
        count.at(i) = count.at(i) + count.at(i-1);
    }

    // create new array same size as original array
    std::vector<int> result(array.size(),0);

    for (int i = 0; i < array.size(); i++) {

        int result_index = count.at(array.at(i));
        result.at(result_index) = array.at(i);
    }

    // return result
    return result;

}

