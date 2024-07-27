#include "Scissors.h"
#include "Names.h"

Scissors::Scissors() {
    this->name = SCISSORS;
    beats.push_back(PAPER);
    loses.push_back(ROCK);
}

Scissors::~Scissors() {}