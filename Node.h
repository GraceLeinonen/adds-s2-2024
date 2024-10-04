#ifndef NODE_H
#define NODE_H

#include <unordered_map>
#include <string>

class Node {

    std::string data;
    bool isEndOfWord;
    std::unordered_map<std::string, Node*> childMap;
    Node* searchChildNodes(char data);
};


#endif