#include "IntervalSegment.h"

namespace Algo
{
    IntervalSegment::IntervalSegment(uint64_t start, uint64_t end)
        :_start(start), _end(end)
    {
    }

    uint64_t IntervalSegment::GetStart()
    {
        return _start;
    }

    uint64_t IntervalSegment::GetEnd()
    {
        return _end;
    }
}