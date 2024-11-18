TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

LIBS += -lglfw -lGLEW -lGLU -lGL -lXrandr -lXi -l Xinerama -lX11 -lrt -ldl

SOURCES += \
        main.cpp \
        object.cpp \
        renderer.cpp \
        shader.cpp \
        stb_image/stb_image.cpp \
        texture.cpp \
        uvbuffer.cpp \
        vertexarray.cpp \
        vertexbuffer.cpp

HEADERS += \
    object.h \
    renderer.h \
    shader.h \
    stb_image/stb_image.h \
    texture.h \
    uvbuffer.h \
    vertexarray.h \
    vertexbuffer.h

DISTFILES += \
    shaders/SimpleFragmentShader.fragmentshader \
    shaders/SimpleVertexShader.vertexshader
