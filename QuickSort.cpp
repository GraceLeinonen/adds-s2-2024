#include "QuickSort.h"

std::vector<int> QuickSort::sort(std::vector<int> array) {

    // base case
    if (array.size() <= 1) {
        return array;
    }

    // initialise pivot to be third element (or first if not enough elements)
    int pivot = array.size() >= 3 ? array[2] : array[0];

    // initialise 'less than', 'greater than' and 'equal to' vectors
    std::vector<int> less;
    std::vector<int> greater;
    std::vector<int> equal;

    // loop
    for (int num : array) {

        // check if element is less than pivot
        if (num < pivot) {
           less.push_back(num);
        }

        // check if element is greater than pivot
        else if (num > pivot) {

            greater.push_back(num);
        }

        // check if element is equal to pivot
        else {
            equal.push_back(num);
        }
    }

    // call quicksort on 'less than' and 'greater than' vectors
    less = sort(less);
    greater = sort(greater);

    // create final vector and reserve size
    std::vector<int> final;
    final.reserve(less.size() + equal.size() + greater.size());

    // combine vectors
    final.insert(final.end(), less.begin(), less.end());
    final.insert(final.end(), equal.begin(), equal.end());
    final.insert(final.end(), greater.begin(), greater.end());

    // return final vector
    return final;

}