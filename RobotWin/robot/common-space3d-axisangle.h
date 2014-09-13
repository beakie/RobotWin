#ifndef COMMONSPACE3DAXISANGLE_H
#define COMMONSPACE3DAXISANGLE_H

#include "common-math.h"
#include "common-matrix4.h"
#include "common-space3d-coordinate.h"
#include "common-space3d-irotation.h"

namespace Common
{

namespace Space3d
{

struct AxisAngle: IRotation
{
    Coordinate Axis;
    float Angle;

    AxisAngle()
    {
    }

    AxisAngle(const Coordinate axis, const float angle)
    {
        Axis = axis;
        Angle = angle;
    }

    AxisAngle(const float x, const float y, const float z, const float angle)
    {
        Axis.values[0] = x;
        Axis.values[1] = y;
        Axis.values[2] = z;
        Angle = angle;
    }

    Matrix4<float> getMatrix()
    {
        float c = Math::cos(Angle);
        float c_ = 1.0f - c;
        float s = Math::sin(Angle);
        Matrix4<float> matrix;
        matrix.values[0][0] = (Axis.values[0] * Axis.values[0]) + ((1 - (Axis.values[0] * Axis.values[0])) * c);
        matrix.values[0][1] = (Axis.values[0] * Axis.values[1] * c_) + (Axis.values[2] * s);
        matrix.values[0][2] = (Axis.values[0] * Axis.values[2] * c_) - (Axis.values[1] * s);
        matrix.values[1][0] = (Axis.values[0] * Axis.values[1] * c_) - (Axis.values[2] * s);
        matrix.values[1][1] = (Axis.values[1] * Axis.values[1]) + ((1 - (Axis.values[1] * Axis.values[1])) * c);
        matrix.values[1][2] = (Axis.values[1] * Axis.values[2] * c_) + (Axis.values[0] * s);
        matrix.values[2][0] = (Axis.values[0] * Axis.values[2] * c_) + (Axis.values[1] * s);
        matrix.values[2][1] = (Axis.values[1] * Axis.values[2] * c_) - (Axis.values[0] * s);
        matrix.values[2][2] = (Axis.values[2] * Axis.values[2]) + ((1 - (Axis.values[2] * Axis.values[2])) * c);
        matrix.values[3][3] = 1;
        return matrix;
    }

    Quaternion getQuaternion()
    {
        return Quaternion();
    }

    virtual ~AxisAngle() { }
};

}

}

#endif // COMMONSPACE3DAXISANGLE_H
