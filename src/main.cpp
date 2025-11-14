#include <iostream>

#include <GLFW/glfw3.h>


int main()
{
    if (glfwInit()) {
        std::cout << "GLFW initialization successed." << std::endl;
    } else {
        std::cout << "GLFW initialization failed." << std::endl;
    }

    return 0;
}
