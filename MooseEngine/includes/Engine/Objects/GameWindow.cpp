#include "GameWindow.h"

GameWindow::GameWindow(GLFWwindow* window)
    :_Window(window)
{
}

void GameWindow::LoadWindow()
{
}

void GameWindow::UpdateWindow(float dt)
{
    processInput(_Window, dt);
}

void GameWindow::RenderWindow()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}

void GameWindow::processInput(GLFWwindow* window, const float dt)
{
    
}




