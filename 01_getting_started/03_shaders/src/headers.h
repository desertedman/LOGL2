#pragma once

// Include GLAD before GLFW
#include <glad/glad.h>
#include <GLFW/glfw3.h>

inline float vertices[] = {
    // positions         // colors
    0.5f,  -0.5f, 0.0f, 1.0f, 0.0f, 0.0f, // bottom right
    -0.5f, -0.5f, 0.0f, 0.0f, 1.0f, 0.0f, // bottom left
    0.0f,  0.5f,  0.0f, 0.0f, 0.0f, 1.0f  // top
};
