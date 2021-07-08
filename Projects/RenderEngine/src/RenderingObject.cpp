#include "CommonInclude.h"

#include "RenderingObject.h"

namespace RenderEngine
{
    RenderingObject::RenderingObject()
        :_renderingOrder(RenderingOrder::ORDER_0)
    {
    }

    void RenderingObject::SetRenderingOrder(RenderingOrder renderingOrder)
    {
        _renderingOrder = renderingOrder;
    }

    RenderingOrder RenderingObject::GetRenderingOrder()
    {
        return _renderingOrder;
    }

    void RenderingObject::Rendering()
    {
    }

    void RenderingObject::SetProgram(Sp_Program program)
    {
        _program = program;
    }

    Sp_Program RenderingObject::GetProgram()
    {
        return _program;
    }

    void RenderingObject::Add(Sp_RenderingObject renderingObject)
    {
        Print("Error--Add is not allowed");
    }

    void RenderingObject::Remove(Sp_RenderingObject renderingObject)
    {
        Print("Error--Remove is not allowed");
    }

    Sp_RenderingObject RenderingObject::GetChild(int idx)
    {
        Print("Error--GetChild is not allowed");

        return nullptr;

    }
}

