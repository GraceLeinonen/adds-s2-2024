#include "DocumentManager.h"
#include "Document.h"
#include "Patron.h"
#include <iostream>

int main() {

    DocumentManager dm;
    dm.addDocument("book1", 100, 3);
    dm.addDocument("book2", 200, 2);
    dm.addDocument("book3", 300, 3);

    std::cout << dm.search("book1") << std::endl;

    dm.addPatron(1);
    dm.addPatron(2);
    dm.addPatron(3);

    dm.borrowDocument(100,1);
    dm.borrowDocument(100,1);
    dm.borrowDocument(100,1);

    std::cout << dm.search("book1") << std::endl;

    dm.returnDocument(100,1);

    std::cout << dm.search("book1") << std::endl;

    dm.borrowDocument(100,1);

    std::cout << dm.search("book1") << std::endl;

    dm.borrowDocument(100,1);

    std::cout << dm.search("book1") << std::endl;

    
    


    return 0;
}