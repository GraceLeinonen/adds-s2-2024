#ifndef PREFIXMATCHERNODE_H
#define PREFIXMATCHERNODE_H

#include <unordered_map>
#include <string>

class PrefixMatcherNode {

    private:
    std::string data; 
    int routerNumber; 
    std::unordered_map<std::string, PrefixMatcherNode*> childMap; 

    public:
    PrefixMatcherNode(std::string data); 
    std::unordered_map<std::string, PrefixMatcherNode*>& getChildMap(); 
    std::string getData();
    void setData(std::string data);
    int getRouterNumber(); 
    void setRouterNumber(int routerNumber); 
};

#endif