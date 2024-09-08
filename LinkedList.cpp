#include "LinkedList.h"
#include <limits>
#include <iostream>

LinkedList::LinkedList() {
    
    head = nullptr; 
}

LinkedList::LinkedList(int* array, int len) {

    head = nullptr; 

    for (int i = 1; i <= len; i++) {

        insertPosition(i, array[i-1]);
    }
}

LinkedList::~LinkedList() {

    // traverse to position before
    while (head != nullptr) {

        // delete from front
        deletePosition(1);

    }
}

void LinkedList::insertPosition(int pos, int newNum) {

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

        prevNode = prevNode->getLink();
        index++;

    }

    //! go over this!!! I DON'T UNDERSTAND THIS!
    // check if position is out of bounds
    if (prevNode == nullptr) {

        // add node to end of list
        Node* lastNode = head;

        while (lastNode->getLink() != nullptr) {
            lastNode = lastNode->getLink();
        }

        Node* newNode = new Node(newNum, nullptr);
        lastNode->setLink(newNode);

    }

    // add node within list
    else {

        Node* newNode = new Node(newNum, prevNode->getLink());
        prevNode->setLink(newNode);
        return;
    }
}

bool LinkedList::deletePosition(int pos) {

    // nothing to delete if list is empty or index before 1
    if (head == nullptr || pos < 1) {
        return false;
    }

    Node* temp = head;

    // delete node from front of list
    if (pos == 1) {

        head = head->getLink();
        delete temp;

        return true;
    }

    Node* prevNode = head;
    int index = 1;

    // traverse to position before
    while (prevNode != nullptr && index < pos - 1) {

        prevNode = prevNode->getLink();
        index++;

    }

    // if position is out of bounds, can't delete
    if (prevNode == nullptr || prevNode->getLink() == nullptr) { //! GO OVER THIS

        return false;
    }

    else {

        //! GO OVER THIS
        Node* temp = prevNode->getLink()->getLink();
        delete prevNode->getLink();
        prevNode->setLink(temp);

        return true;
    }
}

int LinkedList::get(int pos) {

    // if trying to access before list
    if (pos < 1) {

        return std::numeric_limits<int>::max();
    }

    Node* currNode = head;
    int index = 1;

    while (currNode != nullptr && index < pos) {

        currNode = currNode->getLink();
        index++;
    }

    // if trying to access after list
    if (currNode == nullptr) {

       return std::numeric_limits<int>::max();

    }

    // valid position
    else {

        return currNode->getData();
    }
}

int LinkedList::search(int target) {

    Node* currNode = head;
    int index = 1;

    while (currNode != nullptr) {

        currNode = currNode->getLink();
        index++;

        if (currNode->getData() == target) {
            
            return index;
        }
    }

    return -1;
}

void LinkedList::printList() {

     if (head == nullptr) {
        return;
    }

    Node* currNode = head;

    std::cout << "[";
    bool first = true;

    while (currNode != nullptr) {

        if (first) {
            std::cout << currNode->getData();
            first = false;
        }

        else {
            std::cout  << " " << currNode->getData();
        }

        currNode = currNode->getLink();
    }

    std::cout << "]" << std::endl;

}