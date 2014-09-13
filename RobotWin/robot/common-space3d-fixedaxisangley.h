#ifndef COMMONSPACE3DFIXEDAXISANGLEY_H
#define COMMONSPACE3DFIXEDAXISANGLEY_H

#include "common-math.h"
#include "common-space3d-irotation.h"

namespace Common
{

namespace Space3d
{

struct FixedAxisAngleY: IRotation
{
    float Angle;

    FixedAxisAngleY()
    {
    }

    FixedAxisAngleY(float angle)
    {
        Angle = angle;
    }

    Matrix4<float> getMatrix()
    {
        float c = Math::cos(Angle);
        float s = Math::sin(Angle);

        return Matrix4<float>(c, 0, s, 0, 0, 1, 0, 0, -s, 0, c, 0, 0, 0, 0, 1);
    }

};

}

}

#endif // COMMONSPACE3DFIXEDAXISANGLEY_H
