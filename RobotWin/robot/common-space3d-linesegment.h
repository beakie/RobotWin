#ifndef COMMONSPACE3DLINESEGMENT3D_H
#define COMMONSPACE3DLINESEGMENT3D_H

#include "common-math.h"
#include "common-space3d-coordinate.h"

namespace Common
{

namespace Space3d
{

struct LineSegment
{
    Coordinate From;
    Coordinate To;

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

#endif // COMMONSPACE3DLINESEGMENT3D_H
