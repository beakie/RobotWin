#ifndef COMMONSPACE3DLINEINTERCEPT_H
#define COMMONSPACE3DLINEINTERCEPT_H

#include "common-space2d-plot.h"

namespace Common
{

namespace Space2d
{

struct LineSlopeIntercept
{
    float Slope;
    float Intercept;

    float x(float y)
    {
        return (y - Intercept) / Slope;
    }

    float y(float x)
    {
        return Intercept + (x * Slope);
    }
};

}

}

#endif // COMMONSPACE3DLINEINTERCEPT_H
