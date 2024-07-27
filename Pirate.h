#pragma once

#include "Move.h"

class Pirate : public Move {

    public:
    Pirate();
    ~Pirate();
    int compare(Move move);

};