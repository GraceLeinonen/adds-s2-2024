#include "Player.h"
#include "Human.h"
#include "Rock.h"
#include "Scissors.h"
#include "Paper.h"
#include "Monkey.h"
#include "Robot.h"
#include "Ninja.h"
#include "Pirate.h"
#include "Zombie.h"
#include "Names.h"

#include <string>
#include <iostream>

Human::Human() {

    this->name = "Human";
}

Human::Human(std::string name) {

    this->name = name;
}

Move* Human::makeMove() {

    std::string moveName;
    std::cout << "Enter move: ";
    std::cin >> moveName;

    if (moveName == ROCK) {
        move = new Rock();
    }

    if (moveName == PAPER) {
        move = new Paper();
    }

    if (moveName == SCISSORS) {
        move = new Scissors();
    }

    if (moveName == MONKEY) {
        move = new Monkey();
    }

    if (moveName == ROBOT) {
        move = new Robot();
    }

    if (moveName == NINJA) {
        move = new Ninja();
    }

    if (moveName == PIRATE) {
        move = new Pirate();
    }

    if (moveName == ZOMBIE) {
        move = new Zombie();
    }

    return move;
    
}

std::string Human::getName() {

    return this->name;
}
