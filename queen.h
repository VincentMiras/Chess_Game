#ifndef QUEEN_H
#define QUEEN_H

#include "piece.h"

class Queen : public Piece
{
public:
    Queen(PieceColor color, glm::vec2 pos);
    std::vector<glm::vec2> MouvPossible() const override;
};

#endif // QUEEN_H
