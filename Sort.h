#ifndef SORT_H
#define SORT_H

#include <vector>

class Sort {

    public:
    virtual std::vector<int> sort(std::vector<int> array);
    virtual void sort(std::vector<int>& array);


};

#endif