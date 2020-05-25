cmake_minimum_required(VERSION 3.16)
project(openGLStudy)


include_directories(include/glad)
include_directories(include/GLFW)
include_directories(include/KHR)
set(CMAKE_CXX_STANDARD 11)
link_directories(lib)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -L${CMAKE_SOURCE_DIR}/lib")

add_executable(openGLStudy main.cpp glad.c)
target_link_libraries(openGLStudy OpenGL32 glfw3)