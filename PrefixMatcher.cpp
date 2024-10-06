#include "PrefixMatcher.h"

int PrefixMatcher::selectRouter(std::string networkAddress) {

    return trie.findNumberCorrespondingToLongestMatchingPrefix(networkAddress);


}
void PrefixMatcher::insert(std::string address, int routerNumber) {

    trie.insert(address, routerNumber);
}