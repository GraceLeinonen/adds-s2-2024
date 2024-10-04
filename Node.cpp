#include "Node.h"

Node::Node(std::string data) {

    this->data = data;
    this->isEndOfWord = false;
    
}

std::unordered_map<std::string, Node*> Node::getChildMap() {

    return childMap;
}

bool Node::getIsEndOfWord() {

    return isEndOfWord;
}

void Node::setIsEndOfWord(bool isEndOfWord) {

    this->isEndOfWord = isEndOfWord;
}