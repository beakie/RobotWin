#ifndef COMMONPROJECTION3DPERSPECTIVE_H
#define COMMONPROJECTION3DPERSPECTIVE_H

#include "common-matrix3.h"
#include "common-projection3d-iprojection.h"
#include "common-space3d-taitbryananglesxyz.h"

namespace Common
{

namespace Projection3d
{

struct Perspective: IProjection
{
    Space3d::Coordinate CameraPosition;
    Space3d::TaitBryanAnglesXYZ CameraRotation;
    Space3d::Coordinate ViewerPosition;

    Matrix4<float> getMatrix()
    {
        Matrix4<float> a(1, 0, 0, 0, 0, Math::cos(-CameraRotation.Angle1), -Math::sin(-CameraRotation.Angle1), 0, 0, Math::sin(-CameraRotation.Angle1), Math::cos(-CameraRotation.Angle1), 0, 0, 0, 0, 1);
        Matrix4<float> b(Math::cos(-CameraRotation.Angle2), 0, Math::sin(-CameraRotation.Angle2), 0, 0, 1, 0, 0, -Math::sin(-CameraRotation.Angle2), 0, Math::cos(-CameraRotation.Angle2), 0, 0, 0, 0, 1);
        Matrix4<float> c(Math::cos(-CameraRotation.Angle3), -Math::sin(-CameraRotation.Angle3), 0, 0, Math::sin(-CameraRotation.Angle3), Math::cos(-CameraRotation.Angle3), 0, 0, 0, 0, 1, 0, 0, 0, 0, 1);
        Matrix4<float> d = a * b * c;// * (Vector4<float>(CameraRotation.Angle1, CameraRotation.Angle2, CameraRotation.Angle3, 0));
        return d;
    }

    Space2d::Plot<float> getPlot(const Space3d::Coordinate &coordinate)
    {
        Vector3<float> o(coordinate.values[0] - CameraPosition.values[0], coordinate.values[1] - CameraPosition.values[1], coordinate.values[2] - CameraPosition.values[2]);
        Vector3<float> c(Math::cos(CameraRotation.Angle1), Math::cos(CameraRotation.Angle2), Math::cos(CameraRotation.Angle3));
        Vector3<float> s(Math::sin(CameraRotation.Angle1), Math::sin(CameraRotation.Angle2), Math::sin(CameraRotation.Angle3));
        Vector3<float> d(c.values[1] * (s.values[2] * o.values[1] + c.values[2] * o.values[0]) - s.values[1] * o.values[2],
                                        s.values[0] * (c.values[1] * o.values[2] + s.values[1] * (s.values[2] * o.values[1] + c.values[2] * o.values[0])) + c.values[0] * (c.values[2] * o.values[1] - s.values[2] * o.values[0]),
                                        c.values[0] * (c.values[1] * o.values[2] + s.values[1] * (s.values[2] * o.values[1] + c.values[2] * o.values[0])) - s.values[0] * (c.values[2] * o.values[1] - s.values[2] * o.values[0]));
        Space2d::Plot<float> p((ViewerPosition.values[2] / d.values[2]) * d.values[0] - ViewerPosition.values[0],
                                        (ViewerPosition.values[2] / d.values[2]) * d.values[1] - ViewerPosition.values[1]);
        return p;
    }
};

}

}

#endif // COMMONPROJECTION3DPERSPECTIVE_H
