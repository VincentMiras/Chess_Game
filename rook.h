#ifndef ROOK_H
#define ROOK_H

#include "piece.h"

class Rook : public Piece
{
public:
    Rook(PieceColor color, glm::vec2 pos);
    std::vector<glm::vec2> MouvPossible() const override;
    std::vector<glm::vec3> getforme() const override;
    std::vector<glm::vec2> getbuffer_image() const override;
    void updateforme() override;

    std::vector<glm::vec3> forme;
    std::vector<glm::vec2> buffer_image;

};

#endif // ROOK_H
