#include "Autocomplete.h"

Autocomplete::Autocomplete() {

    root = nullptr;
}

Autocomplete::~Autocomplete() {}

Autocomplete::Node* Autocomplete::search(Node* currNode, std::string word) {

    // base case
    if (currNode == nullptr) {
        return currNode;
    }

    for (int i = 0; i < word.size(); i++) {

            // search the child nodes of the current node for the letter
            currNode = currNode->searchChildNodes(word[i]);
}

void Autocomplete::insert(std::string word) {

    // start at root
    Node* currNode = root;

    for (int i = 0; i < word.size(); i++) {

            // search the child nodes of the current node for the letter
            currNode = currNode->searchChildNodes(word[i]);

            // if currNode not equal nullptr, character exists, move to the next child nodes
            if (currNode != nullptr) {

            }



            currNode = currNode->childNodes
        }

        // create new node
        Node* newNode = new Node();
        newNode->data = word[i];

        // trie is empty
        if (root == nullptr) {

            root = newNode;
        }
    }

    // trie is empty
    newNode->data = word;

}
std::vector<std::string> Autocomplete::getSuggestions(std::string partialWord) {

}




