#ifndef SHADER_H
#define SHADER_H

#include <glad/glad.h>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class Shader {
    public:
        Shader(const std::string& vertexPath, const std::string& fragmentPath) 
        {
            
        }
        void use();
    
}

#endif