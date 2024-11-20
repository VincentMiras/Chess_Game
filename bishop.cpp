#include "bishop.h"

Bishop::Bishop(PieceColor color, glm::vec2 pos) : Piece(color,pos){}

std::vector<glm::vec2> Bishop::MouvPossible() const{
    std::vector<glm::vec2> list_mouv;

    for (int i=0;i<8;i++){
        if (pos.x + i <= 8 && pos.y + i <= 8){
            list_mouv.push_back(glm::vec2(pos.x+i,pos.y+i));
        }
        if (pos.x + i <= 8 && pos.y - i > 0){
            list_mouv.push_back(glm::vec2(pos.x+i,pos.y-i));
        }
        if (pos.x - i > 0 && pos.y + i <= 8){
            list_mouv.push_back(glm::vec2(pos.x-i,pos.y+i));
        }
        if (pos.x - i > 0 && pos.y - i > 0){
            list_mouv.push_back(glm::vec2(pos.x-i,pos.y-i));
        }
    }
    return list_mouv;
}
