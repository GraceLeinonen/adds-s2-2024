#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H

#include <vector>

class RecursiveBinarySearch{

    private:
    bool search(std::vector<int> array, int start, int end, int value);

    public:
    bool search(std::vector<int> array, int value);
};

#endif