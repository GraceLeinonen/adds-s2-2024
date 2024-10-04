#ifndef TRIE_H
#define TRIE_H

#include <vector>
#include <string>

class Autocomplete {

    private:
    struct Node {

        bool isEndOfWord;
        char data;
        std::vector<Node*> childNodes;
        Node* searchChildNodes(char data);
    };

    Node* root;

    public:
    // constructor and destructor
    Autocomplete();
    ~Autocomplete();

    // functions
    Node* search(Node* currNode, std::string word);
    void insert(std::string word);

    std::vector<std::string> getSuggestions(std::string partialWord);

};

#endif