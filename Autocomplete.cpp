#include "Autocomplete.h"

std::vector<std::string> Autocomplete::getSuggestions(std::string partialWord) {

    std::vector<std::string> sequences;

    trie.search(partialWord, sequences);
    return sequences;
}

void Autocomplete::insert(std::string word) {

    trie.insert(word);

}