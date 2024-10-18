#ifndef PATRON_H
#define PATRON_H

#include <vector>
#include "Document.h"

class Patron {

    private:
    int patronID;
    std::vector<int> borrowedDocuments;

    public:
    Patron();
    Patron(int patronID);
    ~Patron();

    void borrow(int docid);
    void returnDocument(int docid);
    bool searchDocuments(int docid);
    std::vector<int> getBorrowedDocuments();
    int getPatronID();
    bool operator==(int patronID);

};

#endif