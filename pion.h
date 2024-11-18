#ifndef PION_H
#define PION_H
#include <iostream>
#include "PieceType.h"
#include "PieceColor.h"
#include <vector>
#include "glm/glm.hpp"
#include "renderer.h"



class Pion
{
public:
    PieceType type;
    PieceColor color;
    int row, col;
    std::vector<glm::vec3> vertices;
    VertexArray va;

    Pion(PieceType t, PieceColor c, int r, int cl);
    std::vector<glm::vec3> createCircle(float radius, int segments);
    std::vector<glm::vec3> createRectangle(float width, float height);
    glm::vec3 getOpenGLPosition();
    glm::vec3 getColor();

    void draw(Renderer& renderer, Shader& shader);

};
#endif // PION_H
