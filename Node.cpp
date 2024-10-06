#include "Node.h"

Node::Node(std::string data) {
    this->data = data;
    this->isEndOfSequence = false;
    this->number = -1;
}

std::unordered_map<std::string, Node*>& Node::getChildMap() {
    return childMap;
}

std::string Node::getData() {
    return data;
}

void Node::setData(std::string data) {
    this->data = data;
}

bool Node::getIsEndOfSequence() {
    return isEndOfSequence;
}

void Node::setIsEndOfSequence(bool isEndOfWord) {
    this->isEndOfSequence = isEndOfWord;
}

int Node::getNumber() {
    return number;
}

void Node::setNumber(int number) {
    this->number = number;
}