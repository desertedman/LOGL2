cmake_minimum_required(VERSION 3.5.0)
project(LearnOpenGL VERSION 0.1.0 LANGUAGES C CXX)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(
  LearnOpenGL
  src/main.cpp
  src/camera.cpp
  src/mesh.cpp
  src/model.cpp
  src/shader.cpp
  src/glad.c
)

find_package(glfw3 REQUIRED)
find_package(glm REQUIRED)
find_package(assimp REQUIRED)

target_include_directories(LearnOpenGL PRIVATE include)
target_link_libraries(LearnOpenGL PRIVATE
  glfw
  glm::glm
  assimp::assimp
)

add_custom_command(TARGET LearnOpenGL POST_BUILD
  COMMAND ${CMAKE_COMMAND} -E create_symlink
    ${CMAKE_SOURCE_DIR}/resources
    $<TARGET_FILE_DIR:LearnOpenGL>/resources
)
