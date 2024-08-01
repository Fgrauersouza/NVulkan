#pragma once

//Há duas formas de "incluir" Vulkan - 
#define GLFW_INCLUDE_VULKAN // essa é uma forma.
#include <GLFW/glfw3.h>

//#include <vulkan/vulkan.hpp> - essa é outra forma, escolha a que quiser, por enquanto.


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
    GLFWwindow* window{ nullptr };
    
    //glfw setup
    void build_glfw_window();

};
