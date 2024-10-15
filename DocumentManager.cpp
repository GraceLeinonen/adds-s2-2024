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

    // patron iterator
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
    it_patrons->borrow(docid, it_documents->second);

    // set number borrowed
    it_documents->second.setNumberBorrowed(it_documents->second.getNumberBorrowed() + 1);

    // return
    return true;

}
    
void DocumentManager::returnDocument(int docid, int patronID) {

    // get patron
    auto it_patrons = std::find_if(patrons.begin(), patrons.end(), [patronID](Patron& p) { // got this piece of code online 
        return p.getPatronID() == patronID;
    });

    if (it_patrons->getDocument(docid) == it_patrons->getBorrowedDocuments().end()) {

    }

    // get document
    auto it_documents = documents.find(docid);

    // reset number borrowed
    it_documents->second.setNumberBorrowed(it_documents->second.getNumberBorrowed() - 1);

    /*
    // get patron
    auto it_patrons = find(patrons.begin(), patrons.end(), patronID);

    // get document from patron
    Document document = it_patrons->getDocument(docid);

    // insert into document manager
    documents.insert({docid, document});

    // set number borrowed
    document.setNumberBorrowed(document.getNumberBorrowed() - 1);
    */
}