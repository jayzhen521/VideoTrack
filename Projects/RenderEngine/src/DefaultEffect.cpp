#include "CommonInclude.h"

#include "DefaultEffect.h"

namespace RenderEngine
{
    DefaultEffect::DefaultEffect()
    {
    }
    void DefaultEffect::SelfRendering()
    {
        Print("Render DefaultEffect");
    }
}