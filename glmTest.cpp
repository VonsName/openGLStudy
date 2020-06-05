//
// Created by Administrator on 2020/6/5.
//

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <iostream>

using namespace glm;
using namespace std;

int main() {

    vec4 vec(1.0f, 0.0f, 0.0f, 1.0f);
    mat4 trans; //4*4单位矩阵
    trans = translate(trans, vec3(1.0f, 1.0f, 0.0f));
    vec = trans * vec;
    cout << vec.x << "," << vec.y << "," << vec.z << endl;
    return 0;
}
