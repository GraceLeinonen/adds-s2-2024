#include "Document.h"

Document::Document() {
    this->name = "";
    this->license_limit = 0;
    this->number_borrowed = 0;

}

Document::Document(std::string name, int license_limit) {
    this->name = name;
    this->license_limit = license_limit;
    this->number_borrowed = 0;
}

Document::~Document() {}

std::string Document::getName() {
    return this->name;
}

int Document::getNumberBorrowed() {
    return this->number_borrowed;
}

int Document::getLicenseLimit() {
    return this->license_limit;
}