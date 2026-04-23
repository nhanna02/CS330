
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>

float cameraSpeed = 0.05f;
bool perspective = true;

void processInput(GLFWwindow* window) {
    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(window, true);

    if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS)
        std::cout << "Forward\n";
    if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS)
        std::cout << "Backward\n";
    if (glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS)
        std::cout << "Left\n";
    if (glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS)
        std::cout << "Right\n";
    if (glfwGetKey(window, GLFW_KEY_Q) == GLFW_PRESS)
        std::cout << "Up\n";
    if (glfwGetKey(window, GLFW_KEY_E) == GLFW_PRESS)
        std::cout << "Down\n";

    if (glfwGetKey(window, GLFW_KEY_P) == GLFW_PRESS)
        perspective = !perspective;
}

int main() {
    glfwInit();
    GLFWwindow* window = glfwCreateWindow(800, 600, "CS330 Final Scene", NULL, NULL);
    glfwMakeContextCurrent(window);
    glewInit();

    glEnable(GL_DEPTH_TEST);

    while (!glfwWindowShouldClose(window)) {
        processInput(window);

        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        // --- OBJECTS ---
        // Cube
        // Plane
        // Cylinder (approx)
        // Sphere (approx)

        // --- LIGHTING ---
        // Simulated: ambient + diffuse + specular handled in shader

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}
