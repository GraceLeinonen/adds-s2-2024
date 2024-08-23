#pragma once
#include <vector>
#include <string>

class BagOfHolding{
    private:
    std::vector<std::string> bag;

    public:
    BagOfHolding();
    std::vector<std::string> getItems();
    void addItem(std::string item);
    std::string removeItem(std::string item);
    std::string remove(int index);
    std::string remove();

};