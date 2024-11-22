#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include <glm/glm.hpp>
#include "piece.h"
#include <iostream>

class Board
{
public:
    Board();
    ~Board();
    Piece* getPiece(glm::vec2 &pos);
    std::vector<Piece*> getPieces();
    bool move(Piece* piece_joue, glm::vec2 pos_joue);
    void addPiece(Piece* piece);

    std::vector<Piece*> list_pieces;
};

#endif // BOARD_H
