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

        class Comp
        {
        public:
            inline bool operator()  (const Sp_RenderingObject& lhs, const Sp_RenderingObject& rhs) const {
                return lhs->GetRenderingOrder() < rhs->GetRenderingOrder();
            }
        };

        std::multiset < Sp_RenderingObject, Comp> _renderingObjects;

    };
}

