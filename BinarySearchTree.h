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
    Node<T>* insert(Node<T>* node, T target);
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
    Node<T>* currNode = root;
    while (currNode != nullptr) {

        if (currNode->getData() == target) {
            return true;
        }

        if (currNode>getData() < target) {
            search(currNode->getUpper());
        }

        if (currNode>getData() > target) {
            search(currNode->getLower());
        }


    }
}

template <typename T>
Node<T>* BinarySearchTree<T>::insert(Node<T>* currNode, T target) {

    //* tree empty
    if (currNode == nullptr) {
        return new Node(target);
    }

    //* tree not empty
    // insert to right subtree
    if (currNode>getData() < target) {
            currNode->getUpper() = insert(currNode->getUpper(), target);
    }

    // insert to right subtree
    else if (currNode>getData() > target) {
            currNode->getUpper() = insert(currNode->getLower(), target);
    }

    return currNode;

}

template <typename T>
void BinarySearchTree<T>::remove() {}

#endif