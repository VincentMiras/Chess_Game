#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include "pion.h"

class Board {
private:
    std::vector<std::vector<Pion>> grid; // Tableau 2D des pièces
    const int size = 8;                   // Taille de l'échiquier

public:
    Board();                             // Constructeur pour initialiser l'échiquier
    ~Board();                            // Destructeur pour libérer la mémoire

    void initialize(const std::string& path);                   // Place les pièces sur l'échiquier
    Pion getPiece(int row, int col);    // Retourne la pièce sur une case donnée
    void setPiece(int row, int col, Pion piece); // Place une pièce sur une case
    void removePiece(int row, int col);  // Supprime une pièce d'une case
    bool isValidMove(int srcRow, int srcCol, int destRow, int destCol);
    std::vector<std::pair<Pion, Object>> initializePieces(const std::string& path);// Valide un mouvement
};

#endif // BOARD_H
