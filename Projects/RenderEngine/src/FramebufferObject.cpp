#include "FramebufferObject.h"

namespace RenderEngine
{
    FramebufferObject::FramebufferObject()
    {
        Print("FBO Constructor");
    }

    void FramebufferObject::Init()
    {
        Print("FBO init");
    }

    void FramebufferObject::Bind()
    {
        Print("Bind FBO");
    }

    void FramebufferObject::UnBind()
    {
        Print("Unbind FBO to 0");
    }

}
