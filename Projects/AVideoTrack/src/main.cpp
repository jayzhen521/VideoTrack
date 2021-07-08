#include <vector>
#include <utility>
#include <map>
#include <iostream>

#include "IntervalSegmentOrganizer.h"

#include "Filter.h"
#include "Text.h"
#include "FramebufferObject.h"
#include "CompositeRenderingObject.h"

using namespace Algo;
using namespace RenderEngine;

int main()
{

    IntervalSegmentOrganizer tso;

    Sp_IntervalSegment ps_IntervalSegment1(new IntervalSegment(0, 100));
    Sp_IntervalSegment ps_IntervalSegment2(new IntervalSegment(50, 102));
    Sp_IntervalSegment ps_IntervalSegment3(new IntervalSegment(78, 150));
    Sp_IntervalSegment ps_IntervalSegment4(new IntervalSegment(0, 200));
    Sp_IntervalSegment ps_IntervalSegment5(new IntervalSegment(20, 22));
    Sp_IntervalSegment ps_IntervalSegment6(new IntervalSegment(45, 90));
    Sp_IntervalSegment ps_IntervalSegment7(new IntervalSegment(101, 200));
    Sp_IntervalSegment ps_IntervalSegment8(new IntervalSegment(0, 10));
    Sp_IntervalSegment ps_IntervalSegment9(new IntervalSegment(0, 40));
    Sp_IntervalSegment ps_IntervalSegment10(new IntervalSegment(90, 220));

    tso.AddIntervalSegment(ps_IntervalSegment1);
    tso.AddIntervalSegment(ps_IntervalSegment2);
    tso.AddIntervalSegment(ps_IntervalSegment3);
    tso.AddIntervalSegment(ps_IntervalSegment4);
    tso.AddIntervalSegment(ps_IntervalSegment5);
    tso.AddIntervalSegment(ps_IntervalSegment6);
    tso.AddIntervalSegment(ps_IntervalSegment7);
    tso.AddIntervalSegment(ps_IntervalSegment8);
    tso.AddIntervalSegment(ps_IntervalSegment9);
    tso.AddIntervalSegment(ps_IntervalSegment10);

    //std::vector<Sp_IntervalSegment> tso.
    auto x = tso.GetIntervalSegmentByTime(32);

    for (int i = 0; i < 300; i++) {
        const std::multiset<Sp_IntervalSegment, CompStart> Sp_IntervalSegments = tso.GetIntervalSegmentByTime(i);

        std::cout << "in " << i << " SegmentNumber:" << Sp_IntervalSegments.size() << std::endl;

    }

    Sp_IntervalSegment ps_IntervalSegment11(new IntervalSegment(0, 300));
    tso.AddIntervalSegment(ps_IntervalSegment11);

    tso.GetIntervalSegmentByTime(90);
    std::cout << "in--- " << " SegmentNumber:" << tso.GetIntervalSegmentByTime(90).size() << std::endl;

    //Test RenderingObject Compoite
    //rof = render object filter
    //rot = render object text
    Sp_RenderingObject rofA(new Filter());
    Sp_RenderingObject rofB(new Filter());
    Sp_RenderingObject rofC(new Filter());
    Sp_RenderingObject rofD(new Filter());
    Sp_RenderingObject rofE(new Filter());

    Sp_RenderingObject rot(new Text());

    Sp_RenderingObject root(new CompositeRenderingObject());
    
    root->Add(rofA);
    root->Add(rofB);
    root->Add(rofC);
    root->Add(rofD);
    root->Add(rofE);
    
    root->Rendering();

    
    

    
    
    








}