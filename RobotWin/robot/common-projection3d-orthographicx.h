#ifndef COMMONPROJECTION3DORTHOGRAPHICX_H
#define COMMONPROJECTION3DORTHOGRAPHICX_H

#include "common-projection3d-iprojection.h"

namespace Common
{

namespace Projection3d
{

struct OrthographicX: IProjection
{
    Matrix4<float> getMatrix()
    {
        return Matrix4<float>(0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1); // todo
    }

    Space2d::Plot<float> getPlot(Space3d::Coordinate coordinate)
    {
        return Space2d::Plot<float>(coordinate.values[1], coordinate.values[2]); // todo
    }
};

}

}

#endif // COMMONPROJECTION3DORTHOGRAPHICX_H
