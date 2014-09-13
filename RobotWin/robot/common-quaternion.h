#ifndef COMMONQUATERNION_H
#define COMMONQUATERNION_H

namespace Common
{

class Quaternion
{
    float W;
    float X;
    float Y;
    float Z;

    void set(float w, float x, float y, float z)
    {
        W = w;
        X = x;
        Y = y;
        Z = z;
    }

    Quaternion & operator*(const Quaternion &quaternion)
    {
        W = ((W * quaternion.W) - (X * quaternion.X) - (Y * quaternion.Y) - (Z * quaternion.Z));
        X = ((W * quaternion.X) + (X * quaternion.W) + (Y * quaternion.Z) - (Z * quaternion.Y));
        Y = ((W * quaternion.Y) - (X * quaternion.Z) + (Y * quaternion.W) + (Z * quaternion.X));
        Z = ((W * quaternion.Z) + (X * quaternion.Y) - (Y * quaternion.X) + (Z * quaternion.W));

        return *this;
    }
};

}

#endif // COMMONQUATERNION_H
