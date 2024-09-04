#include "MergeSort.h"
#include "Swap.h"

void MergeSort::merge(std::vector<int>& array, int start, int mid, int end) {
    
    int sizeL = mid - start + 1;
    int sizeR = end - mid;

    std::vector<int> left(sizeL);
    std::vector<int> right(sizeR);

    for (int i = 0; i < sizeL; i++) {
        left[i] = array[start + i];
    }

    for (int j = 0; j < sizeR; j++) {
        right[j] = array[mid + 1 + j];
    }

    int i = 0;
    int j = 0;
    int k = start;

    while (i < sizeL && j < sizeR) {

        if (left[i] <= right[j]) {
            array[k] = left[i];
            i++;
        }

        else {
            array[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < sizeL) {

        array[k] = left[i];
        i++;
        k++;
    }

    while (j < sizeR) {
        
        array[k] = right[j];
        j++;
        k++;
    }
}

void MergeSort::sort(std::vector<int>& array, int start, int end) {

    if (start >= end) {
        return;
    }

    int mid = start + (end - start) / 2;
    sort(array, start, mid);
    sort(array, mid + 1, end);
    merge(array, start, mid, end);
    
}

