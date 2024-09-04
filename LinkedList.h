#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

class LinkedList {

    private:
    Node* head;

    public:
    
    // default constructor
    LinkedList();

    // constructor that creates a list from a C-array of length len
    LinkedList(int* array, int len);

    // destructor that deletes all nodes from the list
    ~LinkedList();

    // method to insert a new node containing the number newNum into the pos position
    void insertAtPosition(int pos, int newNum);

    // method to remove the node at position pos from the list and delete it
    bool deletePosition(int pos);

    // method that returns pos's node's data member variable
    int get(int pos);

    //  method which searches the list for the first occurence of target ans returns the index of where target is
    int search(int target);

    // method that prints data of all the nodes in the list
    void printList();

};

#endif