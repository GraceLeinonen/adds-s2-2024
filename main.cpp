#include "PriorityPopQueue.h"
#include <iostream>

int main() {

    PriorityPopQueue<int> ppq;
    ppq.enqueue(1,1);
    ppq.print();
    ppq.enqueue(3,50);
    ppq.print();
    ppq.enqueue(4,100);
    ppq.print();
    ppq.enqueue(2,10);
    ppq.print();

    ppq.dequeue();
    ppq.print();
    ppq.dequeue();
    ppq.print();
    ppq.dequeue();
    ppq.print();
    ppq.dequeue();
    ppq.print();

    return 0;
}