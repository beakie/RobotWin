#ifndef COMMONPROJECTION3DDIMETRIC_H
#define COMMONPROJECTION3DDIMETRIC_H

#include "common-projection3d-iprojection.h"


// should return matrix3 ???
// overload getmatrix?
// need to make 8 of these

namespace Common
{

namespace Projection3d
{

struct Dimetric: IProjection
{

    Matrix4<float> getMatrix()
    {
        float a; // arcsin(tan(30*)) =~ 35.264
        float b; //45*

        return Matrix4<float>();
//        return (Vector4<float>(0, 0, 0, 0)
//                    * ((Matrix4<float>(1, 0, 0, 0, 0, Math::cos(a), Math::sin(a), 0, 0, -Math::sin(a), Math::cos(a), 0, 0, 0, 0, 1)
//                    * Matrix4<float>(Math::cos(b), 0, -Math::sin(b), 0, 0, 1, 0, 0, Math::sin(b), 0, Math::cos(b), 0, 0, 0, 0, 1))))
//                    * Matrix4<float>(1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);

        //todo: not finished. need rest of multiplication from wiki.
    }

    Space2d::Plot getPlot(Space3d::Coordinate coordinate)
    {
        return Space2d::Plot(); // todo
    }
};

}

}

#endif // COMMONPROJECTION3DDIMETRIC_H
