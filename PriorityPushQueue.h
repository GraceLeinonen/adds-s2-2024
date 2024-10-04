#ifndef PRIORITYPUSHQUEUE_H
#define PRIORITYPUSHQUEUE_H

#include "Node.h"
#include <iostream>

template <typename T>
class PriorityPushQueue {

    private:
    Node<T>* head;

    public:
    // constructor and destructors
    PriorityPushQueue();
    ~PriorityPushQueue();

    // functions
    void enqueue(T data, int priority);
    void dequeue();
    bool isEmpty();
    void print();

};

template <typename T>
PriorityPushQueue<T>::PriorityPushQueue() {

    head = nullptr;
}

template <typename T>
PriorityPushQueue<T>::~PriorityPushQueue() {}

template <typename T>
void PriorityPushQueue<T>::enqueue(T data, int priority) {

    Node<T>* newNode = new Node<T>(data, priority);

    // queue is empty or newNode has higher priority than the head, insert at front
    if (isEmpty() || head->getPriority() < priority) {
        newNode->setLink(head); //! WHY?
        head = newNode;
        return; //* do not forget this
    }

    // traverse to position
    Node<T>* currNode = head;
    while (currNode->getLink() != nullptr && currNode->getLink()->getPriority() >= priority) { //! why the getLink()?
        currNode = currNode->getLink();
    }

    // insert at end
    if (currNode->getLink() == nullptr) {
        currNode->setLink(newNode);
    } 

    // insert in middle
    else {
        newNode->setLink(currNode->getLink());
        currNode->setLink(newNode);
    }
    
}

template <typename T>
void PriorityPushQueue<T>::dequeue() {

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
bool PriorityPushQueue<T>::isEmpty() {

    if (head == nullptr) {
        return true;
    }

    else {
        return false;
    }
}

template <typename T>
void PriorityPushQueue<T>::print() {

    Node<T>* currNode = head;
    while (currNode != nullptr) {

        std::cout << "[" << currNode->getData() << "]";
        currNode = currNode->getLink();
    }

    std::cout << std::endl;

}

#endif