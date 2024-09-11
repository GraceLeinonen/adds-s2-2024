#include "LinkedList.h"

int main() {

    LinkedList<int> linkedList1;
    linkedList1.insertFront(1);
    linkedList1.insertFront(2);
    linkedList1.insertFront(3);
    linkedList1.print();
    linkedList1.deleteFront();
    linkedList1.print();


    LinkedList<int> linkedList2;
    linkedList2.insertBack(1);
    linkedList2.insertBack(2);
    linkedList2.insertBack(3);
    linkedList2.print();
    linkedList2.deleteBack();
    linkedList2.print();
    linkedList2.insertPosition(10,2);
    linkedList2.print();
    linkedList2.insertPosition(10,-100);
    linkedList2.print();
    linkedList2.insertPosition(10,100);
    linkedList2.print();
    linkedList2.deletePosition(3);
    linkedList2.print();
    linkedList2.deletePosition(-100);
    linkedList2.print();
    linkedList2.deletePosition(100);
    linkedList2.print();
    std::cout << linkedList2.getData(1) << std::endl;
    std::cout << linkedList2.getPosition(2) << std::endl;

    return 0;
}