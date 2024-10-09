#ifndef BINARYSEARCHTREE_H
#define BINARYSEARCHTREE_H

#include "Node.h"

template <typename T>
class BinarySearchTree {

    private:
    Node<T>* root;

    public:
    BinarySearchTree();
    ~BinarySearchTree();

    bool search(T target);
    void insert();
    void remove();

};

template <typename T>
BinarySearchTree<T>::BinarySearchTree() {
    this->root = nullptr;
}

template <typename T>
BinarySearchTree<T>::~BinarySearchTree() {}

template <typename T>
bool BinarySearchTree<T>::search(T target) {

    // tree empty
    if (root == nullptr) {
        return false;
    }

    // tree not empty
    Node<T>* currNode;
    while (currNode != nullptr) {

        if (currNode == target) {
            return true;
        }

        if (currNode < target) {
            search(currNode->getUpper());
        }

        if (currNode > target) {
            search(currNode->getLower());
        }



    }
}

template <typename T>
void BinarySearchTree<T>::insert() {}

template <typename T>
void BinarySearchTree<T>::remove() {}

#endif