#ifndef KING_H
#define KING_H

#include "piece.h"

class King : public Piece
{
public:
    King(PieceColor color, glm::vec2 pos);
    std::vector<glm::vec2> MouvPossible() const override;
};

#endif // KING_H
