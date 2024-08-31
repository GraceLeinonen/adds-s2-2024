#ifndef SORT_H
#define SORT_H

#include <vector>

class Sort {

    private:
    virtual void sort(std::vector<int>& array, int start, int end) = 0;

    public:
    virtual std::vector<int> sort(std::vector<int> array) = 0;

};

#endif