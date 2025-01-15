#pragma once

#include <glad/glad.h>

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class Shader {
public:
	// Program ID
	unsigned int ID;

	// Constructer and deconstructer
	Shader(const char* vertexPath, const char* fragmentPath);
	~Shader();
	// uses and activates the shader
	void use();
	// utility uniform functions
	void setBool(const std::string& name, bool value) const;
	void setInt(const std::string& name, int value) const;
	void setFloat(const std::string& name, float value) const;

};


