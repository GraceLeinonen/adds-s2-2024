#include "QuickSort.h"
#include "Swap.h"

int QuickSort::HoarePartition(std::vector<int>& array, int start, int end) {

    int pivot = array.at(end);
    int i = start;
    int j = end;

    while (i <= j) {

        if (array[i] < pivot) {

            i++;
        }

        else if (array[j] > pivot) {

            j--;
        }

        else {

        swap.swap(array[i], array[j]);
        i++;
        j--;

        }
    }

    return j;

}

int QuickSort::LomutoPartition(std::vector<int>& array, int start, int end) {
    
}

void QuickSort::sort(std::vector<int>& array, int start, int end) {

    if (start < end) {

        int pivot_index = HoarePartition(array, start, end);

        sort(array, start, pivot_index);
        sort(array, pivot_index + 1, end);
    }
}

std::vector<int> QuickSort::sort(std::vector<int> array) {
    sort(array, 0, array.size() - 1);
    return array;
}
