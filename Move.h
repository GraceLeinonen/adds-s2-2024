#pragma once

#include <string>
#include <vector>

class Move {
    protected:
    std::string name;
    std::vector<std::string> beats;
    std::vector<std::string> loses;


    public:
    Move();
    virtual ~Move();
    virtual std::string getName();
    int compare(Move move);

};