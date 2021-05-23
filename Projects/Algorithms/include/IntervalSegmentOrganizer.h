#pragma once

#include <set>

#include "IntervalSegment.h"

namespace Algo
{
    class CompStart
    {
    public:
        inline bool operator()  (const Sp_IntervalSegment& lhs, const Sp_IntervalSegment& rhs) const {
            return lhs->GetStart() < rhs->GetStart();
        }
    };

    class CompEnd
    {
    public:
        inline bool operator()  (const Sp_IntervalSegment& lhs, const Sp_IntervalSegment& rhs) const {
            return lhs->GetEnd() < rhs->GetEnd();
        }
    };


    class IntervalSegmentOrganizer
    {
    public:
        IntervalSegmentOrganizer();

        void AddIntervalSegment(const Sp_IntervalSegment& IntervalSegment);

        void DeleteIntervalSegment(const Sp_IntervalSegment& IntervalSegment);

        const std::multiset<Sp_IntervalSegment, CompStart> GetIntervalSegmentByTime(uint64_t time) const;

    protected:
        std::multiset<Sp_IntervalSegment, CompStart> _timeStartPoint;
        std::multiset<Sp_IntervalSegment, CompEnd> _timeEndPoint;

    };
}


