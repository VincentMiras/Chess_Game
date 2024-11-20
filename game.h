#ifndef GAME_H
#define GAME_H

#include "board.h"
#include "pawn.h"
#include "rook.h"
#include "knight.h"
#include "bishop.h"
#include "queen.h"
#include "king.h"
#include "Piececolor.h"

class Game
{
public:
    Game();
    void initialise_game();
    void Make_a_move();

    Board etat_jeu;
    PieceColor tour;
};

#endif // GAME_H
