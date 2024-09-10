#include "LinkedList.h"

template<class T>
LinkedList<T>::LinkedList() {

    head = nullptr;
    tail = nullptr:
}

template<class T>
LinkedList<T>::LinkedList(T* array, int size) {

    head = nullptr;
    tail = nullptr:
}

template<class T>
LinkedList<T>::LinkedList(std::vector<T> array, int size) {

    head = nullptr;
    tail = nullptr:
}

template<class T>
LinkedList<T>::~LinkedList() {}

template<class T>
Node<T>* LinkedList<T>::traverse(int position) {

    int index = 1;
    Node<T>* currNode = head;

    while (currNode != nullptr && index < position) {

        currNode = currNode->link;
        index++;
    }

    return currNode;
}

template<class T>
void LinkedList<T>::insertFront(T data) {

    Node<T>* newNode = new Node<T>(T data);
    head = newNode;

}

template<class T>
void LinkedList<T>::insertBack(T data) {

    Node<T>* newNode = new Node<T>(T data);

    if (tail == nullptr) {
        head = newNode;
        tail = newNode;
    }

    else {
        tail->setLink(newNode);
        tail = newNode;
    }
}

template<class T>
void LinkedList<T>::insertPosition(T data, int position) {}

template<class T>
void LinkedList<T>::deleteFront() {}

template<class T>
void LinkedList<T>::deleteBack() {}

template<class T>
void LinkedList<T>::deletePosition() {}

template<class T>
T LinkedList<T>::getData(int position) {}

template<class T>
int LinkedList<T>::getPosition(T data) {}

template<class T>
void LinkedList<T>::print() {}

