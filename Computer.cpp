#include "Player.h"
#include "Computer.h"
#include "Rock.h"

#include <string>

Computer::Computer() {
    
    this->name = "Computer";
}

Move* Computer::makeMove() {
    
    move = new Rock();
    return move;
}

std::string Computer::getName() {

    return this->name;
}