#ifndef NODE_H
#define NODE_H

#include <unordered_map>
#include <string>

class Node {

    private:
    std::string data;
    bool isEndOfWord;
    std::unordered_map<std::string, Node*> childMap;

    public:
    Node(std::string data);
    Node* searchChildNodes(char data);
    std::unordered_map<std::string, Node*> getChildMap();
    bool getIsEndOfWord();
    void setIsEndOfWord(bool isEndOfWord);
};

#endif