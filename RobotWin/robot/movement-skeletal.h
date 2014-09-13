#ifndef MOVEMENTSKELETAL_H
#define MOVEMENTSKELETAL_H

#include "common-array.h"
#include "common-parray.h"
#include "movement-bone.h"
#include "movement-servo.h"

namespace Movement
{

struct Skeletal
{
public:
    Common::PArray<Movement::IActuator> Actuators;
    Common::PArray<Movement::Bone> Bones;

    Skeletal()
    {
        Actuators = Common::PArray<Movement::IActuator>();
        Bones = Common::PArray<Movement::Bone>();
    }

    template <typename TActuator>
    unsigned int addBone(TActuator * actuator)
    {
        return addBone(0, actuator);
    }

    template <typename TActuator>
    unsigned int addBone(const unsigned int & parentBone, TActuator * actuator)
    {
        Actuators.addItem2<TActuator>(actuator);

        Bones.addItem(new Bone((parentBone != 0 ? Bones.Items[parentBone] : 0), actuator));

        return Bones.count();
    }

    template <typename TActuator>
    unsigned int addBone(const TActuator & actuator)
    {
        return addBone(0, actuator);
    }

    template <typename TActuator>
    unsigned int addBone(const unsigned int & parentBone, const TActuator & actuator)
    {
        TActuator* t = new TActuator(actuator);

        return addBone<TActuator>(parentBone,  t);
    }

    Bone & operator[] (unsigned int n)
    {
        return *Bones.Items[n];
    }

};

}

#endif // MOVEMENTSKELETAL_H
