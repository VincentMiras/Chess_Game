#include "rook.h"

Rook::Rook(PieceColor color, glm::vec2 pos) : Piece(color,pos){

    float center_tile_x=-0.8f+(pos.x-1)*0.2f+0.1f;
    float center_tile_y=-0.8f+(pos.y-1)*0.2f+0.1f;

    forme = {
        glm::vec3(center_tile_x-0.05f, center_tile_y-0.07f, 0.0f),
        glm::vec3(center_tile_x+0.05f, center_tile_y-0.07f, 0.0f),
        glm::vec3(center_tile_x+0.05f, center_tile_y+0.07f, 0.0f),
        glm::vec3(center_tile_x-0.05f, center_tile_y-0.07f, 0.0f),
        glm::vec3(center_tile_x-0.05f, center_tile_y+0.07f, 0.0f),
        glm::vec3(center_tile_x+0.05f, center_tile_y+0.07f, 0.0f)
    };
    buffer_image = {
       glm::vec2( 0,1),
       glm::vec2( 1,1),
       glm::vec2( 1,0),
       glm::vec2( 0,1),
       glm::vec2( 0,0),
       glm::vec2( 1,0)
    };
}

std::vector<glm::vec2> Rook::MouvPossible() const{
    std::vector<glm::vec2> list_mouv;

    for (int i=0;i<8;i++){
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

std::vector<glm::vec3> Rook::getforme() const {
    return forme;
}

std::vector<glm::vec2> Rook::getbuffer_image() const {
    return buffer_image;
}

void Rook::updateforme() {
    float center_tile_x=-0.8f+(pos.x-1)*0.2f+0.1f;
    float center_tile_y=-0.8f+(pos.y-1)*0.2f+0.1f;

    forme = {
        glm::vec3(center_tile_x-0.05f, center_tile_y-0.07f, 0.0f),
        glm::vec3(center_tile_x+0.05f, center_tile_y-0.07f, 0.0f),
        glm::vec3(center_tile_x+0.05f, center_tile_y+0.07f, 0.0f),
        glm::vec3(center_tile_x-0.05f, center_tile_y-0.07f, 0.0f),
        glm::vec3(center_tile_x-0.05f, center_tile_y+0.07f, 0.0f),
        glm::vec3(center_tile_x+0.05f, center_tile_y+0.07f, 0.0f)
    };
}
