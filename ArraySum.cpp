#include "ArraySum.h"

int ArraySum::findArraySum(int* array, int n) {

    if (n == 0) {
        return 0;
    }

    return array[n-1] + findArraySum(array, n-1);

}

int ArraySum::findArraySumTail(int* array, int n, int acc) {

    if (n == 0) {
        return acc;
    }

    return findArraySumTail(array, n-1, acc + array[n-1]);
}