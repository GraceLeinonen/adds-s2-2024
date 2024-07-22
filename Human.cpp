#include "Player.h"
#include "Human.h"

#include <string>
#include <iostream>

Human::Human() {

    this->name = "Human";
}

Human::Human(std::string name) {

    this->name = name;
}

std::string Human::makeMove() {

    std::cout << "Enter move: ";
    std::cin >> move;
    return move;
    
}

std::string Human::getName() {

    return this->name;
}