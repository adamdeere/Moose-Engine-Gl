#pragma once
#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

class GameWindow
{
public:
	GameWindow(GLFWwindow* window);
	void LoadWindow();
	void UpdateWindow(float dt);
	void RenderWindow();

private:
	GLFWwindow* _Window;
	static void processInput(GLFWwindow* window, float dt);
	void mouse_callback(GLFWwindow* window, double xpos, double ypos);
	void scroll_callback(GLFWwindow* window, double xoffset, double yoffset);
	
};

