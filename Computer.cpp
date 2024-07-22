#include "Player.h"
#include "Computer.h"

#include <string>

Computer::Computer() {
    
    this->name = "Computer";
}

char Computer::makeMove() {
    
    this->move = 'R'; // char uses ', string uses "
    return move;
}

std::string Computer::getName() {

    return this->name;
}