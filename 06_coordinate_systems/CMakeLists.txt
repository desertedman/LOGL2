cmake_minimum_required(VERSION 3.5.0)
project(LearnOpenGL VERSION 0.1.0 LANGUAGES C CXX)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(
  LearnOpenGL
  src/glad.c
  src/main.cpp
  src/shader.cpp
)

target_include_directories(LearnOpenGL PRIVATE include)
target_link_libraries(LearnOpenGL PRIVATE glfw)

add_custom_command(TARGET LearnOpenGL POST_BUILD
  COMMAND ${CMAKE_COMMAND} -E copy_directory
    ${CMAKE_SOURCE_DIR}/resources
    $<TARGET_FILE_DIR:LearnOpenGL>/resources
)
