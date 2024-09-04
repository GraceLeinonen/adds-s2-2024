#include "LinkedList.h"
#include <iostream>

LinkedList::LinkedList() {
    
    head = nullptr; //! head initially points to nullptr as list is empty
}

LinkedList::~LinkedList() {
    
    while (head != nullptr) {
        
        deleteFromFront();
    }
}

void LinkedList::printList() {
    
    Node* currNode = head; //! start at head

    while (currNode != nullptr) {

        std::cout << currNode->data <<std::endl; //! get out the data from where the current node is pointing to
        currNode = currNode->link; //! move to the next node
    }

    std::cout << std::endl;
}

Node* LinkedList::traverse(unsigned int index) {

    unsigned int position = 0; //! head has position 0
    Node* currNode = head; //! start at head

    while (currNode != nullptr && position < index) {
        
        currNode = currNode->link; //! move to next node
        position++; //! update position
    }

    //! once position = index, you will get the node which points to the node whose information you want
    return currNode;
}

void LinkedList::insertAtPosition(int item, unsigned int index) {

    // if adding in front of the current head (including if the list is empty)
    if (index == 0) {

        head = new Node(item, head); //! head contains the address of a node, which contains an item and a link to the previous first element (i.e. the origial head)
        return;
    }

    // if inserting between two nodes; i.e. [A, C] -> [A, B, C]
    Node* prevNode = traverse(index - 1);

    // if inserting out of bounds, abort
    if (prevNode == nullptr) {

        return;
    }

    Node* newNode = new Node(item, prevNode->link); //! create a new node, which contains an item and the link that the previous node was pointing to
    prevNode->link = newNode; //! the previous nodes link will now be the new node (IMAGINE A TRIANGLE)

}

void LinkedList::deleteFromFront() {

    if (head == nullptr) {

        return;
    }

    Node* temp = head; //! create a temporary node pointer which points the same node that head points to, since we need to store the address of the node we want to delete
    head = head->link; //! head is now pointing to the next node
    delete temp; //! can delete node using temporary node pointer
}

