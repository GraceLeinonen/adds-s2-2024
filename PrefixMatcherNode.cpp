#include "PrefixMatcherNode.h"

PrefixMatcherNode::PrefixMatcherNode(std::string data) {
    this->data = data;
    this->routerNumber = 0;
}

std::unordered_map<std::string, PrefixMatcherNode*>& PrefixMatcherNode::getChildMap() {
    return childMap;
}

std::string PrefixMatcherNode::getData() {
    return data;
}

void PrefixMatcherNode::setData(std::string data) {
    this->data = data;
}

int PrefixMatcherNode::getRouterNumber() {
    return routerNumber;
}

void PrefixMatcherNode::setRouterNumber(int routerNumber) {
    this->routerNumber = routerNumber;
}