#include "LinkedListTest.h"
#include <limits>
#include <iostream>

LinkedListTest::LinkedListTest() {
    
    head = nullptr; 
}

LinkedListTest::LinkedListTest(int* array, int len) {

    head = nullptr; 

    for (int i = 1; i <= len; i++) {

        insertPosition(i, array[i-1]);
    }
}

LinkedListTest::~LinkedListTest() {

    // traverse to position before
    while (head != nullptr) {

        // delete from front
        deletePosition(1);

    }
}

void LinkedListTest::insertPosition(int pos, int newNum) {

    // add node to front of list
    if (head == nullptr || pos <= 1) {

        head = new Node(newNum, head);
        return;
    }
    
    //! SHOULD THINK OF A DIFFERENT NAME INSTEAD OF PREV???
    Node* prevNode = head;
    int index = 1; //! WHY???

    // traverse to position before or end of list
    while (prevNode != nullptr && index < pos - 1) {

        prevNode = prevNode->link;
        index++;

    }

    //! go over this!!! I DON'T UNDERSTAND THIS!
    // check if position is out of bounds
    if (prevNode == nullptr) {

        // add node to end of list
        Node* lastNode = head;

        while (lastNode->link != nullptr) {
            lastNode = lastNode->link;
        }
        lastNode->link = new Node(newNum, nullptr);

    }

    // add node within list
    else {

        Node* newNode = new Node(newNum, prevNode->link);
        prevNode->link = newNode;
        return;
    }
}

bool LinkedListTest::deletePosition(int pos) {

    // nothing to delete if list is empty or index before 1
    if (head == nullptr || pos < 1) {
        return false;
    }

    Node* temp = head;

    // delete node from front of list
    if (pos == 1) {

        head = head->link;
        delete temp;

        return true;
    }

    Node* prevNode = head;
    int index = 1;

    // traverse to position before
    while (prevNode != nullptr && index < pos - 1) {

        prevNode = prevNode->link;
        index++;

    }

    // if position is out of bounds, can't delete
    if (prevNode == nullptr || prevNode->link == nullptr) { //! GO OVER THIS

        return false;
    }

    else {

        //! GO OVER THIS
        Node* temp = prevNode->link->link;
        delete prevNode->link;
        prevNode->link = temp;

        return true;
    }
}

int LinkedListTest::get(int pos) {

    // if trying to access before list
    if (pos < 1) {

        return std::numeric_limits<int>::max();
    }

    Node* currNode = head;
    int index = 1;

    while (currNode != nullptr && index < pos) {

        currNode = currNode->link;
        index++;
    }

    // if trying to access after list
    if (currNode == nullptr) {

       return std::numeric_limits<int>::max();

    }

    // valid position
    else {

        return currNode->data;
    }
}

int LinkedListTest::search(int target) {

    Node* currNode = head;
    int index = 1;

    while (currNode != nullptr) {

        currNode = currNode->link;
        index++;

        if (currNode->data == target) {
            
            return index;
        }
    }

    return -1;
}

void LinkedListTest::printList() {

     if (head == nullptr) {
        return;
    }

    Node* currNode = head;

    std::cout << "[ ";
    while (currNode != nullptr) {

        std::cout  << currNode->data << " ";
        currNode = currNode->link;
    }

    std::cout << "]" << std::endl;

}