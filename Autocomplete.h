#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H

#include "Trie.h"
#include "Node.h"
#include <vector>
#include <string>

class Autocomplete {

    private:
    Trie trie;
    
    public:
    Autocomplete();
    std::vector<std::string> getSuggestions(std::string partialWord);  // return the known words that start with partialWord
    void insert(std::string word); // add a word to the known words
   
};

#endif