#include "Node.h"

Node::Node(int data, Node* link) {
    this->data = data;
    this->link = link;
}

int Node::getData() {

    return this->data;
}
Node* Node::getLink() {

    return this->link;
}

void Node::setData(int data) {
    this->data = data;
}

void Node::setLink(Node* link) {
    this->link = link;
}