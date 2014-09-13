#ifndef COMMONUNITVECTOR3_H
#define COMMONUNITVECTOR3_H

#include "common-math.h"
#include "common-vector3.h"

namespace Common
{

struct UnitVector3 : Vector3<float>
{
    UnitVector3()
    {

    }

    UnitVector3(Vector3<float> vector)
    {
        float magnitude = Math::power(Math::power(vector.values[0], 2) + Math::power(vector.values[1], 2) + Math::power(vector.values[2], 2), 0.5);
        values[0] = vector.values[0] / magnitude;
        values[1] = vector.values[1] / magnitude;
        values[2] = vector.values[2] / magnitude;
    }

    float i()
    {
        return values[0];
    }

    float j()
    {
        return values[1];
    }

    float k()
    {
        return values[2];
    }

    virtual ~UnitVector3() { }
};

}

#endif // COMMONUNITVECTOR3_H
