#pragma once

#include <memory>
#include <string>

#include "TempDefine.h"

namespace RenderEngine
{
    class Program
    {
    public:
        void AddShader(std::string shaderString, ShaderType shaderType);

        void CompileProgram();

        void UsingProgram();


    };
    
    typedef std::shared_ptr<Program> Sp_Program;
}
