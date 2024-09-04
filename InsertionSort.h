#ifndef INSERTIONSORT_H
#define INSERTIONONSORT_H

#include <vector>
#include "Swap.h"

class InsertionSort { 

    private:
    Swap swap;

    public:
    void sort(std::vector<int>& array);

};

#endif