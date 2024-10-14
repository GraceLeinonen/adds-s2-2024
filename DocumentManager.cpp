#include "DocumentManager.h"
#include <algorithm>

void DocumentManager::addDocument(std::string name, int id, int license_limit) {

    documents.insert({id, Document(name, license_limit)});

}

void DocumentManager::addPatron(int patronID) {

    patrons.push_back(patronID);
}

int DocumentManager::search(std::string name) {

    for (auto it = documents.begin(); it !=documents.end(); it++) {
        if (it->second.getName() == name) {
            return it->first;
        }
    }
    
    return 0;
}
bool DocumentManager::borrowDocument(int docid, int patronID) {

    // patron iterator
    auto it_documents = documents.find(docid);
    auto it_patrons = find(patrons.begin(), patrons.end(), patronID);

    // document not found
    if (it_documents == documents.end()) {
        return false;
    }

    // number borrowed greater than license limit
    if (it_documents->second.getNumberBorrowed() >= it_documents->second.getLicenseLimit()) {
        return false;
    }

    // patron not found
    if (it_patrons == patrons.end()) {
        return false;
    }

    // document can be borrowed
    //! call borrow function?
    return true;

}
    
void DocumentManager::returnDocument(int docid, int patronID) {}