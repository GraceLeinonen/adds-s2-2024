#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include "Move.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"

#include <iostream>

int main() {

    Player* p1 = new Human("Grace");
    Player* p2 = new Human("Steve");
    Referee r;

    Player* winner = r.refGame(p1, p2);

    if (winner == p1) {
        std::cout << p1->getName() << " Wins" << std::endl;
    }

    else if (winner == p2) {
        std::cout << p2->getName() << " Wins" << std::endl;
    }

    else if (winner == NULL) {
        std::cout << "It's a Tie" << std::endl;
    }

    return 0;
};