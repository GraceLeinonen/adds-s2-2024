#include "DocumentManager.h"
#include <algorithm>

DocumentManager::DocumentManager() {}

DocumentManager::~DocumentManager() {}

void DocumentManager::addDocument(std::string name, int id, int license_limit) {

    documents.insert({id, Document(name, license_limit)});
}

void DocumentManager::addPatron(int patronID) {

    patrons.push_back(Patron(patronID));
}

int DocumentManager::search(std::string name) {

    for (auto it = documents.begin(); it !=documents.end(); it++) {
        if (it->second.getName() == name && it->second.getNumberBorrowed() < it->second.getLicenseLimit()) {
            return it->first;
        }
    }
    
    return 0;
}

bool DocumentManager::borrowDocument(int docid, int patronID) {

    // iterators
    auto it_documents = documents.find(docid);
    auto it_patrons = std::find_if(patrons.begin(), patrons.end(), [patronID](Patron& p) { // got this piece of code online 
        return p.getPatronID() == patronID;
    });

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
    it_patrons->borrow(docid);

    // set number borrowed
    it_documents->second.setNumberBorrowed(it_documents->second.getNumberBorrowed() + 1);

    // return
    return true;

}
    
void DocumentManager::returnDocument(int docid, int patronID) {

    // iterators
    auto it_documents = documents.find(docid);
    auto it_patrons = std::find_if(patrons.begin(), patrons.end(), [patronID](Patron& p) { // got this piece of code online 
        return p.getPatronID() == patronID;
    });

    // check that patron has the document - if patron doesn't have document, return
    if (!it_patrons->searchDocuments(docid)) {
        return;
    }

    // return doccument
    it_patrons->returnDocument(docid);

    // reset number borrowed
    it_documents->second.setNumberBorrowed(it_documents->second.getNumberBorrowed() - 1);

    return;

}