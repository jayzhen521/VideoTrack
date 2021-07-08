#pragma once

#include "CommonInclude.h"
#include "CompositeRenderingObject.h"

namespace RenderEngine
{
    
    CompositeRenderingObject::CompositeRenderingObject()
    {
    }

    void CompositeRenderingObject::Rendering()
    {
        for (const auto item : _renderingObjects)
        {
            item->Rendering();
        }

        Print("After Sub Rendering, do assembly rendering");
    }

    void CompositeRenderingObject::Add(Sp_RenderingObject renderingObject)
    {
        _renderingObjects.insert(renderingObject);
    }

    void CompositeRenderingObject::Remove(Sp_RenderingObject renderingObject)
    {
        _renderingObjects.erase(renderingObject);
    }

    Sp_RenderingObject CompositeRenderingObject::GetChild(int idx)
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

