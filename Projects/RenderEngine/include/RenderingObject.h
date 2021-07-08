#pragma once

#include <memory>
#include <set>

#include "RenderingOrder.h"
#include "Program.h"

namespace RenderEngine
{
    class RenderingObject;

    typedef std::shared_ptr<RenderingObject> Sp_RenderingObject;

    class RenderingObject
    {
    public:

        RenderingObject();

        void SetRenderingOrder(RenderingOrder renderingOrder);
        RenderingOrder GetRenderingOrder();

        virtual void Rendering();

        //Program setting
        void SetProgram(Sp_Program program);
        Sp_Program GetProgram();

        //interface for sub
        virtual void Add(Sp_RenderingObject renderingObject);
        virtual void Remove(Sp_RenderingObject renderingObject);
        virtual Sp_RenderingObject GetChild(int idx);

    protected:
        Sp_Program _program;

        RenderingOrder _renderingOrder;


    };

    

}





