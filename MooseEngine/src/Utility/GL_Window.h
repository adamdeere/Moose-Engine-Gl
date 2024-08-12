#pragma once

#include <GL/glew.h>
#include <GLFW/glfw3.h>

class GL_Window
{
public:
    ~GL_Window();
    bool InitWindow(const unsigned int SCR_WIDTH = 1920, const unsigned int SCR_HEIGHT = 1080);
    void Update(float dt);
    void Render();
    GLFWwindow* GetWindow();
private:

    GLFWwindow* window;
    // glfw: whenever the window size changed (by OS or user resize) this callback function executes
// ---------------------------------------------------------------------------------------------
    static void framebuffer_size_callback(GLFWwindow* window, int width, int height);
   
};

