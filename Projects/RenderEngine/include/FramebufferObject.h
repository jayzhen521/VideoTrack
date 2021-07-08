#include "CommonInclude.h"

#include <memory>

namespace RenderEngine
{
    class FramebufferObject
    {
    public:
        FramebufferObject();

        void Init();

        void Bind();

        void UnBind();
    };

    std::shared_ptr<FramebufferObject> Sp_FramebufferObject;

}


