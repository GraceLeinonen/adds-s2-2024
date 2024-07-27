#include "Pirate.h"
#include "Names.h"

Pirate::Pirate() {
    this->name = PIRATE;
    beats.push_back(MONKEY);
    beats.push_back(ROBOT);
    loses.push_back(NINJA);
    loses.push_back(ZOMBIE);
}

Pirate::~Pirate() {}