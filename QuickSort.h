#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <vector>
#include "Sort.h"
#include "Swap.h"

class QuickSort : public Sort {

    private:
    Swap swap;
    void sort(std::vector<int>& array, int start, int end);
    int HoarePartition(std::vector<int>& array, int start, int end);
    int LomutoPartition(std::vector<int>& array, int start, int end);

    public:
    std::vector<int> sort(std::vector<int> array);

};

#endif