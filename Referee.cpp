#include "Referee.h"
#include "Move.h"

Referee::Referee() {}

Player* Referee::refGame(Player* player1, Player* player2) {

    Move* move1 = player1->makeMove();
    Move* move2 = player2->makeMove();

    // compare moves
    int result = move1->compare(*move2);

    // player 1 wins
    if (result == 1) {

        return player1;
    }

    // player 2 wins
    if (result == -1) {

        return player2;
    }

    // draw or incompatible moves
    if (result == 0) {

        return NULL;
    }

    return NULL;
}