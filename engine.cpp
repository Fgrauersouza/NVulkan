#include "engine.h"
#include <iostream>

Engine::Engine() {

    if (debugMode) {
        std::cout << "Produzindo a engine\n";
    }
  
    build_glfw_window();

}

void Engine::build_glfw_window() {

     //inicializa glfw
     glfwInit();
     
     //por enquanto sem rendering client - será Vulkan
     glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
     //resizing breaks the swapchain, we'll disable it for now
     glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
     
     //GLFWwindow* glfwCreateWindow (int width, int height, const char *title, GLFWmonitor *monitor, GLFWwindow *share)
 
     if (window = glfwCreateWindow(width, height, "     
     
     
} 
