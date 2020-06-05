cmake_minimum_required(VERSION 3.16)
project(openGLStudy)


include_directories(include/glad)
include_directories(include/GLFW)
include_directories(include/KHR)
include_directories(D:/openGl/include/glm)
set(CMAKE_CXX_STANDARD 11)
link_directories(lib)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -L${CMAKE_SOURCE_DIR}/lib")

add_executable(openGLStudy glad.c main.cpp Shader.cpp Shader.h )
add_executable(shader chapterShader.cpp glad.c Shader.cpp Shader.h stb_image.h)
add_executable(texture chapterShader.cpp glad.c Shader.cpp Shader.h stb_image.h )
add_executable(glmTest  glmTest.cpp)
target_link_libraries(openGLStudy OpenGL32 glfw3)
target_link_libraries(shader OpenGL32 glfw3)
target_link_libraries(glmTest OpenGL32 glfw3)
