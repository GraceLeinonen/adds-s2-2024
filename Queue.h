#ifndef QUEUE_H
#define QUEUE_H

#include "Node.h"
#include <iostream>

template <typename T>
class Queue {

    private:
    Node<T>* head;
    Node<T>* tail;

    public:
    // constructor and destructors
    Queue();
    ~Queue();

    // functions
    void enqueue(T data);
    void dequeue();
    bool isEmpty();
    void print();

};

template <typename T>
Queue<T>::Queue() {

    head = nullptr;
    tail = nullptr;
}

template <typename T>
Queue<T>::~Queue() {}

template <typename T>
void Queue<T>::enqueue(T data) {

    Node<T>* newNode = new Node<T>(data);

    // queue is empty
    if (isEmpty()) {
        head = newNode; //* NEED THIS!
        tail = newNode;
    }

    // queue is not empty
    else {
        tail->setLink(newNode);
        tail = newNode;

    }
}

template <typename T>
void Queue<T>::dequeue() {

    // queue is empty
    if (isEmpty()) {
        return;
    }

    // queue is not empty
    Node<T>* temp = head;
    head = head->getLink();
    delete temp;

}

template <typename T>
bool Queue<T>::isEmpty() {

    if (head == nullptr) {
        return true;
    }

    else {
        return false;
    }
}

template <typename T>
void Queue<T>::print() {

    Node<T>* currNode = head;
    while (currNode != nullptr) {

        std::cout << "[" << currNode->getData() << "]";
        currNode = currNode->getLink();
    }

    std::cout << std::endl;

}

#endif