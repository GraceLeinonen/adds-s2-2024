#ifndef PREFIXMATCHER_H
#define PREFIXMATCHER_H

#include "Trie.h"
#include "Node.h"
#include <vector>
#include <string>


class PrefixMatcher {

    private:
    Trie trie;

    public:
    int selectRouter(std::string networkAddress); // return the router with the longest matching prefix
    void insert(std::string address, int routerNumber); // add a router address
};

#endif