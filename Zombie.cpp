#include "Zombie.h"
#include "Names.h"

Zombie::Zombie() {
    this->name = ZOMBIE;
    beats.push_back(MONKEY);
    beats.push_back(PIRATE);
    loses.push_back(ROBOT);
    loses.push_back(NINJA);
}

Zombie::~Zombie() {}