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
    class DefaultEffect : public RenderingObject
    {
    public:
        
        DefaultEffect();

        virtual void SelfRendering() override;

    private:
        
        std::map<std::string, Sp_Texture> _textures;

    };

    typedef std::shared_ptr<DefaultEffect> Sp_DefaultEffect;
};


