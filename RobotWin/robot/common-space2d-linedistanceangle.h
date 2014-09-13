#ifndef COMMONSPACE2DLINEDISTANCEANGLE_H
#define COMMONSPACE2DLINEDISTANCEANGLE_H

#include "common-space2d-plot.h"

namespace Common
{

namespace Space2d
{

struct LineDistanceAngle
{
    float Distance;
    float Angle;

    float x(float y)
    {
        return (y - (Distance / Math::sin(Math::degreeToRadian(Angle)))) / (-(Math::cos(Math::degreeToRadian(Angle)) / Math::sin(Math::degreeToRadian(Angle))));
    }

    float y(float x)
    {
        return (-(Math::cos(Math::degreeToRadian(Angle)) / Math::sin(Math::degreeToRadian(Angle)))) * x + (Distance / Math::sin(Math::degreeToRadian(Angle)));
    }
};

}

}

#endif // COMMONSPACE2DLINEDISTANCEANGLE_H
