#pragma once

#include "Move.h"

class Paper : public Move {

    public:
    Paper();
    ~Paper();
    int compare(Move move);

};