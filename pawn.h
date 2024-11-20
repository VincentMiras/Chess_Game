#ifndef PAWN_H
#define PAWN_H

#include "piece.h"


class Pawn : public Piece
{
public:
    Pawn(PieceColor color, glm::vec2 pos);
    std::vector<glm::vec2> MouvPossible() const override;
};

#endif // PAWN_H
