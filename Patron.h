#ifndef PATRON_H
#define PATRON_H

#include <unordered_map>
#include "Document.h"

class Patron {

    private:
    int patronID;
    std::unordered_map<int, Document> borrowedDocuments;

    public:
    Patron();
    Patron(int patronID);
    ~Patron();

    void borrow(int docid, Document document);
    Document getDocument(int docid);

};

#endif