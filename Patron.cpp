#include "Patron.h"
#include <algorithm>

Patron::Patron() {
    
    this->patronID = 0;
}

Patron::Patron(int patronID) {

    this->patronID = patronID;
}

Patron::~Patron() {}

void Patron::borrow(int docid) {

    borrowedDocuments.push_back(docid);
}

bool Patron::searchDocuments(int docid) {

    auto it_documents = std::find(borrowedDocuments.begin(), borrowedDocuments.end(), docid);
    
    if (it_documents == borrowedDocuments.end()) {
        return false;
    }
    
    return true;

}

void Patron::returnDocument(int docid) {

    auto it_documents = std::find(borrowedDocuments.begin(), borrowedDocuments.end(), docid);
    borrowedDocuments.erase(it_documents);
    
}

std::vector<int> Patron::getBorrowedDocuments() {

    return borrowedDocuments;
}

int Patron::getPatronID() {

    return this->patronID;
}

bool Patron::operator==(int otherId) {
    return patronID == otherId;
}

