#include "Monkey.h"
#include "Names.h"

Monkey::Monkey() {
    this->name = MONKEY;
    beats.push_back(NINJA);
    beats.push_back(ROBOT);
    loses.push_back(PIRATE);
    loses.push_back(ZOMBIE);
}

Monkey::~Monkey() {}