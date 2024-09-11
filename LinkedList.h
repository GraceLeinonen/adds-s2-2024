#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"
#include <iostream>
#include <vector>

template<typename T>
class LinkedList {

    private:
    Node<T>* head;
    Node<T>* tail;

    public:
    
    // constructors and destructor
    LinkedList();
    LinkedList(T* array, int size);
    LinkedList(std::vector<T> array, int size);
    ~LinkedList();

    // traversal
    Node<T>* traverse(int position);

    // insertion
    void insertFront(T data);
    void insertBack(T data);
    void insertPosition(T data, int position);

    // deletion
    void deleteFront();
    void deleteBack();
    void deletePosition(int position);

    // get stuff
    T getData(int position);
    int getPosition(T data);

    // print
    void print();
    

    

};

template<typename T>
LinkedList<T>::LinkedList() {

    head = nullptr;
    tail = nullptr;
}

template<typename T>
LinkedList<T>::LinkedList(T* array, int size) {

    head = nullptr;
    tail = nullptr;
}

template<typename T>
LinkedList<T>::LinkedList(std::vector<T> array, int size) {

    head = nullptr;
    tail = nullptr;
}

template<typename T>
LinkedList<T>::~LinkedList() {}

template<typename T>
Node<T>* LinkedList<T>::traverse(int position) {

    // check out of bounds in front
    if (position < 1) {
        return nullptr;
    }

    int index = 1;
    Node<T>* currNode = head;

    while (currNode != nullptr && index < position) {

        currNode = currNode->getLink();
        index++;
    }

    // check out of bounds at back
    if (index < position) {
        return nullptr;
    }

    return currNode;
}

template<typename T>
void LinkedList<T>::insertFront(T data) {

    Node<T>* newNode = new Node<T>(data);

    // list is empty
    if (head == nullptr) {
        head = newNode;
        tail = newNode;
    }

    // list is not empty
    else {
        newNode->setLink(head);
        head = newNode;
    }
}

template<typename T>
void LinkedList<T>::insertBack(T data) {

    Node<T>* newNode = new Node<T>(data);

    // list is empty
    if (tail == nullptr) {
        head = newNode;
        tail = newNode;
    }

    // list is not empty
    else {
        tail->setLink(newNode);
        tail = newNode;
    }
}

template<typename T>
void LinkedList<T>::insertPosition(T data, int position) {

    // position less than or equal to front
    if (position <= 1) {
        insertFront(data);
        return;
    }

    // traverse to node at previous position
    Node<T>* prevNode = traverse(position - 1);

    // position greater than or equal to back
    if (prevNode == nullptr || prevNode->getLink() == nullptr) { //! ORDER MATTERS! WHY?
        insertBack(data);
    }

    else {
        Node<T>* newNode = new Node<T>(data, prevNode->getLink());
        prevNode->setLink(newNode);
    }
}

template<typename T>
void LinkedList<T>::deleteFront() {

    // list is empty
    if (head == nullptr) {
        return;
    }

    // list is not empty
    Node<T>* temp = head;

    head = head->getLink();
    delete temp;

}

template<typename T>
void LinkedList<T>::deleteBack() {

    // list is empty
    if (tail == nullptr) {
        return;
    }

    // list has one node
    if (head->getLink() == nullptr) {
        delete head;
        head = nullptr;
        tail = nullptr;
        return;
    }

    // list has more than one node
    Node<T>* prevNode = nullptr;
    Node<T>* currNode = head;

    while (currNode->getLink() != nullptr) {

        prevNode = currNode;
        currNode = currNode->getLink();
    }

    tail = prevNode;
    prevNode->setLink(nullptr);
    delete currNode;

}

template<typename T>
void LinkedList<T>::deletePosition(int position) {

    // position less than or equal to front
    if (position <= 1) {
        deleteFront();
        return;
    }

    // traverse to node at previous position
    Node<T>* prevNode = traverse(position - 1);

    // position greater than or equal to back
    if (prevNode == nullptr || prevNode->getLink() == nullptr) { //! ORDER MATTERS! WHY?
        deleteBack();
    }

    else {
        Node<T>* temp = prevNode->getLink();
        prevNode->setLink(prevNode->getLink()->getLink()); //! go over prevNode = newNode vs prevNode->setLink(newNode)
        delete temp;
    }
}

template<typename T>
T LinkedList<T>::getData(int position) {

    // position less than front
    if (position < 1) {

        return 0;
    }

    // traverse to node at position
    Node<T>* currNode = traverse(position);

    // position greater than back
    if (currNode == nullptr) { 
        return 0;
    }

    else {
        
        return currNode->getData();
    }

}

template<typename T>
int LinkedList<T>::getPosition(T data) {

    // traverse
    Node<T>* currNode = head;
    int index = 1;
    while (head != nullptr) {

        if (currNode->getData() == data) {
            return index;
        }

        currNode = currNode->getLink();
        index++;
    }

    return 0; //! not sure why but this is causing segmentation fault
}

template<typename T>
void LinkedList<T>::print() {

    Node<T>* currNode = head;
    while (currNode != nullptr) {

        std::cout << "[" << currNode->getData() << "]";
        currNode = currNode->getLink(); 
    }

    std::cout << std::endl;

}


#endif