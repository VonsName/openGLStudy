//
// Created by Administrator on 2020/5/27.
//

#ifndef OPENGLSTUDY_SHADER_H
#define OPENGLSTUDY_SHADER_H

#include <glad.h>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <glm/glm.hpp>

#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

using namespace std;
using namespace glm;

class Shader {
public:
    GLuint id;

    Shader(const GLchar *vertexPath, const GLchar *fragmentPath);

    void use() const;

    void setBool(const string &name, bool value) const;

    void setInt(const string &name, int value) const;

    void setFloat(const string &name, float value) const;

    void setVec2(const string &name, float *f2) const;

    void setMat4(const string &name, mat4 data);
};


#endif //OPENGLSTUDY_SHADER_H
