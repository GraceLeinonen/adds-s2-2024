#ifndef BUBBLENSORT_H
#define BUBBLESORT_H

#include <vector>
#include "Swap.h"

class BubbleSort { 

    private:
    Swap swap;

    public:
    void sort(std::vector<int>& array);

};

#endif