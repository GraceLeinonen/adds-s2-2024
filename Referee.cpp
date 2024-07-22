#include "Referee.h"

Referee::Referee() {} // have to include default constructor

Player* Referee::refGame(Player* player1, Player* player2) {

    char move1 = player1->makeMove();
    char move2 = player2->makeMove();

    if (move1 == move2) {

        return NULL;
    }

    if (move1 == 'S' && move2 == 'P') {

        return player1;
    }

    if (move1 == 'S' && move2 == 'R') {

        return player2;
    }

    if (move1 == 'P' && move2 == 'R') {

        return player1;
    }

    if (move1 == 'P' && move2 == 'S') {

        return player2;
    }

    if (move1 == 'R' && move2 == 'S') {

        return player1;
    }

    if (move1 == 'R' && move2 == 'P') {

        return player2;
    }

    return NULL;
}