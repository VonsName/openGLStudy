//
// Created by Administrator on 2020/6/5.
//

#include "GLFWWindow.h"

void framebuffer_size_callback(GLFWwindow *window, int width, int height);


GLFWWindow::GLFWWindow() {

}

GLFWWindow::~GLFWWindow() {
    this->runParameterData = nullptr;
    this->window = nullptr;
    this->glRun = nullptr;
}

int GLFWWindow::init() {
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    this->window = glfwCreateWindow(SCR_WIDTH, SCR_HEIGHT, "LearnOpenGL", NULL, NULL);
    if (window == NULL) {
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

    if (!gladLoadGLLoader((GLADloadproc) glfwGetProcAddress)) {
        std::cout << "Failed to initialize GLAD" << std::endl;
        return -1;
    }
}

void GLFWWindow::run(GLRun run) {
    this->glRun = run;
    if (this->glRun == nullptr) {
        cout << "run can not ber NULL" << endl;
        return;
    }
    while (!glfwWindowShouldClose(window)) {
        this->processInput();
        glfwSwapBuffers(window);
        this->glRun(this->runParameterData);
        glfwPollEvents();
    }
    glfwTerminate();
}


void GLFWWindow::processInput() const {
    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(window, true);
}

void framebuffer_size_callback(GLFWwindow *window, int width, int height) {
    glViewport(0, 0, width, height);
}
