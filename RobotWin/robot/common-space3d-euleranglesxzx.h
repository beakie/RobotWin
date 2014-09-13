#ifndef COMMONSPACE3DROTATIONXZX_H
#define COMMONSPACE3DROTATIONXZX_H

#include "common-space3d-irotation.h"

namespace Common
{

namespace Space3d
{

struct EulerAnglesXZX: IRotation
{
    float Angle1;
    float Angle2;
    float Angle3;

    EulerAnglesXZX()
    {
    }

    EulerAnglesXZX(float angle1, float angle2, float angle3)
    {
        Angle1 = angle1;
        Angle2 = angle2;
        Angle3 = angle3;
    }

    Matrix4<float> getMatrix()
    {
        float c1 = Math::cos(Angle1);
        float c2 = Math::cos(Angle2);
        float c3 = Math::cos(Angle3);
        float s1 = Math::sin(Angle1);
        float s2 = Math::sin(Angle2);
        float s3 = Math::sin(Angle3);

        return Matrix4<float>(c2, -c3*s2, s2*s3, 0, c1*s2, c1*c2*c3-s1*s3, -c3*s1-c1*c2*s3, 0, s1*s2, c1*s3+c2*c3*s1, c1*c3-c2*s1*s3, 0, 0, 0, 0, 1);
    }

};

}

}

#endif // COMMONSPACE3DROTATIONXZX_H
