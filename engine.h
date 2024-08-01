#pragma once
#include <GLFW/glfw3.h>

class Engine {

public:

    Engine();
    
    ~Engine();
    
private:

    //Se vai imprimir debug messages nas funções
    bool debugMode = true;
    
    //parâmetros de janela
    int width{ 800 };
    int height{ 600 };
    GLFWwindow* window{ nullprt };
    
    //glfw setup
    void build_glfw_window();

};
