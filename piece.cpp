#include "piece.h"

Piece::Piece(PieceColor c, glm::vec2 pos) {
    color = c;
    this->pos = pos;
}

Piece::~Piece(){}

glm::vec2 Piece::getPos() {
    return pos;
}

void Piece::setPosition(glm::vec2 &pos){
    this->pos = pos;
}

PieceColor Piece::getColor() const{
    return color;
}
