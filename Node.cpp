#include "Node.h"

Node::Node(std::string data) {

    this->data = data;
    this->isEndOfWord = false;
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

bool Node::getIsEndOfWord() {

    return isEndOfWord;
}

void Node::setIsEndOfWord(bool isEndOfWord) {

    this->isEndOfWord = isEndOfWord;
}

int Node::getNumber() {
    return number;
}
void Node::setNumber(int number) {
    this->number = number;
}