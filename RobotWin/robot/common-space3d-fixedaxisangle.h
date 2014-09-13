#ifndef COMMONSPACE3DFIXEDAXISANGLE_H
#define COMMONSPACE3DFIXEDAXISANGLE_H

#include "common-space3d-axis3d.h"
#include "common-space3d-fixedaxisanglex.h"
#include "common-space3d-fixedaxisangley.h"
#include "common-space3d-fixedaxisanglez.h"

namespace Common
{

namespace Space3d
{

struct FixedAxisAngle: IRotation
{
    IRotation* rotation;

    FixedAxisAngle(Axis3d::Enum axis)
    {
        switch (axis)
        {
        case Axis3d::X:
            rotation = new FixedAxisAngleX();
        case Axis3d::Y:
            rotation = new FixedAxisAngleY();
        case Axis3d::Z:
            rotation = new FixedAxisAngleZ();
        }
    }

    Matrix4<float> getMatrix()
    {
        return rotation->getMatrix();
    }

//    Matrix4<float> getQuaternion()
//    {
//        return rotation->getQuaternion();
//    }
};

}

}

#endif // COMMONSPACE3DFIXEDAXISANGLE_H
