//
// Created by Administrator on 2020/6/5.
//

#ifndef OPENGLSTUDY_GLFWWINDOW_H
#define OPENGLSTUDY_GLFWWINDOW_H

#include <glad.h>
#include <glfw3.h>
#include <iostream>

using namespace std;

class GLFWWindow {

private:
    const unsigned int SCR_WIDTH = 800;
    const unsigned int SCR_HEIGHT = 600;
public:
    typedef void *(*GLRun)(void *);

    GLRun glRun = nullptr;
    void *runParameterData = nullptr;
    GLFWwindow *window = nullptr;
public:

    GLFWWindow();

    ~GLFWWindow();

    int init();

    void run(GLRun glRun);

    void processInput() const;
};


#endif //OPENGLSTUDY_GLFWWINDOW_H
