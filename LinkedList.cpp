#include "LinkedList.h"
#include <iostream>

LinkedList::LinkedList() {
    
    head = nullptr; 

}

    
LinkedList::LinkedList(int* array, int len) {

    Node* currNode = head;
    int index = 0;

    while (currNode != nullptr && index < len) {

        currNode = currNode->link;
        index++;

        
    }
}

LinkedList::~LinkedList() {}

void LinkedList::insertAtPosition(int pos, int newNum) {

    Node* currNode = head;
    Node* prevNode;
    int tempPos = 0;

    while (currNode != nullptr && tempPos != pos) {

        prevNode = currNode;
        currNode = currNode->link;
        tempPos++;
    }

    if (pos <= 1 || (currNode == nullptr)) { //! second case deals with if list is currently empty and position > 1
        // add node to front of list

        head = new Node(newNum, head);
        return;
    }

    else if (currNode->link == nullptr) { //! if list is not empty and pos >> 1, falls into this case
        // add node to end of list

        Node* newNode = new Node(newNum, nullptr);
        prevNode->link = newNode;
        return;

    }

    else {

        Node* newNode = new Node(newNum, prevNode->link);
        prevNode->link = newNode;
        return;
    }
}

bool LinkedList::deletePosition(int pos) {}

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