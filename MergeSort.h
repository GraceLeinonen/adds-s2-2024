#ifndef MERGESORT_H
#define MERGESORT_H

#include <vector>
#include "Swap.h"

class MergeSort { 

    private:
    Swap swap;

    public:
    void sort(std::vector<int>& array, int start, int end);
    void merge(std::vector<int>& array, int start, int mid, int end);

};

#endif