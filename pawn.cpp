#include "pawn.h"

Pawn::Pawn(PieceColor color, glm::vec2 pos) : Piece(color,pos){

    float center_tile_x=-0.8f+(pos.x-1)*0.2f+0.1f;
    float center_tile_y=-0.8f+(pos.y-1)*0.2f+0.1f;

    forme = {
        glm::vec3(center_tile_x - 0.05f, 0.0f, center_tile_y-0.05f),
        glm::vec3(center_tile_x + 0.05f, 0.0f, center_tile_y-0.05f),
        glm::vec3(center_tile_x, 0.1f, center_tile_y),

        glm::vec3(center_tile_x + 0.05f, 0.0f, center_tile_y-0.05f),
        glm::vec3(center_tile_x, 0.0f, center_tile_y+0.05f),
        glm::vec3(center_tile_x, 0.1f, center_tile_y),

        glm::vec3(center_tile_x, 0.0f, center_tile_y+0.05f),
        glm::vec3(center_tile_x-0.05f, 0.0f, center_tile_y-0.05f),
        glm::vec3(center_tile_x, 0.1f, center_tile_y)
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

std::vector<glm::vec3> Pawn::getforme() const {
    return forme;
}

std::vector<glm::vec2> Pawn::getbuffer_image() const {
    return buffer_image;
}

void Pawn::updateforme() {
    float center_tile_x=-0.8f+(pos.x-1)*0.2f+0.1f;
    float center_tile_y=-0.8f+(pos.y-1)*0.2f+0.1f;

    forme = {
        glm::vec3(center_tile_x - 0.05f, 0.0f, center_tile_y-0.05f),
        glm::vec3(center_tile_x + 0.05f, 0.0f, center_tile_y-0.05f),
        glm::vec3(center_tile_x, 0.1f, center_tile_y),

        glm::vec3(center_tile_x + 0.05f, 0.0f, center_tile_y-0.05f),
        glm::vec3(center_tile_x, 0.0f, center_tile_y+0.05f),
        glm::vec3(center_tile_x, 0.1f, center_tile_y),

        glm::vec3(center_tile_x, 0.0f, center_tile_y+0.05f),
        glm::vec3(center_tile_x-0.05f, 0.0f, center_tile_y-0.05f),
        glm::vec3(center_tile_x, 0.1f, center_tile_y)
    };
}
