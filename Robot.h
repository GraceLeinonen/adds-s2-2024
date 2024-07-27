#pragma once

#include "Move.h"

class Robot : public Move {

    public:
    Robot();
    ~Robot();
    int compare(Move move);

};