#include "Node.h"

template<class T>
Node<T>::Node() {}

template<class T>
Node<T>::Node(T data) {
    this->data = data;
    this->link = nullptr;
}

template<class T>
Node<T>::Node(T data, Node* link) {
        this->data = data;
        this->link = link;
}

template<class T>
Node<T>::~Node() {}

template<class T>
T Node<T>::getData() { 
    
    return data; 
}

template<class T>
Node<T>* Node<T>::getLink() { 
    
    return link;
}

template<class T>
void Node<T>::setData(T data) {

    this->data = data;
}

template<class T>
void Node<T>::setLink(Node<T>* link) {

    this->link = link;
}
