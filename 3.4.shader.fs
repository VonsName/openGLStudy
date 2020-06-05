#version 330 core
out vec4 FragColor;

in vec3 ourColor;
in vec2 TexCoord;

vec2 rTexCoord;
uniform sampler2D texture1;
uniform sampler2D texture2;
void main()
{
    rTexCoord = vec2(TexCoord.x,TexCoord.y );
    FragColor = mix(texture(texture1,TexCoord) * vec4(ourColor,1.0),texture(texture2,rTexCoord),0.7);
}