#include "pion.h"

Pion::Pion(PieceType t, PieceColor c, int r, int cl){
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
    }
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

glm::vec3 Pion::getColor()  {
    if (color == PieceColor::White)
        return glm::vec3(1.0f, 1.0f, 1.0f);  // Blanc
    return glm::vec3(0.0f, 0.0f, 0.0f);      // Noir
}

glm::vec3 Pion::getOpenGLPosition() {
    float squareSize = 2.0f / 8.0f; // Taille d'une case
    float x = -1.0f + col * squareSize + squareSize / 2.0f; // Centre de la case
    float y = -1.0f + row * squareSize + squareSize / 2.0f; // Centre de la case
    return glm::vec3(x, y, 0.1f); // Position Z légèrement supérieure pour apparaître sur le damier
}

void Pion::draw(Renderer& renderer, Shader& shader) {
    shader.setUniform3fv("color", getColor());

    // Créer un VertexBuffer avec les vertices de la pièce
    VertexBuffer vb(vertices);  // `vertices` est votre std::vector<glm::vec3> dans la classe Pion
    vb.Bind();

    // Créer un VertexArray et lier le VertexBuffer
    VertexArray va;
    va.Bind();
    va.AddBuffer(vb, 0);  // Ajouter le buffer de vertices à l'index 0 du VertexArray

    // Lier la texture si nécessaire (vous pouvez définir des textures pour chaque pièce)
    // Par exemple, si vous avez un objet `Texture`, vous pouvez l'utiliser ici
    // Assurez-vous que la texture est liée dans votre shader avec `shader.setUniform1i("texture", 0);`

    // Dessiner avec le renderer
    renderer.Draw(va);  // Utilisez l'objet `VertexArray` pour le dessin
}
