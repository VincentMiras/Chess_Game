#include "board.h"

Board::Board() : grid(size, std::vector<Pion*>(size, nullptr)) {
    // Initialise un tableau 8x8 avec nullptr
}

Board::~Board() {
    // Libère la mémoire allouée pour les pièces
    for (int row = 0; row < size; ++row) {
        for (int col = 0; col < size; ++col) {
            delete grid[row][col];
        }
    }
}

void Board::initialize() {
    // Place les pièces sur l'échiquier selon leur position initiale
    for (int col = 0; col < size; ++col) {
        grid[1][col] = new Pion(PieceType::Pawn, PieceColor::White, 1, col);
        grid[6][col] = new Pion(PieceType::Pawn, PieceColor::Black, 6, col);
    }

    // Ajouter les autres pièces (tours, cavaliers, etc.)
    grid[0][0] = new Pion(PieceType::Rook, PieceColor::White, 0, 0);
    grid[0][7] = new Pion(PieceType::Rook, PieceColor::White, 0, 7);
    grid[7][0] = new Pion(PieceType::Rook, PieceColor::Black, 7, 0);
    grid[7][7] = new Pion(PieceType::Rook, PieceColor::Black, 7, 7);

    // Répétez pour les autres pièces (reine, roi, etc.)
}

Pion* Board::getPiece(int row, int col) {
    return grid[row][col];
}

void Board::setPiece(int row, int col, Pion* piece) {
    grid[row][col] = piece;
}

void Board::removePiece(int row, int col) {
    delete grid[row][col];
    grid[row][col] = nullptr;
}

void Board::draw(Renderer& renderer, Shader& shader) {
    // Dessine toutes les pièces de l'échiquier
    for (int row = 0; row < size; ++row) {
        for (int col = 0; col < size; ++col) {
            if (grid[row][col] != nullptr) {
                // Calcule la position à afficher sur le damier
                glm::vec3 position = glm::vec3(col - size / 2.0f + 0.5f, size / 2.0f - row - 0.5f, 0.0f);
                shader.setUniform3fv("delta", position);
                grid[row][col]->draw(renderer, shader);
            }
        }
    }
}

bool Board::isValidMove(int srcRow, int srcCol, int destRow, int destCol) {
    // Implémenter les règles de validation
    // Exemple simple : vérifier les limites
    if (srcRow < 0 || srcRow >= size || srcCol < 0 || srcCol >= size ||
        destRow < 0 || destRow >= size || destCol < 0 || destCol >= size) {
        return false;
    }
    return true; // Ajoutez des règles spécifiques ici
}
