#include "board.h"

Board::Board() : grid(size, std::vector<Pion>(size)) {
    // La grille est déjà initialisée avec des objets Pion par défaut
}

Board::~Board() {
    // Aucune libération de mémoire nécessaire, les objets sont automatiquement détruits
}

std::vector<std::pair<Pion, Object>> Board::initializePieces(const std::string& path) {
    std::vector<std::pair<Pion, Object>> pieces;

    // Initialisation des objets graphiques pour chaque pièce
    for (int row = 0; row < size; ++row) {
        for (int col = 0; col < size; ++col) {
            // Vérifiez si la case contient une pièce valide (type != PieceType::None)
            if (grid[row][col].getType() != PieceType::None) {
                PieceColor color = grid[row][col].getColor();
                std::string texturePath = (color == PieceColor::White) ? path + "/textures/blanc.jpg" : path + "/textures/noir.jpg";
                Object* pieceObject = new Object(grid[row][col].vertices, grid[row][col].uvertices, texturePath);
                pieces.emplace_back(grid[row][col], *pieceObject);  // Ajouter la pièce et l'objet graphique
            } else {
                std::cerr << "Erreur: tentative d'accès à une case vide à (" << row << ", " << col << ")" << std::endl;
            }
        }
    }

    return pieces;
}

void Board::initialize(const std::string& path) {
    // Libérer les anciennes pièces avant de les réinitialiser
    for (int row = 0; row < size; ++row) {
        for (int col = 0; col < size; ++col) {
            std::cerr << "Suppression de la pièce à (" << row << ", " << col << ")" << std::endl;
            removePiece(row, col);
        }
    }

    // Initialiser les pions (lignes 1 et 6)
    for (int col = 0; col < size; ++col) {
        grid[1][col] = Pion(1, col,PieceType::Pawn, PieceColor::White);
        grid[6][col] = Pion(6, col,PieceType::Pawn, PieceColor::Black);
    }

    // Autres pièces (tours, cavaliers, fous, etc.)
    PieceType backRowWhite[] = {PieceType::Rook, PieceType::Knight, PieceType::Bishop, PieceType::Queen, PieceType::King, PieceType::Bishop, PieceType::Knight, PieceType::Rook};
    PieceType backRowBlack[] = {PieceType::Rook, PieceType::Knight, PieceType::Bishop, PieceType::Queen, PieceType::King, PieceType::Bishop, PieceType::Knight, PieceType::Rook};

    for (int col = 0; col < size; ++col) {
        grid[0][col] = Pion(0, col,backRowWhite[col], PieceColor::White);
        grid[7][col] = Pion(7, col,backRowBlack[col], PieceColor::Black);
    }

    // Initialiser les cases vides (on pourrait aussi le faire dans le constructeur de Board)
    for (int row = 2; row < 6; ++row) {
        for (int col = 0; col < size; ++col) {
            grid[row][col] = Pion();  // Case vide (type = PieceType::None)
        }
    }
}

Pion Board::getPiece(int row, int col) {
    return grid[row][col];  // Retourner l'objet directement
}

void Board::setPiece(int row, int col, Pion piece) {
    grid[row][col] = piece;  // Placer l'objet dans la grille
}

void Board::removePiece(int row, int col) {
    if (row < 0 || row >= size || col < 0 || col >= size) {
        std::cerr << "Erreur: indices hors limites dans removePiece (" << row << ", " << col << ")" << std::endl;
        return;
    }

    std::cout << "Suppression de la pièce à (" << row << ", " << col << ")" << std::endl;
    if (grid[row][col].getType() == PieceType::None) {
        std::cerr << "Erreur: tentative de suppression d'une case vide à (" << row << ", " << col << ")" << std::endl;
        return;
    }

    grid[row][col] = Pion();  // Réinitialiser la case avec un pion "vide"
}

bool Board::isValidMove(int srcRow, int srcCol, int destRow, int destCol) {
    if (srcRow < 0 || srcRow >= size || srcCol < 0 || srcCol >= size ||
        destRow < 0 || destRow >= size || destCol < 0 || destCol >= size) {
        return false;
    }
    return true;  // Ajoutez des règles spécifiques ici
}
