#ifndef NODE_H
#define NODE_H

template <typename T>
class Node {

    private:
    T data;
    int priority;
    Node* link;

    public:
    // constructors and destructor
    Node();
    Node(T data);
    Node(T data, int priority);
    Node(T data, int priority, Node* link);
    ~Node();

    // getters and setters
    T getData();
    int getPriority();
    Node* getLink();
    void setData(T data);
    void setPriority(int priority);
    void setLink(Node* link);
    
};

template <typename T>
Node<T>::Node() {}

template <typename T>
Node<T>::Node(T data) {
    this->data = data;
    this->priority = 0;
    this->link = nullptr;
    
}

template <typename T>
Node<T>::Node(T data, int priority) {
    this->data = data;
    this->priority = priority;
    this->link = nullptr;
}

template <typename T>
Node<T>::Node(T data, int priority, Node<T>* link) {
    this->data = data;
    this->priority = priority;
    this->link = link;
}

template <typename T>
Node<T>::~Node() {}

template <typename T>
T Node<T>::getData() {
    return data;
}

template <typename T>
int Node<T>::getPriority() {
    return priority;
}

template <typename T>
Node<T>* Node<T>::getLink() {
    return link;
}

template <typename T>
void Node<T>::setPriority(int priority) {
    this->priority = priority;
}

template <typename T>
void Node<T>::setData(T data) {
    this->data = data;
}

template <typename T>
void Node<T>::setLink(Node<T>* link) {
    this->link = link;
}


#endif