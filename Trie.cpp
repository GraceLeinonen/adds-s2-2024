#include "Trie.h"

Trie::Trie() {
    root = new Node("");
}

Node* Trie::traverseToNode(std::string sequence, std::string& traversedSequence, std::vector<std::string>& parentSequences) {

    // start at root
    Node* currNode = root;

    // loop through each character of sequence
    for (char& c : sequence) {

        // convert character to string
        std::string data(1,c);

        // set child to the node containing the data; if it cannot be found, child will be set to end()
        auto child = currNode->getChildMap().find(data);

        // if you cannot find the node containing the data, it does not exist, therefore you've reached the closet point; break out of loop
        if (child == currNode->getChildMap().end()) {

            break;
        }

        else {

            // otherwise, node contains the data, so add it to the traversed string
            traversedSequence = traversedSequence + data;
            
            // move onto the next child
            currNode = child->second;

            // if you've come across an end flag, store the travelled sequence into the vector of parent sequences
            if (currNode->getIsEndOfSequence()) {

                parentSequences.push_back(traversedSequence);
            }
        }
    }

    return currNode;
}

//* recursive
void Trie::searchFromNodeRef(Node* node, std::string prefix, std::vector<std::string>& sequences) {

    // base case
    // at the end of the sequence, so can put prefix (technically no longer a prefix since we've reached end of the word) into the sequences array
    if (node->getIsEndOfSequence()) {
        sequences.push_back(prefix);
    }


    // recursive case 
    //* set child to the node containing the data - WRONG: need to loop through all children!!!
    //* auto child = node->getChildMap().find(node->getData());

    // loop through all children for that particular node
    for (auto child = node->getChildMap().begin(); child != node->getChildMap().end(); child++) {

        // parameters - move to the next and add character to prefix
        searchFromNodeRef(child->second, (prefix + child->first), sequences);
    }
}

void Trie::insert(std::string sequence) {

    // start at root
    Node* currNode = root;

    // loop through each character of sequence
    for (char c : sequence) {

        // convert character to string
        std::string data(1,c);

        // set child to the node containing the data; if it cannot be found, child will be set to end()
        auto child = currNode->getChildMap().find(data);

        // if you cannot find the node containing the data, it does not exist
        if (child == currNode->getChildMap().end()) {

            // create a new node
            Node* newNode = new Node(data);

            // add the new node to the childMap; key is data, value is newNode
            currNode->getChildMap().insert({data, newNode});

            // there is now a node containing the data, so need to update child
            child = currNode->getChildMap().find(data);
        }

        // move to that child
        currNode = child->second;
    }

    // at the end of the loop, flag that it is the end of the sequence
    currNode->setIsEndOfSequence(true);
}

void Trie::insert(std::string sequence, int number) {

    // start at root
    Node* currNode = root;

    // loop through each character of sequence
    for (char c : sequence) {

        // convert character to string
        std::string data(1,c);

        // set child to the node containing the data; if it cannot be found, child will be set to end()
        auto child = currNode->getChildMap().find(data);

        // if you cannot find the node containing the data, it does not exist
        if (child == currNode->getChildMap().end()) {

            // create a new node
            Node* newNode = new Node(data);

            // add the new node to the childMap; key is data, value is newNode
            currNode->getChildMap().insert({data, newNode});

            // there is now a node containing the data, so need to update child
            child = currNode->getChildMap().find(data);
        }

        // move to that child
        currNode = child->second;
    }

    // at the end of the loop, flag that it is the end of the sequence
    currNode->setIsEndOfSequence(true);

    // for PrefixMatcher (couldn't think of another way to do this); set number equal to number passed in
    currNode->setNumber(number);
}

//* the starting point of the search
void Trie::search(std::string prefix, std::vector<std::string>& sequences) {

    // initialise traversed sequence and vector of parent sequences
    std::string traversedSequence = "";
    std::vector<std::string> parentSequences;

    // traverse to node
    Node* node = traverseToNode(prefix, traversedSequence, parentSequences);


    // once the traversed sequence is equal to the prefix passed in, then can call searchFromNodeRef
    if (prefix == traversedSequence) {

        searchFromNodeRef(node, traversedSequence, sequences);
    }
}


int Trie::findNumberCorrespondingToLongestMatchingPrefix(std::string prefix) {

    // initialise traversed sequence and vector of parent sequences
    std::string traversedSequence = "";
    std::vector<std::string> parentSequences;

    // traverse to node
    Node* node = traverseToNode(prefix, traversedSequence, parentSequences);

    // get the number corresponding to the longest matching prefix
    return node->getNumber();
}