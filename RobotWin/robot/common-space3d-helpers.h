#ifndef COMMONSPACE3DHELPERS_H
#define COMMONSPACE3DHELPERS_H

#include "common-matrix3.h"
#include "common-matrix4.h"
#include "common-vector3.h"
#include "common-space3d-axisangle.h"

namespace Common
{

namespace Space3d
{

class Helpers
{
public:
    static Matrix4<float> getZeroMatrix()
    {
        Matrix4<float> m;
        m.values[0][0] = 1;
        m.values[1][1] = 1;
        m.values[2][2] = 1;
        m.values[3][3] = 1;
        return m;
    }

    template <typename T>
    static Matrix4<T> getMatrix4FromMatrix3(Matrix3<T> matrix)
    {
        Matrix4<T> m;
        m.values[0][0] = matrix.values[0][0];
        m.values[0][1] = matrix.values[0][1];
        m.values[0][2] = matrix.values[0][2];
        m.values[1][0] = matrix.values[1][0];
        m.values[1][1] = matrix.values[1][1];
        m.values[1][2] = matrix.values[1][2];
        m.values[2][0] = matrix.values[2][0];
        m.values[2][1] = matrix.values[2][1];
        m.values[2][2] = matrix.values[2][2];
        m.values[3][3] = 1;
        return m;
    }

    //overload with other rotation matrix
    static Matrix4<float> getRotationMatrix(float x, float y, float z, float rotation)
    {
        return (new AxisAngle(x, y, z, rotation))->getMatrix();
    }

    static Matrix4<float> getScalingMatrix(Vector3<float> scalingVector)
    {
        Matrix4<float> m;
        m.values[0][0] = scalingVector.values[0];
        m.values[1][1] = scalingVector.values[1];
        m.values[2][2] = scalingVector.values[2];
        m.values[3][3] = 1;
        return m;
    }

    static Matrix4<float> getTranslationMatrix(Vector3<float> translationVector)
    {
        Matrix4<float> m;
        m.values[0][0] = 1;
        m.values[0][3] = translationVector.values[0];
        m.values[1][1] = 1;
        m.values[1][3] = translationVector.values[1];
        m.values[2][2] = 1;
        m.values[2][3] = translationVector.values[2];
        m.values[3][3] = 1;
        return m;
    }

    static Matrix4<float> getReflectionMatrix(Vector3<float> scaleVector)
    {
        Matrix4<float> m;
        return m;
    }

    virtual ~Helpers() { }
};

}

}

#endif // COMMONSPACE3DHELPERS_H
