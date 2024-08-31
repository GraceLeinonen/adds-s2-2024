#include "RecursiveBinarySearch.h"
#include <iostream>

int RecursiveBinarySearch::search(std::vector<int> array, int start, int end, int value) {

    if (end >= start) {

        // find middle of array
        int mid = start + (end - start) / 2;

        // if middle element is element we're looking for
        if (array[mid] == value) {
            return mid;
        }

        // if middle element is greater than element we're looking for
        else if (array[mid] > value) {
            return search(array, start, mid - 1, value);
        }

        /// if middle element is less than element we're looking for

            return search(array, mid + 1, end, value);
    }

    // element isn't present in the array
    return -1;
}

bool RecursiveBinarySearch::search(std::vector<int> array, int value) {

    // find start and end
    int start = 0;
    int end = array.size() - 1;

    // search
   int index = search(array, start, end, value);
   
   // return
   if (index == -1) {return false;}

   else {return true;}
}