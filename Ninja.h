#pragma once

#include "Move.h"

class Ninja : public Move {

    public:
    Ninja();
    ~Ninja();
    int compare(Move move);

};