#ifndef COMMONPROJECTION3DWEAKPERSPECTIVE_H
#define COMMONPROJECTION3DWEAKPERSPECTIVE_H

#include "common-projection3d-iprojection.h"

namespace Common
{

namespace Projection3d
{

struct WeakPerspective: IProjection
{
    Matrix4<float> getMatrix()
    {
    }
};

}

}

#endif // COMMONPROJECTION3DWEAKPERSPECTIVE_H
