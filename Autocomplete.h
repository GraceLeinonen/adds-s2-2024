#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H

#include "Trie.h"

class Autocomplete {

    private:
    // Autocomplete class has to use a Trie
    Trie trie;

    public:
    std::vector<std::string> getSuggestions(std::string partialWord); // return the known words that start with partialWord
    void insert(std::string word); // add a word to the known words

};

#endif