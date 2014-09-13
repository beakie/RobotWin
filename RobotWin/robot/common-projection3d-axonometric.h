#ifndef COMMONPROJECTION3DAXONOMETRIC_H
#define COMMONPROJECTION3DAXONOMETRIC_H

#include "common-projection3d-axonometrictype.h"
#include "common-projection3d-dimetric.h"
#include "common-projection3d-iprojection.h"
#include "common-projection3d-isometric.h"
#include "common-projection3d-trimetric.h"

namespace Common
{

namespace Projection3d
{

struct Axonometric: IProjection
{
    IProjection* projection;

    Axonometric(AxonometricType::Enum axonometricType)
    {
        switch (axonometricType)
        {
        case AxonometricType::Isometric:
            projection = new Isometric();
        case AxonometricType::Dimetric:
            projection = new Dimetric();
        case AxonometricType::Trimetric:
            projection = new Trimetric();
        }
    }

    Matrix4<float> getMatrix()
    {
        return projection->getMatrix();
    }

    Space2d::Plot getPlot(Space3d::Coordinate coordinate)
    {
        return projection->getPlot(coordinate);
    }

    virtual ~Axonometric() {
        delete projection;
    }
};

}

}

#endif // COMMONPROJECTION3DAXONOMETRIC_H
