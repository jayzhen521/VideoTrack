#pragma once

#include <cstdint>
#include <memory>

namespace Algo
{
    class IntervalSegment {

    public:
        IntervalSegment(uint64_t start, uint64_t end);

        uint64_t GetStart();
        uint64_t GetEnd();

    private:
        uint64_t _start;
        uint64_t _end;

    };

    typedef std::shared_ptr<IntervalSegment> Sp_IntervalSegment;
}



