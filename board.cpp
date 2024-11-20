#include "board.h"

Board::Board(){

}

Board::~Board(){
    for (Piece* piece :list_pieces){
        delete piece;
    }
    list_pieces.clear();
}

Piece* Board::getPiece(glm::vec2 &pos){
    for (Piece* piece:list_pieces){
        if (piece->getPos()==pos){
        return piece;
        }
    }
    return nullptr;
}

std::vector<Piece*> Board::getPieces(){
    return list_pieces;
}

void Board::move(Piece *piece_joue, glm::vec2 pos_joue){
    if (getPiece(pos_joue)==nullptr){
        piece_joue->setPosition(pos_joue);
    }
}
