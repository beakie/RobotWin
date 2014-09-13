#ifndef COMMONSPACE3DFIXEDAXISANGLEX_H
#define COMMONSPACE3DFIXEDAXISANGLEX_H

#include "common-math.h"
#include "common-space3d-irotation.h"

namespace Common
{

namespace Space3d
{

struct FixedAxisAngleX: IRotation
{
    float Angle;

    FixedAxisAngleX()
    {
    }

    FixedAxisAngleX(float angle)
    {
        Angle = angle;
    }

    Matrix4<float> getMatrix()
    {
        float c = Math::cos(Angle);
        float s = Math::sin(Angle);

        return Matrix4<float>(1, 0, 0, 0, 0, c, -s, 0, 0, s, c, 0, 0, 0, 0, 1);
    }

};

}

}

#endif // COMMONSPACE3DFIXEDAXISANGLEX_H
