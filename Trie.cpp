#include "Trie.h"
#include <iostream>

Trie::Trie() {
    root = new Node("");
}

Node* Trie::tryNavigateToPrefix(std::string prefix, std::string& travelledString, std::vector<std::string>& parentWords) {

    // start from the root
    Node* curr = root;

    // for each character in the prefix
    for (char& c: prefix) {

        // convert the character to a string
        std::string nodeValue(1,c);

        // try to find the child node with data which is equal to the character
        auto child = curr->getChildMap().find(nodeValue); 

        // if you reach the end of the child map, you have not found the character so cannot continue traversing
        if (child == curr->getChildMap().end()) {

            // break out of the for loop
            break;
        }

        // if you haven't reached the end of the child map, you found the character!
        else {

            // append the character to the travelled string
            travelledString += nodeValue;

            // set current node to the child node (so now moving from this child forward)
            curr = child->second;

            // if the current node is the end of a word
            if (curr->getIsEndOfWord()) {

                // store word in parentWords
                parentWords.push_back(travelledString);
            }
        }
    }

    // return current node
    return curr;
}

void Trie::searchForWordsFromNodeRef(Node* node, std::string prefix, std::vector<std::string>& result) {

    // base case
    // if node is end of word
    if (node->getIsEndOfWord()) {

        // push into results vector
        result.push_back(prefix);
    }

    // recursive case
    // loop through every child for that particular node
    for (auto itr = node->getChildMap().begin(); itr != node->getChildMap().end(); itr++) {

        //  recursively call function
        searchForWordsFromNodeRef(itr->second, (prefix + itr->first), result);
    }
}

void Trie::insertWord(std::string word) {

    // start from the root
    Node* curr = root;

    // for each character in the prefix
    for (char& c : word) {
    
        // convert the character to a string
        std::string nodeValue(1,c);

        // try to find the child node with data which is equal to the character
        auto child = curr->getChildMap().find(nodeValue);

        // if you reach the end of the child map, you have not found the character so cannot continue traversing
        if (child == curr->getChildMap().end()) {

            // create a new node
            Node* node = new Node(nodeValue);

            // insert the new node into the current map, with the nodeValue as the key
            curr->getChildMap().insert({nodeValue, node});

            // iterator was previous end(), since we've added something into the child map, iterator now has a value
            child = curr->getChildMap().find(nodeValue); 
        }

        // set current node to the child node (so now moving from this child forward)
        curr = child->second;
    }

    // once you're out of the for loop, set last letter to end of word
    curr->setIsEndOfWord(true);

}

void Trie::insertWord(std::string word, int number) {

    // start from the root
    Node* curr = root;

    // for each character in the prefix
    for (char& c : word) {
    
        // convert the character to a string
        std::string nodeValue(1,c);

        // try to find the child node with data which is equal to the character
        auto child = curr->getChildMap().find(nodeValue);

        // if you reach the end of the child map, you have not found the character so cannot continue traversing
        if (child == curr->getChildMap().end()) {

            // create a new node
            Node* node = new Node(nodeValue);

            // insert the new node into the current map, with the nodeValue as the key
            curr->getChildMap().insert({nodeValue, node});

            // iterator was previous end(), since we've added something into the child map, iterator now has a value
            child = curr->getChildMap().find(nodeValue); 
        }

        // set current node to the child node (so now moving from this child forward)
        curr = child->second;
    }

    // once you're out of the for loop, set last letter to end of word
    curr->setIsEndOfWord(true);
    curr->setNumber(number);

}

void Trie::searchForWords(std::string prefix, std::vector<std::string>& result) {

    // initialise the travelled string to be an empty string
    std::string travelledString = "";

    // navigate to the node
    Node* node = tryNavigateToPrefix(prefix, travelledString, result);

    // if travelled string equals the prefix
    if (travelledString == prefix) {

        // search for all the words below and put into result
        searchForWordsFromNodeRef(node, prefix, result);
    }

    // if travelled string does not equal the prefix, no words exist, so result vector is empty

}

int Trie::findLongestMatchingPrefix(std::string prefix) {

    // initialise the travelled string to be an empty string
    std::string travelledString = "";

    // create a vector for the parent words
    std::vector<std::string> parentWords;

    // navigate to node
    Node* node = tryNavigateToPrefix(prefix, travelledString, parentWords);

    // return the number corresponding to longest matching prefix
    return node->getNumber();

}