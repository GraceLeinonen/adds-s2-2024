#include "Heap.cpp"

int main() {

    Heap<int> heap;
    heap.insert(2);
    heap.insert(3);
    heap.insert(5);
    heap.insert(1);
    heap.printHeap();

    return 0;
}