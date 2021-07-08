#pragma once

#include "RenderingObject.h"

namespace RenderEngine
{
    class Text : public RenderingObject
    {
    public:
        
        Text();

        void Rendering() override;

    };

    typedef std::shared_ptr<Text> Sp_Text;
};


