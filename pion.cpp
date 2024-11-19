#include "pion.h"

Pion::Pion(int r /*= -1*/, int cl /*= -1*/, PieceType t /*= PieceType::None*/, PieceColor c /*= PieceColor::None*/)
    : row(r), col(cl), type(t), color(c), uvertices(std::vector<glm::vec2>()) {

    switch (type) {
        case PieceType::Pawn:
            vertices = createCircle(0.1f, 30);
            break;
        case PieceType::Rook:
            vertices = createRectangle(0.2f, 0.4f);
            break;
        case PieceType::Knight:
            vertices = createRectangle(0.2f, 0.6f);
            break;
        case PieceType::Bishop:
            vertices = { glm::vec3(0.0f, 0.3f, 0.0f), glm::vec3(-0.3f, -0.3f, 0.0f), glm::vec3(0.3f, -0.3f, 0.0f) };
            break;
        case PieceType::Queen:
            vertices = createCircle(0.25f, 30);
            break;
        case PieceType::King:
            vertices = createCircle(0.3f, 30);
            break;
        case PieceType::None:
            vertices = {};
            break;
    }

    uvertices = convertVec3ToVec2();
}


Pion::Pion()
    : row(-1), col(-1), type(PieceType::None), color(PieceColor::None), uvertices(std::vector<glm::vec2>()) {

    // Dans le cas où la pièce est de type "None", pas de forme géométrique
    vertices = {};  // Ou une initialisation spécifique si nécessaire
    uvertices = convertVec3ToVec2();
}



std::vector<glm::vec3> Pion::createCircle(float radius, int segments) {
    std::vector<glm::vec3> vertices;

    // Ajout du centre du cercle
    vertices.push_back(glm::vec3(0.0f, 0.0f, 0.0f));

    // Génération des sommets autour du cercle
    for (int i = 0; i <= segments; ++i) {
        float angle = i * 2.0f * M_PI / segments;
        float x = radius * cos(angle);
        float y = radius * sin(angle);
        vertices.push_back(glm::vec3(x, y, 0.0f));
    }

    return vertices;
}

std::vector<glm::vec3> Pion::createRectangle(float width, float height) {
    std::vector<glm::vec3> vertices = {
        glm::vec3(-width / 2, -height / 2, 0.0f),  // Bas-gauche
        glm::vec3(width / 2, -height / 2, 0.0f),   // Bas-droite
        glm::vec3(width / 2, height / 2, 0.0f),    // Haut-droite

        glm::vec3(-width / 2, -height / 2, 0.0f),  // Bas-gauche
        glm::vec3(width / 2, height / 2, 0.0f),    // Haut-droite
        glm::vec3(-width / 2, height / 2, 0.0f)    // Haut-gauche
    };

    return vertices;
}

std::vector<glm::vec2> Pion::convertVec3ToVec2() {
    std::vector<glm::vec2> uvertices;
    for (const auto& vec3 : vertices) {
        uvertices.emplace_back(vec3.x, vec3.y);
    }
    return uvertices;
}

PieceColor Pion::getColor() {
    return color;  // Retourne la couleur de la pièce, qui est de type PieceColor
}

PieceType Pion::getType() {
    return type;  // Retourne la couleur de la pièce, qui est de type PieceColor
}

glm::vec3 Pion::getOpenGLPosition() {
    float squareSize = 2.0f / 8.0f; // Taille d'une case
    float x = -1.0f + col * squareSize + squareSize / 2.0f; // Centre de la case
    float y = -1.0f + row * squareSize + squareSize / 2.0f; // Centre de la case
    return glm::vec3(x, y, 0.1f); // Position Z légèrement supérieure pour apparaître sur le damier
}
