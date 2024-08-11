#include "MaxAndMin.h"

int MaxAndMin::max(int* array, int start, int end) {

    // base case: when there is only one element, it is the maximum
    if (start == end) {
        return array[start];
    }

    // recursive case: divide the array in half and find the maximum in each half
    int mid = (start + end) / 2;
    int max1 = max(array, start, mid);
    int max2 = max(array, mid + 1, end);

    // if max1 > max2, return max1, otherwise return max2
    return (max1 > max2) ? max1 : max2;

}

int MaxAndMin::min(int* array, int start, int end) {

    // base case: when there is only one element, it is the minimum
    if (start == end) {
        return array[start];
    }

    // recursive case: divide the array in half and find the minimum in each half
    int mid = (start + end) / 2;
    int min1 = min(array, start, mid);
    int min2 = min(array, mid + 1, end);

    // if max1 > max2, return max1, otherwise return max2
    return (min1 < min2) ? min1 : min2;
    
}