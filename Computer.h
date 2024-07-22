#pragma once

#include "Player.h"

#include <string>

class Computer : public Player {

    public:
    Computer();
    std::string makeMove() override;
    std::string getName() override;

};