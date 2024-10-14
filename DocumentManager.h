#ifndef DOCUMENTMANAGER_H
#define DOCUMENTMANAGER_H

#include <string>
#include <vector>
#include <unordered_map>
#include "Document.h"

class DocumentManager {

    private:
    std::unordered_map<int, Document> documents;
    std::vector<int> patrons;

    public:
    DocumentManager();
    ~DocumentManager();

    void addDocument(std::string name, int id, int license_limit);
    void addPatron(int patronID);
    int search(std::string name); // returns docid if name is in the document collection or 0 if the name is not in the collection
    bool borrowDocument(int docid, int patronID);  // returns true if document is borrowed, false if it can not be borrowed (invalid patronid or the number of copies current borrowed has reached the license limit)
    void returnDocument(int docid, int patronID);

};

#endif

/*
    addDocument - unordered map with the id as the key, and contains a vector storing name, license_limit and number_borrowed - the number borrowed is initially 0

    addPatron - vector containing patron ID

    search - traverses through map until it gets name - returns the key corresponding to the name

    borrowDocument - uses docid to get document
    - checks if patronID is in patron vector - if it is not, can't be borrowed
    - checks if number_borrowed > license_limit - if it is, can't be borrowed, if not, it can be borrowed
*/