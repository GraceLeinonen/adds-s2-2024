#include "Referee.h"
#include "Move.h"

Referee::Referee() {} // have to include default constructor

Player* Referee::refGame(Player* player1, Player* player2) {

    Move* move1 = player1->makeMove();
    Move* move2 = player2->makeMove();

    if (move1->compare(*move2) == 1) {

        return player1;
    }

    if (move1->compare(*move2) == -1) {

        return player2;
    }

    if (move1->compare(*move2) == 0) {

        return NULL;
    }

    return NULL;
}