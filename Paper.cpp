#include "Paper.h"
#include "Names.h"

Paper::Paper() {
    this->name = PAPER;
    beats.push_back(ROCK);
    loses.push_back(SCISSORS);
}

Paper::~Paper() {}