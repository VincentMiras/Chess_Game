#ifndef KNIGHT_H
#define KNIGHT_H

#include "piece.h"


class Knight : public Piece
{
public:
    Knight(PieceColor color, glm::vec2 pos);
    std::vector<glm::vec2> MouvPossible() const override;
};

#endif // KNIGHT_H
