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
    class TempSticker : public RenderingObject
    {
    public:

        TempSticker();

        virtual void SelfRendering() override;

    private:

        std::map<std::string, Sp_Texture> _textures;

    };

    typedef std::shared_ptr<TempSticker> Sp_TempSticker;
};


