#include "king.h"

King::King(PieceColor color, glm::vec2 pos) : Piece(color,pos){

    float center_tile_x=-0.8f+(pos.x-1)*0.2f+0.1f;
    float center_tile_y=-0.8f+(pos.y-1)*0.2f+0.1f;

    forme = {
        glm::vec3(center_tile_x-0.07f, 0.1f, center_tile_y-0.02f),
        glm::vec3(center_tile_x+0.07f, 0.1f, center_tile_y+0.02f),
        glm::vec3(center_tile_x-0.07f, 0.1f, center_tile_y+0.02f),
        glm::vec3(center_tile_x-0.07f, 0.1f, center_tile_y-0.02f),
        glm::vec3(center_tile_x+0.07f, 0.1f, center_tile_y-0.02f),
        glm::vec3(center_tile_x+0.07f, 0.1f, center_tile_y+0.02f),

        glm::vec3(center_tile_x-0.02f, 0.1f, center_tile_y-0.07f),
        glm::vec3(center_tile_x+0.02f, 0.1f, center_tile_y-0.07f),
        glm::vec3(center_tile_x+0.02f, 0.1f, center_tile_y+0.07f),
        glm::vec3(center_tile_x-0.02f, 0.1f, center_tile_y-0.07f),
        glm::vec3(center_tile_x+0.02f, 0.1f, center_tile_y+0.07f),
        glm::vec3(center_tile_x-0.02f, 0.1f, center_tile_y+0.07f),




        glm::vec3(center_tile_x-0.07f, 0.1f, center_tile_y+0.02f),
        glm::vec3(center_tile_x-0.07f, 0.0f, center_tile_y+0.02f),
        glm::vec3(center_tile_x-0.07f, 0.0f, center_tile_y-0.02f),
        glm::vec3(center_tile_x-0.07f, 0.1f, center_tile_y+0.02f),
        glm::vec3(center_tile_x-0.07f, 0.1f, center_tile_y-0.02f),
        glm::vec3(center_tile_x-0.07f, 0.0f, center_tile_y-0.02f),

        glm::vec3(center_tile_x+0.07f, 0.1f, center_tile_y+0.02f),
        glm::vec3(center_tile_x+0.07f, 0.0f, center_tile_y+0.02f),
        glm::vec3(center_tile_x+0.07f, 0.0f, center_tile_y-0.02f),
        glm::vec3(center_tile_x+0.07f, 0.1f, center_tile_y+0.02f),
        glm::vec3(center_tile_x+0.07f, 0.1f, center_tile_y-0.02f),
        glm::vec3(center_tile_x+0.07f, 0.0f, center_tile_y-0.02f),

        glm::vec3(center_tile_x+0.02f, 0.1f, center_tile_y-0.07f),
        glm::vec3(center_tile_x+0.02f, 0.0f, center_tile_y-0.07f),
        glm::vec3(center_tile_x-0.02f, 0.0f, center_tile_y-0.07f),
        glm::vec3(center_tile_x+0.02f, 0.1f, center_tile_y-0.07f),
        glm::vec3(center_tile_x-0.02f, 0.1f, center_tile_y-0.07f),
        glm::vec3(center_tile_x-0.02f, 0.0f, center_tile_y-0.07f),

        glm::vec3(center_tile_x+0.02f, 0.1f, center_tile_y+0.07f),
        glm::vec3(center_tile_x+0.02f, 0.0f, center_tile_y+0.07f),
        glm::vec3(center_tile_x-0.02f, 0.0f, center_tile_y+0.07f),
        glm::vec3(center_tile_x+0.02f, 0.1f, center_tile_y+0.07f),
        glm::vec3(center_tile_x-0.02f, 0.1f, center_tile_y+0.07f),
        glm::vec3(center_tile_x-0.02f, 0.0f, center_tile_y+0.07f),




        glm::vec3(center_tile_x+0.07f, 0.1f, center_tile_y-0.02f),
        glm::vec3(center_tile_x+0.07f, 0.0f, center_tile_y-0.02f),
        glm::vec3(center_tile_x-0.07f, 0.0f, center_tile_y-0.02f),
        glm::vec3(center_tile_x+0.07f, 0.1f, center_tile_y-0.02f),
        glm::vec3(center_tile_x-0.07f, 0.1f, center_tile_y-0.02f),
        glm::vec3(center_tile_x-0.07f, 0.0f, center_tile_y-0.02f),

        glm::vec3(center_tile_x+0.07f, 0.1f, center_tile_y+0.02f),
        glm::vec3(center_tile_x+0.07f, 0.0f, center_tile_y+0.02f),
        glm::vec3(center_tile_x-0.07f, 0.0f, center_tile_y+0.02f),
        glm::vec3(center_tile_x+0.07f, 0.1f, center_tile_y+0.02f),
        glm::vec3(center_tile_x-0.07f, 0.1f, center_tile_y+0.02f),
        glm::vec3(center_tile_x-0.07f, 0.0f, center_tile_y+0.02f),

        glm::vec3(center_tile_x+0.02f, 0.1f, center_tile_y+0.07f),
        glm::vec3(center_tile_x+0.02f, 0.0f, center_tile_y+0.07f),
        glm::vec3(center_tile_x+0.02f, 0.0f, center_tile_y-0.07f),
        glm::vec3(center_tile_x+0.02f, 0.1f, center_tile_y+0.07f),
        glm::vec3(center_tile_x+0.02f, 0.1f, center_tile_y-0.07f),
        glm::vec3(center_tile_x+0.02f, 0.0f, center_tile_y-0.07f),

        glm::vec3(center_tile_x-0.02f, 0.1f, center_tile_y+0.07f),
        glm::vec3(center_tile_x-0.02f, 0.0f, center_tile_y+0.07f),
        glm::vec3(center_tile_x-0.02f, 0.0f, center_tile_y-0.07f),
        glm::vec3(center_tile_x-0.02f, 0.1f, center_tile_y+0.07f),
        glm::vec3(center_tile_x-0.02f, 0.1f, center_tile_y-0.07f),
        glm::vec3(center_tile_x-0.02f, 0.0f, center_tile_y-0.07f)
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

std::vector<glm::vec2> King::MouvPossible() const{
    std::vector<glm::vec2> list_mouv;

    if (pos.x + 1 <= 8 && pos.y + 1 <= 8){
        list_mouv.push_back(glm::vec2(pos.x+1,pos.y+1));
    }
    if (pos.x + 1 <= 8 && pos.y - 1 > 0){
        list_mouv.push_back(glm::vec2(pos.x+1,pos.y-1));
    }
    if (pos.x - 1 > 0 && pos.y + 1 <= 8){
        list_mouv.push_back(glm::vec2(pos.x-1,pos.y+1));
    }
    if (pos.x - 1 > 0 && pos.y - 1 > 0){
        list_mouv.push_back(glm::vec2(pos.x-1,pos.y-1));
    }
    if (pos.x + 1 <= 8){
        list_mouv.push_back(glm::vec2(pos.x+1,pos.y));
    }
    if (pos.y - 1 > 0){
        list_mouv.push_back(glm::vec2(pos.x,pos.y-1));
    }
    if (pos.y + 1 <= 8){
        list_mouv.push_back(glm::vec2(pos.x,pos.y+1));
    }
    if (pos.x - 1 > 0){
        list_mouv.push_back(glm::vec2(pos.x-1,pos.y));
    }
    return list_mouv;
}

std::vector<glm::vec3> King::getforme() const {
    return forme;
}

std::vector<glm::vec2> King::getbuffer_image() const {
    return buffer_image;
}

void King::updateforme() {
    float center_tile_x=-0.8f+(pos.x-1)*0.2f+0.1f;
    float center_tile_y=-0.8f+(pos.y-1)*0.2f+0.1f;

    forme = {
        glm::vec3(center_tile_x-0.07f, 0.1f, center_tile_y-0.02f),
        glm::vec3(center_tile_x+0.07f, 0.1f, center_tile_y+0.02f),
        glm::vec3(center_tile_x-0.07f, 0.1f, center_tile_y+0.02f),
        glm::vec3(center_tile_x-0.07f, 0.1f, center_tile_y-0.02f),
        glm::vec3(center_tile_x+0.07f, 0.1f, center_tile_y-0.02f),
        glm::vec3(center_tile_x+0.07f, 0.1f, center_tile_y+0.02f),

        glm::vec3(center_tile_x-0.02f, 0.1f, center_tile_y-0.07f),
        glm::vec3(center_tile_x+0.02f, 0.1f, center_tile_y-0.07f),
        glm::vec3(center_tile_x+0.02f, 0.1f, center_tile_y+0.07f),
        glm::vec3(center_tile_x-0.02f, 0.1f, center_tile_y-0.07f),
        glm::vec3(center_tile_x+0.02f, 0.1f, center_tile_y+0.07f),
        glm::vec3(center_tile_x-0.02f, 0.1f, center_tile_y+0.07f),



        glm::vec3(center_tile_x-0.07f, 0.1f, center_tile_y+0.02f),
        glm::vec3(center_tile_x-0.07f, 0.0f, center_tile_y+0.02f),
        glm::vec3(center_tile_x-0.07f, 0.0f, center_tile_y-0.02f),
        glm::vec3(center_tile_x-0.07f, 0.1f, center_tile_y+0.02f),
        glm::vec3(center_tile_x-0.07f, 0.1f, center_tile_y-0.02f),
        glm::vec3(center_tile_x-0.07f, 0.0f, center_tile_y-0.02f),

        glm::vec3(center_tile_x+0.07f, 0.1f, center_tile_y+0.02f),
        glm::vec3(center_tile_x+0.07f, 0.0f, center_tile_y+0.02f),
        glm::vec3(center_tile_x+0.07f, 0.0f, center_tile_y-0.02f),
        glm::vec3(center_tile_x+0.07f, 0.1f, center_tile_y+0.02f),
        glm::vec3(center_tile_x+0.07f, 0.1f, center_tile_y-0.02f),
        glm::vec3(center_tile_x+0.07f, 0.0f, center_tile_y-0.02f),

        glm::vec3(center_tile_x+0.02f, 0.1f, center_tile_y-0.07f),
        glm::vec3(center_tile_x+0.02f, 0.0f, center_tile_y-0.07f),
        glm::vec3(center_tile_x-0.02f, 0.0f, center_tile_y-0.07f),
        glm::vec3(center_tile_x+0.02f, 0.1f, center_tile_y-0.07f),
        glm::vec3(center_tile_x-0.02f, 0.1f, center_tile_y-0.07f),
        glm::vec3(center_tile_x-0.02f, 0.0f, center_tile_y-0.07f),

        glm::vec3(center_tile_x+0.02f, 0.1f, center_tile_y+0.07f),
        glm::vec3(center_tile_x+0.02f, 0.0f, center_tile_y+0.07f),
        glm::vec3(center_tile_x-0.02f, 0.0f, center_tile_y+0.07f),
        glm::vec3(center_tile_x+0.02f, 0.1f, center_tile_y+0.07f),
        glm::vec3(center_tile_x-0.02f, 0.1f, center_tile_y+0.07f),
        glm::vec3(center_tile_x-0.02f, 0.0f, center_tile_y+0.07f),




        glm::vec3(center_tile_x+0.07f, 0.1f, center_tile_y-0.02f),
        glm::vec3(center_tile_x+0.07f, 0.0f, center_tile_y-0.02f),
        glm::vec3(center_tile_x-0.07f, 0.0f, center_tile_y-0.02f),
        glm::vec3(center_tile_x+0.07f, 0.1f, center_tile_y-0.02f),
        glm::vec3(center_tile_x-0.07f, 0.1f, center_tile_y-0.02f),
        glm::vec3(center_tile_x-0.07f, 0.0f, center_tile_y-0.02f),

        glm::vec3(center_tile_x+0.07f, 0.1f, center_tile_y+0.02f),
        glm::vec3(center_tile_x+0.07f, 0.0f, center_tile_y+0.02f),
        glm::vec3(center_tile_x-0.07f, 0.0f, center_tile_y+0.02f),
        glm::vec3(center_tile_x+0.07f, 0.1f, center_tile_y+0.02f),
        glm::vec3(center_tile_x-0.07f, 0.1f, center_tile_y+0.02f),
        glm::vec3(center_tile_x-0.07f, 0.0f, center_tile_y+0.02f),

        glm::vec3(center_tile_x+0.02f, 0.1f, center_tile_y+0.07f),
        glm::vec3(center_tile_x+0.02f, 0.0f, center_tile_y+0.07f),
        glm::vec3(center_tile_x+0.02f, 0.0f, center_tile_y-0.07f),
        glm::vec3(center_tile_x+0.02f, 0.1f, center_tile_y+0.07f),
        glm::vec3(center_tile_x+0.02f, 0.1f, center_tile_y-0.07f),
        glm::vec3(center_tile_x+0.02f, 0.0f, center_tile_y-0.07f),

        glm::vec3(center_tile_x-0.02f, 0.1f, center_tile_y+0.07f),
        glm::vec3(center_tile_x-0.02f, 0.0f, center_tile_y+0.07f),
        glm::vec3(center_tile_x-0.02f, 0.0f, center_tile_y-0.07f),
        glm::vec3(center_tile_x-0.02f, 0.1f, center_tile_y+0.07f),
        glm::vec3(center_tile_x-0.02f, 0.1f, center_tile_y-0.07f),
        glm::vec3(center_tile_x-0.02f, 0.0f, center_tile_y-0.07f)
    };

}
