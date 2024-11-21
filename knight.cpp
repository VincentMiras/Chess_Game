#include "knight.h"

Knight::Knight(PieceColor color, glm::vec2 pos) : Piece(color,pos){

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

std::vector<glm::vec2> Knight::MouvPossible() const{
    std::vector<glm::vec2> list_mouv;

    if (pos.x + 2 <= 8 && pos.y - 1 > 0){
        list_mouv.push_back(glm::vec2(pos.x + 2, pos.y - 1));
    }
    if (pos.x + 2 <= 8 && pos.y + 1 <= 8){
        list_mouv.push_back(glm::vec2(pos.x + 2, pos.y + 1));
    }
    if (pos.x - 2 > 0 && pos.y - 1 > 0){
        list_mouv.push_back(glm::vec2(pos.x - 2, pos.y - 1));
    }
    if (pos.x - 2 > 0 && pos.y + 1 <= 8){
        list_mouv.push_back(glm::vec2(pos.x - 2, pos.y + 1));
    }
    if (pos.x + 1 <= 8 && pos.y + 2 <= 8){
        list_mouv.push_back(glm::vec2(pos.x + 1, pos.y + 2));
    }
    if (pos.x + 1 <= 8 && pos.y - 2 > 0){
        list_mouv.push_back(glm::vec2(pos.x + 1, pos.y - 2));
    }
    if (pos.x - 1 > 0 && pos.y + 2 <= 8){
        list_mouv.push_back(glm::vec2(pos.x - 1, pos.y + 2));
    }
    if (pos.x - 1 > 0 && pos.y - 2 > 0){
        list_mouv.push_back(glm::vec2(pos.x - 1, pos.y - 2));
    }
    return list_mouv;
}
