#include "Move.h"

Move::Move() {}

Move::~Move() {}

std::string Move::getName() {
    return this->name;
}

int Move::compare(Move move) {

    // this object wins
    for (int i = 0; i < beats.size(); i++) {
        if (beats[i] == move.getName()) {
            return 1;
        }
    }

    // this object loses
    for (int i = 0; i < loses.size(); i++) {
        if (loses[i] == move.getName()) {
            return -1;
        }
    }

    // it's a draw or incompatible move
    return 0;
    
}
