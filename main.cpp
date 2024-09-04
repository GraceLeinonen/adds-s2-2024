#include <iostream>
#include <vector>
#include <limits>
#include "Node.h"
#include "LinkedListTest.h"

int main() {

    LinkedListTest ll;
    ll.insertPosition(-1,5);
    ll.printList();
    ll.insertPosition(1,1);
    ll.printList();
    ll.insertPosition(-100,3);
    ll.printList();
    ll.insertPosition(2,9);
    ll.printList();
    ll.insertPosition(5,10);
    ll.printList();
    int index = ll.search(1);
    int num = ll.get(3);
    std::cout << "The number is at position: " << index << std::endl;
    std::cout << "The number at position is: " << num << std::endl;
    bool didDelete = ll.deletePosition(3);
    std::cout << didDelete << std::endl;
    ll.printList();
    didDelete = ll.deletePosition(-1);
    std::cout << didDelete << std::endl;
    didDelete = ll.deletePosition(100);
    std::cout << didDelete << std::endl;
    ll.~LinkedListTest();
    ll.printList();
    ll.insertPosition(1,1);
    ll.printList();
    int array2[] = {1,2,3};
    LinkedListTest ll2(array2, 3);
    ll2.printList();
    int array3[] = {0};
    LinkedListTest ll3(array3, 1);
    ll3.printList();
    
    return 0;
}