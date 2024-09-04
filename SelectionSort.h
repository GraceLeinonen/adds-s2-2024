#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H

#include <vector>
#include "Swap.h"

class SelectionSort { 

    private:
    Swap swap;

    public:
    void sort(std::vector<int>& array);

};

#endif