#ifndef COMMONPROJECTION3DISOMETRIC_H
#define COMMONPROJECTION3DISOMETRIC_H

#include "common-projection3d-iprojection.h"

namespace Common
{

namespace Projection3d
{

struct Isometric: IProjection
{
    Matrix4<float> getMatrix()
    {
        return Matrix4<float>(); // todo
    }

	Space2d::Plot<float> getPlot(Space3d::Coordinate coordinate)
    {
		return Space2d::Plot<float>(); // todo
    }
};

}

}

#endif // COMMONPROJECTION3DISOMETRIC_H
