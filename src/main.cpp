#include <iostream>

#include <glad/glad.h>
#include <GLFW/glfw3.h>


int main()
{
    if (!glfwInit()) {
        std::cout << "GLFW initialization failed." << std::endl;
        return EXIT_FAILURE;
    }
    std::cout << "GLFW initialization succeeded." << std::endl;

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GLFW_TRUE);

    GLFWwindow* window = glfwCreateWindow(640, 480, "My Title", NULL, NULL);
    if (!window) {
        std::cout << "Window or OpenGL context creation failed." << std::endl;
        glfwTerminate();
        return EXIT_FAILURE;
    }
    std::cout << "Window or OpenGL context creation succeeded." << std::endl;

    glfwMakeContextCurrent(window);
    if (!gladLoadGLLoader((GLADloadproc) glfwGetProcAddress)) {
        std::cout << "Failed to initialize GLAD." << std::endl;
        return EXIT_FAILURE;
    }
    std::cout << "Succeeded initializing GLAD." << std::endl;

    while (!glfwWindowShouldClose(window)) {
        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwDestroyWindow(window);

    glfwTerminate();

    return EXIT_SUCCESS;
}
