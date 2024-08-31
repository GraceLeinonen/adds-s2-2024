#include "Swap.h"

void Swap::swap(int &i, int &j) {

    int temp = i;
    i = j;
    j = temp;
}