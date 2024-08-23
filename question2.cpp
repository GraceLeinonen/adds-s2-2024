#include "question2.h"
#include <vector>
#include <string>
#include <time.h>

BagOfHolding::BagOfHolding() {

}

std::vector<std::string> BagOfHolding::getItems() {

    // get the entire bag
    return bag;

}

void BagOfHolding::addItem(std::string item) {

    // insert item into vector
    bag.push_back(item);

}

std::string BagOfHolding::removeItem(std::string item) {

    // remove item from vector
    for (int i = 0; i < bag.size(); i++) {
        if (bag[i] == item) {
            bag.erase(bag.begin()+i);
            return item;
        }
    }

    return "";

}

std::string BagOfHolding::remove(int index) {
    
    // store item
    std::string item = bag[index];

    // erase item at index
    bag.erase(bag.begin()+index);

    // return
    return item;
}

std::string BagOfHolding::remove() {

    // initialise random seed
    srand(time(NULL));

    // generate a random number within the size of the vector
    int num = rand() % bag.size();

    // store item
    std::string item = bag[num-1];

    // erase item at number
    bag.erase(bag.begin()+(num - 1));

    // return
    return item;
;
}