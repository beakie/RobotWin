#ifndef COMMONPROJECTION3DORTHOGRAPHICY_H
#define COMMONPROJECTION3DORTHOGRAPHICY_H

#include "common-projection3d-iprojection.h"

namespace Common
{

namespace Projection3d
{

struct OrthographicY: IProjection
{
    Matrix4<float> getMatrix()
    {
        return Matrix4<float>(1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1); // todo
    }

    Space2d::Plot getPlot(Space3d::Coordinate coordinate)
    {
        return Space2d::Plot(coordinate.values[0], coordinate.values[2]); // todo
    }
};

}

}

#endif // COMMONPROJECTION3DORTHOGRAPHICY_H
