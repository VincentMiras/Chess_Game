#include "knight.h"

Knight::Knight(PieceColor color, glm::vec2 pos) : Piece(color,pos){

    float center_tile_x=-0.8f+(pos.x-1)*0.2f+0.1f;
    float center_tile_y=-0.8f+(pos.y-1)*0.2f+0.1f;

    forme = {
        //face avant 2D
        glm::vec3(center_tile_x-0.05f, 0.055f, center_tile_y-0.04f),
        glm::vec3(center_tile_x+0.05f, 0.1f  , center_tile_y-0.04f),
        glm::vec3(center_tile_x-0.05f, 0.1f  , center_tile_y-0.04f),
        glm::vec3(center_tile_x-0.05f, 0.055f, center_tile_y-0.04f),
        glm::vec3(center_tile_x+0.05f, 0.055f, center_tile_y-0.04f),
        glm::vec3(center_tile_x+0.05f, 0.1f  , center_tile_y-0.04f),
        glm::vec3(center_tile_x-0.01f, 0.0f  , center_tile_y-0.04f),
        glm::vec3(center_tile_x+0.05f, 0.055f, center_tile_y-0.04f),
        glm::vec3(center_tile_x-0.01f, 0.055f, center_tile_y-0.04f),
        glm::vec3(center_tile_x-0.01f, 0.0f  , center_tile_y-0.04f),
        glm::vec3(center_tile_x+0.05f, 0.0f  , center_tile_y-0.04f),
        glm::vec3(center_tile_x+0.05f, 0.055f, center_tile_y-0.04f),
        //face arriere 2D
        glm::vec3(center_tile_x-0.05f, 0.055f, center_tile_y+0.04f),
        glm::vec3(center_tile_x+0.05f, 0.1f  , center_tile_y+0.04f),
        glm::vec3(center_tile_x-0.05f, 0.1f  , center_tile_y+0.04f),
        glm::vec3(center_tile_x-0.05f, 0.055f, center_tile_y+0.04f),
        glm::vec3(center_tile_x+0.05f, 0.055f, center_tile_y+0.04f),
        glm::vec3(center_tile_x+0.05f, 0.1f  , center_tile_y+0.04f),
        glm::vec3(center_tile_x-0.01f, 0.0f  , center_tile_y+0.04f),
        glm::vec3(center_tile_x+0.05f, 0.055f, center_tile_y+0.04f),
        glm::vec3(center_tile_x-0.01f, 0.055f, center_tile_y+0.04f),
        glm::vec3(center_tile_x-0.01f, 0.0f  , center_tile_y+0.04f),
        glm::vec3(center_tile_x+0.05f, 0.0f  , center_tile_y+0.04f),
        glm::vec3(center_tile_x+0.05f, 0.055f, center_tile_y+0.04f),
        //face droite
        glm::vec3(center_tile_x+0.05f, 0.1f  , center_tile_y-0.04f),
        glm::vec3(center_tile_x+0.05f, 0.0f  , center_tile_y-0.04f),
        glm::vec3(center_tile_x+0.05f, 0.1f  , center_tile_y+0.04f),
        glm::vec3(center_tile_x+0.05f, 0.0f  , center_tile_y-0.04f),
        glm::vec3(center_tile_x+0.05f, 0.0f  , center_tile_y+0.04f),
        glm::vec3(center_tile_x+0.05f, 0.1f  , center_tile_y+0.04f),
        //face top
        glm::vec3(center_tile_x-0.05f, 0.1f  , center_tile_y-0.04f),
        glm::vec3(center_tile_x+0.05f, 0.1f  , center_tile_y-0.04f),
        glm::vec3(center_tile_x+0.05f, 0.1f  , center_tile_y+0.04f),
        glm::vec3(center_tile_x-0.05f, 0.1f  , center_tile_y-0.04f),
        glm::vec3(center_tile_x+0.05f, 0.1f  , center_tile_y+0.04f),
        glm::vec3(center_tile_x-0.05f, 0.1f  , center_tile_y+0.04f),
        //face gauche haut
        glm::vec3(center_tile_x-0.05f, 0.1f  , center_tile_y+0.04f),
        glm::vec3(center_tile_x-0.05f, 0.055f, center_tile_y+0.04f),
        glm::vec3(center_tile_x-0.05f, 0.1f  , center_tile_y-0.04f),
        glm::vec3(center_tile_x-0.05f, 0.1f  , center_tile_y-0.04f),
        glm::vec3(center_tile_x-0.05f, 0.055f, center_tile_y+0.04f),
        glm::vec3(center_tile_x-0.05f, 0.055f, center_tile_y-0.04f),
        //face gauche bas
        glm::vec3(center_tile_x-0.01f, 0.055f, center_tile_y+0.04f),
        glm::vec3(center_tile_x-0.01f, 0.0f  , center_tile_y+0.04f),
        glm::vec3(center_tile_x-0.01f, 0.055f, center_tile_y-0.04f),
        glm::vec3(center_tile_x-0.01f, 0.055f, center_tile_y-0.04f),
        glm::vec3(center_tile_x-0.01f, 0.0f  , center_tile_y+0.04f),
        glm::vec3(center_tile_x-0.01f, 0.0f  , center_tile_y-0.04f),
        //face dessous
        glm::vec3(center_tile_x-0.05f, 0.055f, center_tile_y+0.04f),
        glm::vec3(center_tile_x-0.05f, 0.055f, center_tile_y-0.04f),
        glm::vec3(center_tile_x-0.01f, 0.055f, center_tile_y-0.04f),
        glm::vec3(center_tile_x-0.05f, 0.055f, center_tile_y+0.04f),
        glm::vec3(center_tile_x-0.01f, 0.055f, center_tile_y-0.04f),
        glm::vec3(center_tile_x-0.01f, 0.055f, center_tile_y+0.04f)
    };

    buffer_image = {
        glm::vec2( 0,1),
        glm::vec2( 1,1),
        glm::vec2( 1,0),
        glm::vec2( 0,1),
        glm::vec2( 0,0),
        glm::vec2( 1,0),
        glm::vec2( 0,1),
        glm::vec2( 1,1),
        glm::vec2( 1,0),
        glm::vec2( 0,1),
        glm::vec2( 0,0),
        glm::vec2( 1,0),
        glm::vec2( 0,1),
        glm::vec2( 1,1),
        glm::vec2( 1,0),
        glm::vec2( 0,1),
        glm::vec2( 0,0),
        glm::vec2( 1,0),
        glm::vec2( 0,1),
        glm::vec2( 1,1),
        glm::vec2( 1,0),
        glm::vec2( 0,1),
        glm::vec2( 0,0),
        glm::vec2( 1,0),
        glm::vec2( 0,1),
        glm::vec2( 1,1),
        glm::vec2( 1,0),
        glm::vec2( 0,1),
        glm::vec2( 0,0),
        glm::vec2( 1,0),
        glm::vec2( 0,1),
        glm::vec2( 1,1),
        glm::vec2( 1,0),
        glm::vec2( 0,1),
        glm::vec2( 0,0),
        glm::vec2( 1,0),
        glm::vec2( 0,1),
        glm::vec2( 1,1),
        glm::vec2( 1,0),
        glm::vec2( 0,1),
        glm::vec2( 0,0),
        glm::vec2( 1,0),
        glm::vec2( 0,1),
        glm::vec2( 1,1),
        glm::vec2( 1,0),
        glm::vec2( 0,1),
        glm::vec2( 0,0),
        glm::vec2( 1,0),
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

std::vector<glm::vec3> Knight::getforme() const {
    return forme;
}

std::vector<glm::vec2> Knight::getbuffer_image() const {
    return buffer_image;
}

void Knight::updateforme() {
    float center_tile_x=-0.8f+(pos.x-1)*0.2f+0.1f;
    float center_tile_y=-0.8f+(pos.y-1)*0.2f+0.1f;

    forme = {
        //face avant 2D
        glm::vec3(center_tile_x-0.05f, 0.055f, center_tile_y-0.04f),
        glm::vec3(center_tile_x+0.05f, 0.1f  , center_tile_y-0.04f),
        glm::vec3(center_tile_x-0.05f, 0.1f  , center_tile_y-0.04f),
        glm::vec3(center_tile_x-0.05f, 0.055f, center_tile_y-0.04f),
        glm::vec3(center_tile_x+0.05f, 0.055f, center_tile_y-0.04f),
        glm::vec3(center_tile_x+0.05f, 0.1f  , center_tile_y-0.04f),
        glm::vec3(center_tile_x-0.01f, 0.0f  , center_tile_y-0.04f),
        glm::vec3(center_tile_x+0.05f, 0.055f, center_tile_y-0.04f),
        glm::vec3(center_tile_x-0.01f, 0.055f, center_tile_y-0.04f),
        glm::vec3(center_tile_x-0.01f, 0.0f  , center_tile_y-0.04f),
        glm::vec3(center_tile_x+0.05f, 0.0f  , center_tile_y-0.04f),
        glm::vec3(center_tile_x+0.05f, 0.055f, center_tile_y-0.04f),
        //face arriere 2D
        glm::vec3(center_tile_x-0.05f, 0.055f, center_tile_y+0.04f),
        glm::vec3(center_tile_x+0.05f, 0.1f  , center_tile_y+0.04f),
        glm::vec3(center_tile_x-0.05f, 0.1f  , center_tile_y+0.04f),
        glm::vec3(center_tile_x-0.05f, 0.055f, center_tile_y+0.04f),
        glm::vec3(center_tile_x+0.05f, 0.055f, center_tile_y+0.04f),
        glm::vec3(center_tile_x+0.05f, 0.1f  , center_tile_y+0.04f),
        glm::vec3(center_tile_x-0.01f, 0.0f  , center_tile_y+0.04f),
        glm::vec3(center_tile_x+0.05f, 0.055f, center_tile_y+0.04f),
        glm::vec3(center_tile_x-0.01f, 0.055f, center_tile_y+0.04f),
        glm::vec3(center_tile_x-0.01f, 0.0f  , center_tile_y+0.04f),
        glm::vec3(center_tile_x+0.05f, 0.0f  , center_tile_y+0.04f),
        glm::vec3(center_tile_x+0.05f, 0.055f, center_tile_y+0.04f),
        //face droite
        glm::vec3(center_tile_x+0.05f, 0.1f  , center_tile_y-0.04f),
        glm::vec3(center_tile_x+0.05f, 0.0f  , center_tile_y-0.04f),
        glm::vec3(center_tile_x+0.05f, 0.1f  , center_tile_y+0.04f),
        glm::vec3(center_tile_x+0.05f, 0.0f  , center_tile_y-0.04f),
        glm::vec3(center_tile_x+0.05f, 0.0f  , center_tile_y+0.04f),
        glm::vec3(center_tile_x+0.05f, 0.1f  , center_tile_y+0.04f),
        //face top
        glm::vec3(center_tile_x-0.05f, 0.1f  , center_tile_y-0.04f),
        glm::vec3(center_tile_x+0.05f, 0.1f  , center_tile_y-0.04f),
        glm::vec3(center_tile_x+0.05f, 0.1f  , center_tile_y+0.04f),
        glm::vec3(center_tile_x-0.05f, 0.1f  , center_tile_y-0.04f),
        glm::vec3(center_tile_x+0.05f, 0.1f  , center_tile_y+0.04f),
        glm::vec3(center_tile_x-0.05f, 0.1f  , center_tile_y+0.04f),
        //face gauche haut
        glm::vec3(center_tile_x-0.05f, 0.1f  , center_tile_y+0.04f),
        glm::vec3(center_tile_x-0.05f, 0.055f, center_tile_y+0.04f),
        glm::vec3(center_tile_x-0.05f, 0.1f  , center_tile_y-0.04f),
        glm::vec3(center_tile_x-0.05f, 0.1f  , center_tile_y-0.04f),
        glm::vec3(center_tile_x-0.05f, 0.055f, center_tile_y+0.04f),
        glm::vec3(center_tile_x-0.05f, 0.055f, center_tile_y-0.04f),
        //face gauche bas
        glm::vec3(center_tile_x-0.01f, 0.055f, center_tile_y+0.04f),
        glm::vec3(center_tile_x-0.01f, 0.0f  , center_tile_y+0.04f),
        glm::vec3(center_tile_x-0.01f, 0.055f, center_tile_y-0.04f),
        glm::vec3(center_tile_x-0.01f, 0.055f, center_tile_y-0.04f),
        glm::vec3(center_tile_x-0.01f, 0.0f  , center_tile_y+0.04f),
        glm::vec3(center_tile_x-0.01f, 0.0f  , center_tile_y-0.04f),
        //face dessous
        glm::vec3(center_tile_x-0.05f, 0.055f, center_tile_y+0.04f),
        glm::vec3(center_tile_x-0.05f, 0.055f, center_tile_y-0.04f),
        glm::vec3(center_tile_x-0.01f, 0.055f, center_tile_y-0.04f),
        glm::vec3(center_tile_x-0.05f, 0.055f, center_tile_y+0.04f),
        glm::vec3(center_tile_x-0.01f, 0.055f, center_tile_y-0.04f),
        glm::vec3(center_tile_x-0.01f, 0.055f, center_tile_y+0.04f)
    };
}
