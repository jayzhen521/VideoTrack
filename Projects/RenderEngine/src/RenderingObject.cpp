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
        for (const auto item : _renderingObjects)
        {
            item->Rendering();
        }

        Print("After Sub Rendering, do assembly rendering");

        SelfRendering();
        
    }

    void RenderingObject::SelfRendering()
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
        _renderingObjects.insert(renderingObject);
    }

    void RenderingObject::Remove(Sp_RenderingObject renderingObject)
    {
        _renderingObjects.erase(renderingObject);
    }

    Sp_RenderingObject RenderingObject::GetChild(int idx)
    {
        //This code maybe useless, we don't have the chance to get child by idx

        if (idx < 0) return nullptr;

        auto ptr = _renderingObjects.begin();
        int i = 0;

        while (ptr != _renderingObjects.end() && i < idx) {
            ptr++;
        }

        return *ptr;

    }
}

