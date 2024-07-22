#pragma once

#include "Player.h"

#include <string>

class Computer : public Player {

    public:
    Computer();
    char makeMove() override;
    std::string getName() override;

};