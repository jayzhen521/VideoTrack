#include <algorithm>
#include <iterator>

#include "IntervalSegmentOrganizer.h"

namespace Algo
{
    IntervalSegmentOrganizer::IntervalSegmentOrganizer()
    {
    }

    void IntervalSegmentOrganizer::AddIntervalSegment(const Sp_IntervalSegment& IntervalSegment)
    {
        _timeStartPoint.insert(IntervalSegment);
        _timeEndPoint.insert(IntervalSegment);
    }

    void IntervalSegmentOrganizer::DeleteIntervalSegment(const Sp_IntervalSegment& IntervalSegment)
    {
        _timeStartPoint.erase(IntervalSegment);
        _timeEndPoint.erase(IntervalSegment);
    }

    const std::multiset<Sp_IntervalSegment, CompStart> IntervalSegmentOrganizer::GetIntervalSegmentByTime(uint64_t time) const
    {

        Sp_IntervalSegment IntervalSegment(new IntervalSegment(time, time));

        auto front_end_iterator = _timeStartPoint.upper_bound(IntervalSegment);
        auto tail_begin_iterator = _timeEndPoint.lower_bound(IntervalSegment);

        std::multiset<Sp_IntervalSegment, CompStart> intersect;

        for (auto iter = _timeStartPoint.cbegin(); iter != front_end_iterator; iter++)
        {
            if (std::find(tail_begin_iterator, _timeEndPoint.end(), *iter) != _timeEndPoint.end()) {
                intersect.insert(*iter);
            }
        }

        return std::move(intersect);
    }
}
