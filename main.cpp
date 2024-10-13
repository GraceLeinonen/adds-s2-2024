#include "Heap.cpp"
#include <iostream>

int main() {

    Heap<int> heap;
    heap.insert(2);
    heap.insert(3);
    heap.insert(5);
    heap.insert(1);
    heap.remove(3);
    heap.printHeap();
    std::cout << heap.getMin() << std::endl;
   
   return 0;
}