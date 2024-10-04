#ifndef TRIE_H
#define TRIE_H

#include "Node.h"
#include <vector>

class Trie {

    private:
    Node* root;
    Node* tryNavigateToWord(std::string prefix, std::string& travelledString, std::vector<std::string>& parentWords);
    void searchForPrefixFromNodeRef(Node* node, std::string prefix, std::vector<std::string>& words);

    public:
    Trie();
    void insertWord(std::string word);
    void searchForPrefix(std::string prefix, std::vector<std::string>& result);
    std::string findLongestMatchingPrefix(std::string prefix);
};

#endif