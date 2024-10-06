#ifndef NODE_H
#define NODE_H

#include <unordered_map>
#include <string>

class Node {

    private:
    std::string data;
    bool isEndOfSequence;
    int number; // for the PrefixFinder class; set to a number if it is the end of sequence, otherwise set to -1
    std::unordered_map<std::string, Node*> childMap; 

    public:
    Node(std::string data);
    std::unordered_map<std::string, Node*>& getChildMap();
    std::string getData();
    void setData(std::string data);
    bool getIsEndOfSequence(); 
    void setIsEndOfSequence(bool isEndOfWord);
    int getNumber();
    void setNumber(int number);
};

#endif