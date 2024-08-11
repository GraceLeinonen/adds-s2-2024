#include "Occurences.h"

int Occurences::numOccurences(int* array, int num, int length) {

    // base case
    if (length == 0) {
        return 0;
    }

    // recursive case
    int count = 0;
    if (array[length - 1] == num) {
        count++;
    }

    return count + numOccurences(array, num, length - 1);
    
}