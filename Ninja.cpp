#include "Ninja.h"
#include "Names.h"

Ninja::Ninja() {
    this->name = NINJA;
    beats.push_back(PIRATE);
    beats.push_back(ZOMBIE);
    loses.push_back(MONKEY);
    loses.push_back(ROBOT);
}

Ninja::~Ninja() {}