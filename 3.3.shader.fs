#version 330 core
out vec4 FragColor;

in vec3 ourColor;
in vec3 outVertex;

void main()
{
    FragColor = vec4(outVertex, 1.0f);
}