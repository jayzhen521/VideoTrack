#pragma once

#include <map>
#include <string>

#include "RenderingObject.h"
#include "Texture.h"

namespace RenderEngine
{
    /*
    * design pattern: Strategy
    */
    class Filter : public RenderingObject
    {
    public:
        
        Filter();

        virtual void Rendering() override;

    private:
        
        std::map<std::string, Sp_Texture> _textures;

    };

    typedef std::shared_ptr<Filter> Sp_Filter;
};


