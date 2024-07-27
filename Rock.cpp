#include "Rock.h"
#include "Names.h"

Rock::Rock() {
    this->name = ROCK;
    beats.push_back(SCISSORS);
    loses.push_back(PAPER);
}

Rock::~Rock() {}