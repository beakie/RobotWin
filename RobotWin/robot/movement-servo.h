#ifndef MOVEMENTSERVO_H
#define MOVEMENTSERVO_H

#include "common-space3d-coordinate.h"
#include "movement-iactuator.h"
#include "movement-skeletal.h"

namespace Movement
{

struct Servo: IActuator
{
    int u;
    Servo()
    {

    }

    Servo(Common::Space3d::Coordinate position, int someParam)
    {
        u = someParam;
    }

    Common::Matrix4<float> getMatrix()
    {
        return Common::Matrix4<float>(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    }
};

}

#endif // MOVEMENTSERVO_H
