#include "Autocomplete.h"

Autocomplete::Autocomplete() {}

std::vector<std::string> Autocomplete::getSuggestions(std::string partialWord) {

    std::vector<std::string> words;
    trie.searchForWords(partialWord, words);
    return words;
}

void Autocomplete::insert(std::string word) {

    trie.insertWord(word);
}