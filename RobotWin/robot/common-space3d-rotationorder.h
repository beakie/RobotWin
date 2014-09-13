#ifndef COMMONSPACE3DROTATIONORDER_H
#define COMMONSPACE3DROTATIONORDER_H

namespace Common
{

namespace Space3d
{

struct RotationOrder
{
    enum Enum
    {
        XYX = 1,
        XYZ = 2,
        XZX = 3,
        XZY = 4,
        YXY = 5,
        YXZ = 6,
        YZX = 7,
        YZY = 8,
        ZXY = 9,
        ZXZ = 10,
        ZYX = 11,
        ZYZ = 12
    };
};

}

}

#endif // COMMONSPACE3DROTATIONORDER_H
