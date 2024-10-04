#include "Node.h"

Node* Autocomplete::Node::searchChildNodes(char data) {

    for (int i = 0; i < childNodes.size(); i++) {
        if (childNodes[i]->data == data) {
            return childNodes[i];
        }
    }
    
    return nullptr;

    
}