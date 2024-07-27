#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

#include <iostream>

int main() {

    Player* h1 = new Human();
    Player* c2 = new Computer();
    Referee r;

    Player* winner = r.refGame(h1, c2);

    if (winner == h1) {
        std::cout << h1->getName() << " Wins" << std::endl;
    }

    else if (winner == c2) {
        std::cout << c2->getName() << " Wins" << std::endl;
    }

    else if (winner == NULL) {
        std::cout << "It's a Tie" << std::endl;
    }

    return 0;
};