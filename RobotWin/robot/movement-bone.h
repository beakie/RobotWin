#ifndef MOVEMENTBONE_H
#define MOVEMENTBONE_H

#include "common-matrix4.h"
#include "movement-bone.h"
#include "movement-iactuator.h"

namespace Movement
{

struct Bone
{
public:
    Movement::Bone *ParentBone;
    Movement::IActuator *ChildActuator;

    Bone()
    {
        ParentBone = 0;
        ChildActuator = 0;
    }

    Bone(Movement::Bone * parentBone, Movement::IActuator * childActuator)
    {
        ParentBone = parentBone;
        ChildActuator = childActuator;
    }

    Bone(Movement::IActuator *childActuator)
    {
        ParentBone = 0;
        ChildActuator = childActuator;
    }

    Common::Matrix4<float> getMatrix()
    {
        if(ParentBone == 0)
            return ChildActuator->getMatrix();
        else
            return ParentBone->getMatrix() * ChildActuator->getMatrix();
    }

    Bone & operator=(const Bone &bone)
    {
        ParentBone = bone.ParentBone;
        ChildActuator = bone.ChildActuator;
    }
};

}

#endif // MOVEMENTBONE_H
