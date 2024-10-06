#include "PrefixMatcher.h"
#include "Trie.h"

int PrefixMatcher::selectRouter(std::string networkAddress) {

    int routerNumber = trie.findLongestMatchingPrefix(networkAddress);
    return routerNumber;
    

}

void PrefixMatcher::insert(std::string address, int routerNumber) {

    trie.insertWord(address, routerNumber);

}

