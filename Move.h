#pragma once

#include <string>
#include <vector>

class Move {
    protected:
    std::string name;
    std::vector<std::string> beats; // stores list of moves that this move beats
    std::vector<std::string> loses; // stores list of moves that this move loses to


    public:
    Move();
    virtual ~Move();
    virtual std::string getName();
    int compare(Move move);

};
