#ifndef TRIE_H
#define TRIE_H

#include "Node.h"
#include <vector>

// making an Abstract Data Type which I can use for the Autocomplete and PrefixMatcher classes
class Trie {

    private:
    Node* root;

    // traverse to the node closet to the prefix passed in
    Node* traverseToNode(std::string sequence, std::string& traversedSequence, std::vector<std::string>& parentSequences);

    // search for sequence from a particular node
    void searchFromNodeRef(Node* node, std::string prefix, std::vector<std::string>& sequences);

    public:
    Trie();

    // insert sequence
    void insert(std::string sequence);

    // insert sequence and update number
    void insert(std::string sequence, int number);

    // search for sequence from root
    void search(std::string prefix, std::vector<std::string>& sequences);

    // find number corresponding to longest matching prefix
    int findNumberCorrespondingToLongestMatchingPrefix(std::string prefix);
};

#endif