#include <iostream>
using namespace std;

template <class T>
class Set {
    private:
    virtual bool isMember(T value) = 0;
    public:
    virtual void add(T value) = 0;
    virtual void remove(T value) = 0;
    virtual size_t size() = 0;
};