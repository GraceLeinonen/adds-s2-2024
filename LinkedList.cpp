#include "LinkedList.h"
#include <iostream>

LinkedList::LinkedList() {
    
    head = nullptr; 

}

    
LinkedList::LinkedList(int* array, int len) {

    // 
    for (int i = 1; i <= len; i++) {

        insertPosition(i, array[i-1]);
    }
}

LinkedList::~LinkedList() {

    Node* currNode = head;
    Node* prevNode = nullptr;
    int tempPos = 0;

    // traverse to find length
    while (currNode != nullptr) {

        prevNode = currNode;
        currNode = currNode->link;
        tempPos++;
    }

    // delete at each positon until you reach the end
    for (int i = 1; i <= tempPos; i++) {

        deletePosition(i);
    }
}

void LinkedList::insertPosition(int pos, int newNum) {

    // add node to front of list
    if (head == nullptr || pos <= 1) {

        head = new Node(newNum, head);
        return;
    }
    
    Node* prevNode = head;
    int prevPos = 0;

    // traverse to position before
    while (prevNode != nullptr && prevPos < pos - 1) {

        prevNode = prevNode->link;
        prevPos++;
    }

    // add node to end of list
    if (prevNode == nullptr) {

        Node* newNode = new Node(newNum, nullptr);
        prevNode->link = newNode;
        return;

    }

    // add node within list
    else {

        Node* newNode = new Node(newNum, prevNode->link);
        prevNode->link = newNode;
        return;
    }
}

bool LinkedList::deletePosition(int pos) {

    // nothing to delete if list is empty or index before 1
    if (head == nullptr || pos < 1) {
        return false;
    }

    Node* currNode = head;
    Node* prevNode;
    int tempPos = 0;

    // delete node from front of list
    if (head != nullptr && pos == 1) { //! second case deals with if list is currently empty and position > 1

        head = currNode->link;
        head = head->link;
        delete currNode;

        return true;
    }

    // traverse to position
    while (currNode != nullptr && tempPos != pos) {

        prevNode = currNode;
        currNode = currNode->link;
        tempPos++;
    }

    
    if (pos > tempPos) { //! if you reach nullptr before position, then position is out of bounds, so can't delete

        return false;

    }

    else {

        prevNode->link = currNode->link;
        delete currNode;

        return true;
    }
}

int LinkedList::get(int pos) {

    Node* currNode = head;
    int index = 0;

    while (currNode != nullptr && index < pos) {

        currNode = currNode->link;
        index++;
    }

    return currNode->data;
}

int LinkedList::search(int target) {

    Node* currNode = head;
    int index = 0;

    while (currNode != nullptr) {

        currNode = currNode->link;
        index++;

        if (currNode->data == target) {
            
            return index;
        }
    }

    return -1;
}

void LinkedList::printList() {

    Node* currNode = head;

    while (currNode != nullptr) {

        currNode = currNode->link;

        std::cout << " [" << currNode->data << "] ";
    }

    std::cout << std::endl;
}