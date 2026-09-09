// Include GLAD before GLFW
#include <glad/glad.h>
#include <GLFW/glfw3.h>

inline const char *vertexShaderSource =
    "#version 330 core\n"
    "layout (location = 0) in vec3 aPos;\n"
    "void main()\n"
    "{\n"
    "   gl_Position = vec4(aPos.x, aPos.y, aPos.z, 1.0);\n"
    "}\0";

inline const char *fragmentShaderSource =
    "#version 330 core\n"
    "out vec4 FragColor;\n"
    "void main()\n"
    "{\n"
    "   FragColor = vec4(1.0f, 0.5f, 0.2f, 1.0f);\n"
    "}\n\0";

inline float vertices[] = {
    -0.5f, -0.5f, 0.0f, // 1
    0.5f,  -0.5f, 0.0f, // 2
    0.0f,  0.5f,  0.0f  // 3
};
