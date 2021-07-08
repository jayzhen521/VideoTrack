#pragma once

#include "RenderingObject.h"

namespace RenderEngine
{
    class Text : public RenderingObject
    {
    public:
        
        Text();

        virtual void SelfRendering() override;

    };

    typedef std::shared_ptr<Text> Sp_Text;
};


