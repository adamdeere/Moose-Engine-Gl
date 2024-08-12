#include <GL_Window.h>
#include <GameWindow.h>

const unsigned int SCR_WIDTH = 1920;
const unsigned int SCR_HEIGHT = 1080;
// timing
float deltaTime = 0.0f;	// time between current frame and last frame
float lastFrame = 0.0f;





int main(void)
{
    GL_Window window{};
    // tell GLFW to capture our mouse
    window.InitWindow(SCR_WIDTH, SCR_HEIGHT);
    GLFWwindow* p_Window = window.GetWindow();
    GameWindow g_Window(p_Window);

    glEnable(GL_DEPTH_TEST);
    g_Window.LoadWindow();
    while (!glfwWindowShouldClose(p_Window))
    {
        float currentFrame = static_cast<float>(glfwGetTime());
        deltaTime = currentFrame - lastFrame;
        lastFrame = currentFrame;

        g_Window.UpdateWindow(deltaTime);
        g_Window.RenderWindow();
       
        glfwSwapBuffers(p_Window);
        glfwPollEvents();
    }
    
    return 0;
}

//// process all input: query GLFW whether relevant keys are pressed/released this frame and react accordingly
//// ---------------------------------------------------------------------------------------------------------
//static void processInput(GLFWwindow* window)
//{
//    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
//        glfwSetWindowShouldClose(window, true);
//
//    if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS)
//        camera.ProcessKeyboard(FORWARD, deltaTime);
//    if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS)
//        camera.ProcessKeyboard(BACKWARD, deltaTime);
//    if (glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS)
//        camera.ProcessKeyboard(LEFT, deltaTime);
//    if (glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS)
//        camera.ProcessKeyboard(RIGHT, deltaTime);
//
//    if (glfwGetKey(window, GLFW_KEY_UP) == GLFW_PRESS)
//        camera.ProcessKeyboard(UP, deltaTime);
//
//    if (glfwGetKey(window, GLFW_KEY_DOWN) == GLFW_PRESS)
//        camera.ProcessKeyboard(DOWN, deltaTime);
//
//   
//}
//
//// glfw: whenever the mouse moves, this callback is called
//// -------------------------------------------------------
//void mouse_callback(GLFWwindow* window, double xposIn, double yposIn)
//{
//    float xpos = static_cast<float>(xposIn);
//    float ypos = static_cast<float>(yposIn);
//
//    if (firstMouse)
//    {
//        lastX = xpos;
//        lastY = ypos;
//        firstMouse = false;
//    }
//
//    float xoffset = xpos - lastX;
//    float yoffset = lastY - ypos; // reversed since y-coordinates go from bottom to top
//
//    lastX = xpos;
//    lastY = ypos;
//
//    camera.ProcessMouseMovement(xoffset, yoffset);
//}
//
//// glfw: whenever the mouse scroll wheel scrolls, this callback is called
//// ----------------------------------------------------------------------
//void scroll_callback(GLFWwindow* window, double xoffset, double yoffset)
//{
//    camera.ProcessMouseScroll(static_cast<float>(yoffset));
//}