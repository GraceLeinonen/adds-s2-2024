#include "Robot.h"
#include "Names.h"

Robot::Robot() {
    this->name = ROBOT;
    beats.push_back(NINJA);
    beats.push_back(ZOMBIE);
    loses.push_back(MONKEY);
    loses.push_back(PIRATE);
}

Robot::~Robot() {}