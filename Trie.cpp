#include "Trie.h"

Trie::Trie() {
    root = new Node(NULL);
}

Node* Trie::tryNavigateToWord(std::string prefix, std::string& travelledString, std::vector<std::string>& parentWords) {

    Node* curr = root;
    for (char& c: prefix) {

        std::string nodeValue(1,c);
        auto child = curr->getChildMap().find(nodeValue); 

        if (child == curr->getChildMap().end()) {
            break;
        }

        else {
            travelledString += nodeValue;
            curr = child->second;

            if (curr->getIsEndOfWord()) {
                parentWords.push_back(travelledString);
            }
        }
    }

    return curr;
}

void Trie::searchForPrefixFromNodeRef(Node* node, std::string prefix, std::vector<std::string>& result) {

    if (node->getIsEndOfWord()) { 
        result.push_back(prefix);
    }

    for (auto itr = node->getChildMap().begin(); itr != node->getChildMap().end(); itr++) {
        searchForPrefixFromNodeRef(itr->second, (prefix + itr->first), result);
    }

}

void Trie::insertWord(std::string word) {

    Node* curr = root;
    for (char& c : word) {
    
        std::string nodeValue(1,c);
        auto child = curr->getChildMap().find(nodeValue);

        if (child == curr->getChildMap().end()) {

            Node* node = new Node(nodeValue);
            curr->getChildMap().insert({nodeValue, node}); // haven't found letter so insert it
        }

        curr = child->second; // current gets set to child
    }

    curr->setIsEndOfWord(true); // set last letter to end of word

    

}

void Trie::searchForPrefix(std::string prefix, std::vector<std::string>& result) {

    std::string travelledString = "";
    Node* node = tryNavigateToWord(prefix, travelledString, result);

    if (travelledString == prefix) {
        searchForPrefixFromNodeRef(node, prefix, result);
    }

}

std::string Trie::findLongestMatchingPrefix(std::string prefix) {

    std::string travelledString = "";
    std::vector<std::string> parentWords;
    tryNavigateToWord(prefix, travelledString, parentWords);
    return parentWords.back();

}