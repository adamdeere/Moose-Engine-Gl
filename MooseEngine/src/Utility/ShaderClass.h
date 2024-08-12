#pragma once

#include <string>
#include <glm/glm.hpp>

class ShaderClass
{
public:
    
    // constructor generates the shader on the fly
    // ------------------------------------------------------------------------
    ShaderClass();
    ~ShaderClass();
    // activate the shader
    // ------------------------------------------------------------------------
    void InitShader(const char* vertexPath = "", const char* fragmentPath = "");
    void use();
    
    void setBool(const std::string& name, bool value) const;
    void setInt(const std::string& name, int value) const;
    void setFloat(const std::string& name, float value) const;

    void setVec2(const std::string& name, const glm::vec2& value) const;
    void setVec3(const std::string& name, const glm::vec3& value) const;
    void setVec4(const std::string& name, const glm::vec4& value) const;

    void setMat2(const std::string& name, const glm::mat2& mat) const;
    void setMat3(const std::string& name, const glm::mat3& mat) const;
    void setMat4(const std::string& name, const glm::mat4& mat) const;

    unsigned int GetID() const;
private:
    // utility function for checking shader compilation/linking errors.
    // ------------------------------------------------------------------------
    static void checkCompileErrors(unsigned int shader, std::string type);

    unsigned int ID;
};