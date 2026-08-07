#pragma once

#include <glad/glad.h>
#include <string>

class Shader {
public:
  unsigned int ID;

  Shader(const char *vertexPath, const char *fragmentPath);

  // Activate shader
  void Use();

  // Utility uniform functions
  void SetBool(const std::string &name, bool value) const;
  void SetInt(const std::string &name, int value) const;
  void SetFloat(const std::string &name, float value) const;

private:
  // Utility function for checking shader compilation/linking errors.
  void checkCompileErrors(unsigned int shader, std::string type);
};
