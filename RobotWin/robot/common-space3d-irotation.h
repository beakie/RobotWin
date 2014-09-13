#ifndef COMMONSPACE3DIRotation_H
#define COMMONSPACE3DIRotation_H

#include "common-math.h"
#include "common-matrix4.h"
#include "common-quaternion.h"

namespace Common
{

namespace Space3d
{

struct IRotation
{

    virtual Matrix4<float> getMatrix() = 0;
    //virtual Quaternion getQuaternion() = 0;

    virtual ~IRotation() { }
};

}

}

#endif // COMMONSPACE3DIRotation_H
