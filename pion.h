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
    std::vector<glm::vec2> uvertices;

    Pion(int r, int cl, PieceType t, PieceColor c);
    Pion();
    std::vector<glm::vec3> createCircle(float radius, int segments);
    std::vector<glm::vec3> createRectangle(float width, float height);
    glm::vec3 getOpenGLPosition();
    PieceColor getColor();
    PieceType getType();
    std::vector<glm::vec2> convertVec3ToVec2();

};
#endif // PION_H
