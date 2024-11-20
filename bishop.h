#ifndef BISHOP_H
#define BISHOP_H


#include "piece.h"


class Bishop : public Piece
{
public:
    Bishop(PieceColor color, glm::vec2 pos);
    std::vector<glm::vec2> MouvPossible() const override;
};

#endif // BISHOP_H
