#include "queen.h"

Queen::Queen(PieceColor color, glm::vec2 pos) : Piece(color,pos){

    std::vector<glm::vec3> forme = {
       glm::vec3(-0.15f, -0.15f, 0.0f),
       glm::vec3( 0.15f, -0.15f, 0.0f),
       glm::vec3( 0.15f,  0.15f, 0.0f),
       glm::vec3(-0.15f, -0.15f, 0.0f),
       glm::vec3(-0.15f,  0.15f, 0.0f),
       glm::vec3( 0.15f,  0.15f, 0.0f)
    };

    std::vector<glm::vec2> buffer_image = {
       glm::vec2( 0,1),
       glm::vec2( 1,1),
       glm::vec2( 1,0),
       glm::vec2( 0,1),
       glm::vec2( 0,0),
       glm::vec2( 1,0)
    };
}

std::vector<glm::vec2> Queen::MouvPossible() const{
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
        if (pos.x + i <= 8){
            list_mouv.push_back(glm::vec2(pos.x+i,pos.y));
        }
        if (pos.y - i > 0){
            list_mouv.push_back(glm::vec2(pos.x,pos.y-i));
        }
        if (pos.y + i <= 8){
            list_mouv.push_back(glm::vec2(pos.x,pos.y+i));
        }
        if (pos.x - i > 0){
            list_mouv.push_back(glm::vec2(pos.x-i,pos.y));
        }
    }
    return list_mouv;
}
