#pragma once

#include "Move.h"

class Rock : public Move {

    public:
    Rock();
    ~Rock();
    int compare(Move move);

};