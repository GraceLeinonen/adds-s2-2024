#pragma once

#include "Move.h"

class Zombie : public Move {

    public:
    Zombie();
    ~Zombie();
    int compare(Move move);

};