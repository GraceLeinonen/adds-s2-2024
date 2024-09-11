#ifndef NODE_H
#define NODE_H

template<typename T>
class Node {

    private:
    T data;
    Node* link;

    public:
    // constructors and destructor
    Node();
    Node(T data);
    Node(T data, Node* link);
    ~Node();

    // getters and setters
    T getData();
    Node* getLink();
    void setData(T data);
    void setLink(Node* link);

};

template<typename T>
Node<T>::Node() {}

template<typename T>
Node<T>::Node(T data) {
    this->data = data;
    this->link = nullptr;
}

template<typename T>
Node<T>::Node(T data, Node* link) {
        this->data = data;
        this->link = link;
}

template<typename T>
Node<T>::~Node() {}

template<typename T>
T Node<T>::getData() { 
    
    return data; 
}

template<typename T>
Node<T>* Node<T>::getLink() { 
    
    return link;
}

template<typename T>
void Node<T>::setData(T data) {

    this->data = data;
}

template<typename T>
void Node<T>::setLink(Node<T>* link) {

    this->link = link;
}

#endif