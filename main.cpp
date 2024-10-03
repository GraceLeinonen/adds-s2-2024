#include "Queue.h"

int main() {

    Queue<int> queue;
    queue.enqueue(1);
    queue.print();
    queue.enqueue(2);
    queue.print();
    queue.enqueue(3);
    queue.print();
    queue.dequeue();
    queue.print();
    queue.dequeue();
    queue.print();
    queue.dequeue();
    queue.print();
    
    return 0;
}