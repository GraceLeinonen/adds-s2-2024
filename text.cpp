/*
class Node {
    std::string data;
    bool isEndOfWord;
    std::unordered_map<std::string, Node*> childMap;
    Node* searchChildNodes(char data);
};


class Trie {

    private:
    Node* root;
    Node* tryNavigateToWord(std::string prefix, std::string& travelledString, std::vector<std::string>& parentWords); // pass by reference to return more than one thing
    void searchAllWordsForGivenPrefixFromNodeRef(Node* node, std::string prefix), std::vector<std::string>& words);

    public:
    Trie(): root(new Node)) {};
    void insertWord(std::string word);

    FOR AUTOCOMPLETE
    void searchAllChildrenForAGivenPrefix(std::string prefix, std::vector<std::string>& result);
    std::string findLongestMatchingPrefixWordForString(std::string prefix);

};

Node* tryNavigateToWord(std::string prefix, std::string& travelledString, std::vector<std::string>& parentWords) {

    Node* curr = root;
    for (char& c: prefix) {

        std::string nodeValue(1,c);

        auto child curr->childrenMap.find(nodeValue); //! auto = std::unordered_map<std::string,Node*>::iterator

        if (child == curr->childrenMap.end()) {

            break;
        }

        else {

            travelledUntil += nodeValue;
            curr = child->second;

            if (curr->isEndOfWord) {

                parentWords.push_back(travelledUntil)
            }
        
        }

    }

    return curr;
}

void insertWord(std::string word) {

    Node* curr = root;

    for (char& c : word) {
    
        std::string = nodeValue(1,c);
        auto child = curr->childrenMap.find(nodeValue);

        if (child == curr->childrenMap.end()) {
        
            curr->childrenMap.insert({nodeValue, newNode()})
        }

        curr = child->second;
    }

    curr->kisEndOfWord = true;

}

void searchAllWordsForGivenPrefixFromNodeRef(Node* node, std::string prefix), std::vector<std::string>& words) {

    if (node->isWordFlag) { 

        result.push_back(prefix);
    }

    for (auto itr = node->childrenMap.begin(); itr !- node->childrenMap.end(); itr++) {

        searchAllWordsForGivenPrefixFromNodeRef(itr->second, (prefix + itr->first), result);
    }
}

void searchAllWordsForPrefix(std::strong prefix, std::vector<std::string> result) {

    std::string traversedUntil: " ";
    std::vector<std::string> parentWords;
    Node* node = tryNavigateToWord(prefix, travelledUntil, result);

    if (travelledUntil == prefix) {

        searchAllWordsForGivenPrefixFromNodeRef(node, prefix, result)
    }
}

std::string findLongestMatchingPrefixWord(std::string word) {

    std::string travelledUntil = "";
    std::vector<std::string> parentWords;
    tryNavigateToWord(word, travelledUntil, parentWord);
    return parentWords.back();
}


*/