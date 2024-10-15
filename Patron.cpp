#include "Patron.h"

Patron::Patron() {
    
    this->patronID = 0;
}

Patron::Patron(int patronID) {

    this->patronID = patronID;
}

Patron::~Patron() {}

void Patron::borrow(int docid, Document document) {

    borrowedDocuments.insert({docid, document});
}

Document Patron::getDocument(int docid) {

    auto it_documents = borrowedDocuments.find(docid);
    return it_documents->second;

}

std::unordered_map<int, Document> Patron::getBorrowedDocuments() {

    return borrowedDocuments;
}

int Patron::getPatronID() {

    return this->patronID;
}

bool Patron::operator==(int otherId) {
    return patronID == otherId;
}

