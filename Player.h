#pragma once

#include <string>

class Player {
    protected:
    std::string name;
    char move;

    public:
    virtual char makeMove() = 0;
    virtual std::string getName() = 0;

};