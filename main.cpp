#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

#include <iostream>

int main() {

    Player* h1 = new Human("Grace");
    Player* h2 = new Human();
    Referee r;

    Player* winner = r.refGame(h1, h2);

    if (winner == h1) {
        std::cout << h1->getName() << " Wins" << std::endl;
    }

    else if (winner == h2) {
        std::cout << h2->getName() << " Wins" << std::endl;
    }

    else if (winner == NULL) {
        std::cout << "It's a Tie" << std::endl;
    }

    return 0;
};