#ifndef COMMONSPACE3DEULERANGLES_H
#define COMMONSPACE3DEULERANGLES_H

#include "common-matrix4.h"
#include "common-quaternion.h"
#include "common-space3d-euleranglesxyx.h"
#include "common-space3d-euleranglesxzx.h"
#include "common-space3d-euleranglesyxy.h"
#include "common-space3d-euleranglesyzy.h"
#include "common-space3d-eulerangleszxz.h"
#include "common-space3d-eulerangleszyz.h"
#include "common-space3d-taitbryananglesxyz.h"
#include "common-space3d-taitbryananglesxzy.h"
#include "common-space3d-taitbryananglesyxz.h"
#include "common-space3d-taitbryananglesyzx.h"
#include "common-space3d-taitbryanangleszxy.h"
#include "common-space3d-taitbryanangleszyx.h"
#include "common-space3d-irotation.h"
#include "common-space3d-rotationorder.h"

namespace Common
{

namespace Space3d
{

struct TripleRotation: IRotation
{
    IRotation* rotation;

    TripleRotation(RotationOrder::Enum rotationOrder)
    {
        switch (rotationOrder)
        {
        case RotationOrder::XYX:
            rotation = new EulerAnglesXYX();
        case RotationOrder::XZX:
            rotation = new EulerAnglesXZX();
        case RotationOrder::YXY:
            rotation = new EulerAnglesYXY();
        case RotationOrder::YZY:
            rotation = new EulerAnglesYZY();
        case RotationOrder::ZXZ:
            rotation = new EulerAnglesZXZ();
        case RotationOrder::ZYZ:
            rotation = new EulerAnglesZYZ();
        case RotationOrder::XYZ:
            rotation = new TaitBryanAnglesXYZ();
        case RotationOrder::XZY:
            rotation = new TaitBryanAnglesXZY();
        case RotationOrder::YXZ:
            rotation = new TaitBryanAnglesYXZ();
        case RotationOrder::YZX:
            rotation = new TaitBryanAnglesYZX();
        case RotationOrder::ZXY:
            rotation = new TaitBryanAnglesZXY();
        case RotationOrder::ZYX:
            rotation = new TaitBryanAnglesZYX();
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

    virtual ~TripleRotation() {
        delete rotation;
    }
};

}

}

#endif // COMMONSPACE3DEULERANGLES_H
