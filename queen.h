#ifndef QUEEN_H
#define QUEEN_H

#include "piece.h"

class Queen : public Piece
{
public:
    Queen(PieceColor color, glm::vec2 pos);
    std::vector<glm::vec2> MouvPossible() const override;
    std::vector<glm::vec3> getforme() const override;
    std::vector<glm::vec2> getbuffer_image() const override;
    void updateforme() override;

    std::vector<glm::vec3> forme;
    std::vector<glm::vec2> buffer_image;

};

#endif // QUEEN_H
