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

        virtual void SelfRendering();

        //Program setting
        void SetProgram(Sp_Program program);
        Sp_Program GetProgram();

        //interface for sub
        virtual void Add(Sp_RenderingObject renderingObject);
        virtual void Remove(Sp_RenderingObject renderingObject);
        virtual Sp_RenderingObject GetChild(int idx);

    protected:

        class Comp
        {
        public:
            inline bool operator()  (const Sp_RenderingObject& lhs, const Sp_RenderingObject& rhs) const {
                return lhs->GetRenderingOrder() < rhs->GetRenderingOrder();
            }
        };

        std::multiset < Sp_RenderingObject, Comp> _renderingObjects;

        Sp_Program _program;

        RenderingOrder _renderingOrder;


    };

    

}





