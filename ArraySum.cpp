#include "ArraySum.h"

int ArraySum::findArraySum(int* array, int n) {

    if (n == 0) {
        return 0;
    }

    return array[n-1] + findArraySum(array, n-1);

}