#ifndef NODE_H
#define NODE_H

#include <unordered_map>
#include <string>

class Node {

    private:
    std::string data;
    bool isEndOfWord;
    int number;
    std::unordered_map<std::string, Node*> childMap; 

    public:
    Node(std::string data);
    std::unordered_map<std::string, Node*>& getChildMap();
    std::string getData();
    void setData(std::string data);
    bool getIsEndOfWord(); 
    void setIsEndOfWord(bool isEndOfWord);
    int getNumber();
    void setNumber(int number);
};

#endif