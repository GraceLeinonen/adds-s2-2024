#pragma once

#include "Move.h"

class Scissors : public Move {

    public:
    Scissors();
    ~Scissors();
    int compare(Move move);

};