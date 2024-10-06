#ifndef TRIE_H
#define TRIE_H

#include "Node.h"
#include <vector>

class Trie {

    private:

    // starting point of trie
    Node* root;

    // navigates to the closest version of word (prefix) and returns the node that it arrives to, updates the travelled 
    // string and stores a vector of the parent words it passes through
    Node* tryNavigateToPrefix(std::string prefix, std::string& travelledString, std::vector<std::string>& parentWords);

    // at this point, we're at the node from where we want to start searching for possible words - we recursively call
    // this function until we find all end of words
    void searchForWordsFromNodeRef(Node* node, std::string prefix, std::vector<std::string>& words);

    public:
    Trie();

    // inserts a word into the trie by first checking whether the characters already exists in that specific order
    // if it does, move onto next character
    void insertWord(std::string word);
    void insertWord(std::string word, int number);

    // the starting point of the search - first defines travelled string to an empty string, then tries to navigate
    // to prefix - once the travelled string equals the prefix, we're trying to find the completed words below, so 
    // call searchForPrefixFromNodeRef
    void searchForWords(std::string prefix, std::vector<std::string>& result);

    // we try to navigate to word, once we reach a point where we can't continue, we want to return the longest,
    // matching word, so we return the last item pushed into parentWords
    int findLongestMatchingPrefix(std::string prefix);
};

#endif