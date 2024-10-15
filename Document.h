#ifndef DOCUMENT_H
#define DOCUMENT_H

#include <string>

class Document {

    private:
    std::string name;
    int license_limit;
    int number_borrowed;

    public:
    Document();
    Document(std::string name, int license_limit);
    ~Document();

    std::string getName();
    int getNumberBorrowed();
    void setNumberBorrowed(int number_borrowed);
    int getLicenseLimit();

};

#endif