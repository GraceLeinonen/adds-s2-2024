#ifndef STACK_H
#define STACK_H

#include "Node.h"
#include <iostream>

template<typename T>
class Stack {

    private:
    Node<T>* top;

    public:
    // constructors and destructors
    Stack();
    ~Stack();

    void push(T data);
    T pop();
    bool isEmpty();
    void print();

};

template<typename T>
Stack<T>::Stack() {

    top = nullptr;
}

template<typename T>
Stack<T>::~Stack() {}

template<typename T>
void Stack<T>::push(T data) {

    Node<T>* newNode = new Node<T>(data);

    // list is empty
    if (top == nullptr) {
        top = newNode;
    }

    // list is not empty
    else {
        newNode->setLink(top);
        top = newNode;
    }

}

template<typename T>
T Stack<T>::pop() {

    // list is empty
    if (top == nullptr) {
        return T();
    }

    // list is not empty
    Node<T>* temp = top;

    top = top->getLink();
    delete temp;
    return data;

}

template<typename T>
bool Stack<T>::isEmpty() {

    if (top == nullptr) {
        return true;
    }

    else {
        return false;
    }
}

template<typename T>
void Stack<T>::print() {

    Node<T>* currNode = top;
    while (currNode != nullptr) {

        std::cout << "[" << currNode->getData() << "]";
        currNode = currNode->getLink(); 
    }

    std::cout << std::endl;

}


#endif
