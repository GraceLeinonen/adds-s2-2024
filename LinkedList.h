#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"
#include <vector>

template<class T>
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
    void deletePosition();

    // get stuff
    T getData(int position);
    int getPosition(T data);

    // print
    void print();
    

    

};

#endif