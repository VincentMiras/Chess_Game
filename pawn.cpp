#include "pawn.h"

Pawn::Pawn(PieceColor color, glm::vec2 pos) : Piece(color,pos){}

std::vector<glm::vec2> Pawn::MouvPossible() const{
    std::vector<glm::vec2> list_mouv;

    if (color == PieceColor::WHITE){
        if (pos.y + 1 <= 8){
            list_mouv.push_back(glm::vec2(pos.x, pos.y + 1));
        }
        else{
            list_mouv.push_back(glm::vec2(pos.x, pos.y));
        }

    }

    if (color == PieceColor::BLACK){
        if (pos.y - 1 > 0){
            list_mouv.push_back(glm::vec2(pos.x, pos.y - 1));
        }
        else{
            list_mouv.push_back(glm::vec2(pos.x, pos.y));
        }
    }


    return list_mouv;
}
