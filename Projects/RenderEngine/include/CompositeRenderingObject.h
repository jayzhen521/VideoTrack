#include "RenderingObject.h"

namespace RenderEngine
{
    class CompositeRenderingObject : public RenderingObject
    {
    public:
        CompositeRenderingObject();

        virtual void Rendering() override;

        virtual void Add(Sp_RenderingObject) override;

        virtual void Remove(Sp_RenderingObject) override;

        virtual Sp_RenderingObject GetChild(int idx) override;

    protected:



    };
}

