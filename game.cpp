#include "game.h"

Game::Game()
{
    etat_jeu=Board();
    tour=PieceColor::WHITE;
}

void Game::initialise_game(){

    for (int i = 1; i < 9; i++){
        etat_jeu.addPiece(new Pawn(PieceColor::WHITE, glm::vec2(i, 2)));
        etat_jeu.addPiece(new Pawn(PieceColor::BLACK, glm::vec2(i, 7)));
    }

    //pieces blanches
    etat_jeu.addPiece(new Rook(PieceColor::WHITE, glm::vec2(1, 1)));
    etat_jeu.addPiece(new Knight(PieceColor::WHITE, glm::vec2(2, 1)));
    etat_jeu.addPiece(new Bishop(PieceColor::WHITE, glm::vec2(3, 1)));
    etat_jeu.addPiece(new Queen(PieceColor::WHITE, glm::vec2(4, 1)));
    etat_jeu.addPiece(new King(PieceColor::WHITE, glm::vec2(5, 1)));
    etat_jeu.addPiece(new Bishop(PieceColor::WHITE, glm::vec2(6, 1)));
    etat_jeu.addPiece(new Knight(PieceColor::WHITE, glm::vec2(7, 1)));
    etat_jeu.addPiece(new Rook(PieceColor::WHITE, glm::vec2(8, 1)));

    //pieces noires
    etat_jeu.addPiece(new Rook(PieceColor::BLACK, glm::vec2(1, 8)));
    etat_jeu.addPiece(new Knight(PieceColor::BLACK, glm::vec2(2, 8)));
    etat_jeu.addPiece(new Bishop(PieceColor::BLACK, glm::vec2(3, 8)));
    etat_jeu.addPiece(new Queen(PieceColor::BLACK, glm::vec2(4, 8)));
    etat_jeu.addPiece(new King(PieceColor::BLACK, glm::vec2(5, 8)));
    etat_jeu.addPiece(new Bishop(PieceColor::BLACK, glm::vec2(6, 8)));
    etat_jeu.addPiece(new Knight(PieceColor::BLACK, glm::vec2(7, 8)));
    etat_jeu.addPiece(new Rook(PieceColor::BLACK, glm::vec2(8, 8)));
}

void Game::Make_a_move(){
    std::vector<Piece*> piece_en_jeu;

    for(Piece* piece :etat_jeu.list_pieces) {
        if (piece->color==tour){
            piece_en_jeu.push_back(piece);
        }
    }
    Piece* piece_bouge= piece_en_jeu[rand()% piece_en_jeu.size()];
    std::vector<glm::vec2> moves = piece_bouge->MouvPossible();
    if (!moves.empty()){
        glm::vec2 move= moves[rand()% moves.size()];
        bool valid_mouv=etat_jeu.move(piece_bouge,move);
        if (valid_mouv==true){
            tour=(tour==PieceColor::WHITE)? PieceColor::BLACK:PieceColor::WHITE;
        }
    }
}
