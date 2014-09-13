#ifndef COMMONPROJECTION3DWEAKPERSPECTIVEY_H
#define COMMONPROJECTION3DWEAKPERSPECTIVEY_H

#include "common-projection3d-iprojection.h"

namespace Common
{

namespace Projection3d
{

struct WeakPerspectiveY: IProjection
{
    float Scale;

    Matrix4<float> getMatrix()
    {
        return Matrix4<float>(1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1);
    }

    Space2d::Plot getPlot(Space3d::Coordinate coordinate)
    {
        return Space2d::Plot(coordinate.values[0], coordinate.values[2]);
    }
};

}

}

#endif // COMMONPROJECTION3DWEAKPERSPECTIVEY_H
