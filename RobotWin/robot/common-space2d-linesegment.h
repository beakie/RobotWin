#ifndef COMMONSPACE3DLINESEGMENT2D_H
#define COMMONSPACE3DLINESEGMENT2D_H

#include "common-space2d-plot.h"

namespace Common
{

namespace Space2d
{

struct LineSegment
{
    Plot From;
    Plot To;

    float length()
    {
        return From.distanceFrom(To);
    }

    float x(float y)
    {
        return y; // todo
    }

    float y(float x)
    {
        return x; // todo
    }
};

}

}

#endif // COMMONSPACE3DLINESEGMENT2D_H
