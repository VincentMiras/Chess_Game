cmake_minimum_required(VERSION 3.5)

project(OpenGL_API_V5 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(tp1_opengl main.cpp stb_image.cpp stb_image.h object.h object.cpp uvbuffer.h uvbuffer.cpp texture.h texture.cpp shader.h shader.cpp renderer.h renderer.cpp vertexarray.h vertexarray.cpp vertexbuffer.h vertexbuffer.cpp)

target_link_libraries(tp1_opengl glfw GLEW libGLEW.so libGLU.so libGL.so)
