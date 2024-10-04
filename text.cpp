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
    void searchAllWordsForGivenPrefixFromNodeRef(Node* node, std::string prefix, std::vector<std::string>& words);

    public:
    Trie(): root(new Node)) {};
    void insertWord(std::string word);

    FOR AUTOCOMPLETE
    void searchAllWordsForPrefix(std::string prefix, std::vector<std::string>& result);
    std::string findLongestMatchingPrefixWordForString(std::string prefix);

};

Node* tryNavigateToWord(std::string prefix, std::string& travelledString, std::vector<std::string>& parentWords) {

    Node* curr = root;
    for (char& c: prefix) {

        std::string nodeValue(1,c);

        auto child = curr->childMap.find(nodeValue); //! auto = std::unordered_map<std::string,Node*>::iterator

        if (child == curr->childMap.end()) {
            break;
        }

        else {

            travelledString += nodeValue;
            curr = child->second;

            if (curr->isEndOfWord) {
                parentWords.push_back(travelledString)
            }
        
        }

    }

    return curr;
}

void insertWord(std::string word) {

    Node* curr = root;
    for (char& c : word) {
    
        std::string = nodeValue(1,c);
        auto child = curr->childMap.find(nodeValue);

        if (child == curr->childnMap.end()) {
        
            curr->childrenMap.insert({nodeValue, newNode()}) //! haven't found letter so insert it
        }

        curr = child->second; //! current gets set to child
    }

    curr->isEndOfWord = true; //! set last letter to end of word

}

void searchAllWordsForGivenPrefixFromNodeRef(Node* node, std::string prefix, std::vector<std::string>& result) {

    if (node->isEndOfWord) { 

        result.push_back(prefix);
    }

    for (auto itr = node->childrenMap.begin(); itr != node->childrenMap.end(); itr++) {

        searchAllWordsForGivenPrefixFromNodeRef(itr->second, (prefix + itr->first), result);
    }
}

STARTING POINT FOR SEARCH
void searchAllWordsForPrefix(std::string prefix, std::vector<std::string>& result) {

    std::string travelledString = "";
    Node* node = tryNavigateToWord(prefix, travelledString, result);

    if (travelledString == prefix) {
        searchAllWordsForGivenPrefixFromNodeRef(node, prefix, result)
    }
}

PREFIX MATCHER
std::string findLongestMatchingPrefixWord(std::string word) {

    std::string travelledString = "";
    std::vector<std::string> parentWords;
    tryNavigateToWord(word, travelledString, parentWords);
    return parentWords.back();
}
*/