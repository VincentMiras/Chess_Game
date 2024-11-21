#ifndef KNIGHT_H
#define KNIGHT_H

#include "piece.h"


class Knight : public Piece
{
public:
    Knight(PieceColor color, glm::vec2 pos);
    std::vector<glm::vec2> MouvPossible() const override;

    std::vector<glm::vec3> forme;
    std::vector<glm::vec2> buffer_image;

};

#endif // KNIGHT_H
