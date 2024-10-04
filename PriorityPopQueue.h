#ifndef PRIORITYPOPQUEUE_H
#define PRIORITYPOPQUEUE_H

#include "Node.h"
#include <iostream>

template <typename T>
class PriorityPopQueue {

    private:
    Node<T>* head;
    Node<T>* tail;

    public:
    // constructor and destructors
    PriorityPopQueue();
    ~PriorityPopQueue();

    // functions
    void enqueue(T data, int priority);
    void dequeue();
    bool isEmpty();
    void print();

};

template <typename T>
PriorityPopQueue<T>::PriorityPopQueue() {

    head = nullptr;
    tail = nullptr;
}

template <typename T>
PriorityPopQueue<T>::~PriorityPopQueue() {}

template <typename T>
void PriorityPopQueue<T>::enqueue(T data, int priority) {

    Node<T>* newNode = new Node<T>(data, priority);

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
void PriorityPopQueue<T>::dequeue() {

    // queue is empty
    if (isEmpty()) {
        return;
    }

    //! GO OVER THIS!
    // Find the node with the highest priority (highest priority value)
        Node<T>* currentNode = head;
        Node<T>* highestPriorityNode = head;
        Node<T>* previousNode = nullptr;
        Node<T>* prevHighest = nullptr;

        while (currentNode != nullptr) {
            if (currentNode->getPriority() > highestPriorityNode->getPriority()) {
                highestPriorityNode = currentNode;
                prevHighest = previousNode;
            }

            previousNode = currentNode;
            currentNode = currentNode->getLink();
        }

        // Remove the highest priority node
        if (prevHighest == nullptr) { // This means we're removing the head
            head = head->getLink();
        } else {
            prevHighest->setLink(highestPriorityNode->getLink());
        }

        delete highestPriorityNode;
}

template <typename T>
bool PriorityPopQueue<T>::isEmpty() {

    if (head == nullptr) {
        return true;
    }

    else {
        return false;
    }
}

template <typename T>
void PriorityPopQueue<T>::print() {

    Node<T>* currNode = head;
    while (currNode != nullptr) {

        std::cout << "[" << currNode->getData() << "]";
        currNode = currNode->getLink();
    }

    std::cout << std::endl;

}

#endif