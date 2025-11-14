#include <iostream>

#include <GLFW/glfw3.h>


int main()
{
    if (glfwInit()) {
        std::cout << "GLFW initialization successed." << std::endl;
    } else {
        std::cout << "GLFW initialization failed." << std::endl;
    }

    GLFWwindow* window = glfwCreateWindow(640, 480, "My Title", NULL, NULL);
    if (window) {
        std::cout << "Window or OpenGL context creation successed." << std::endl;
    } else {
        std::cout << "Window or OpenGL context creation failed." << std::endl;
    }

    glfwTerminate();

    return 0;
}
