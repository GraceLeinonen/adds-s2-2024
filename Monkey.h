#pragma once

#include "Move.h"

class Monkey : public Move {

    public:
    Monkey();
    ~Monkey();
    int compare(Move move);

};