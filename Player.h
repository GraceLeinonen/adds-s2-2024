#pragma once

#include "Move.h"

#include <string>

class Player {
    protected:
    std::string name;
    Move* move;

    public:
    virtual Move* makeMove() = 0;
    virtual std::string getName() = 0;

};