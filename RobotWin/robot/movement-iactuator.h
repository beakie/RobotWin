#ifndef MOVEMENTIACTUATOR_H
#define MOVEMENTIACTUATOR_H

#include "common-matrix4.h"

namespace Movement
{

//template <typename TIMPLEMENTATION>
struct IActuator
{
public:
    virtual Common::Matrix4<float> getMatrix() = 0;
};

}

#endif // MOVEMENTIACTUATOR_H
