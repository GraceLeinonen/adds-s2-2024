#ifndef NODE_H
#define NODE_H

template <typename T>
class Node {

    private:
    T data;
    Node* lower;
    Node* higher;
    Node* parent;

    public:
    Node();
    ~Node();
    T getData();
    void setData(T data);
    Node* getLower();
    void setLower(Node* lower);
    Node* getUpper();
    void setUpper(Node* upper);
    Node* getParent();
    void setParent(Node* parent);
};

template <typename T>
Node<T>::Node() {}

template <typename T>
Node<T>::~Node() {}

template <typename T>
T Node<T>::getData() {
    return this->data;
}

template <typename T>
void Node<T>::setData(T data) {
    this->data = data;
}

template <typename T>
Node<T>* Node<T>::getLower() {
    return this->lower;
}

template <typename T>
void Node<T>::setLower(Node<T>* lower) {
    this->lower = lower;
}

template <typename T>
Node<T>* Node<T>::getUpper() {
    return this->upper;
}

template <typename T>
void Node<T>::setUpper(Node<T>* upper) {
    this->upper = upper;
}

template <typename T>
Node<T>* Node<T>::getParent() {
    return this->parent;
}

template <typename T>
void Node<T>::setParent(Node<T>* parent) {
    this->parent = parent;
}








#endif