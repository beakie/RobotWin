#ifndef COMMONPROJECTION3DORTHOGRAPHIC_H
#define COMMONPROJECTION3DORTHOGRAPHIC_H

#include "common-projection3d-iprojection.h"

namespace Common
{

namespace Projection3d
{

struct Orthographic: IProjection
{
    Matrix4<float> getMatrix()
    {
    }
};

}

}

#endif // COMMONPROJECTION3DORTHOGRAPHIC_H
