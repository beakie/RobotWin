#ifndef IMPLEMENTATIONSQT_H
#define IMPLEMENTATIONSQT_H

#include "common.h"
#include <QMatrix4x4>

namespace Implementations
{

class Qt
{
    static QMatrix2x2 getMatrix(Common::Matrix2<float> & matrix)
    {
    }

    static QMatrix3x3 getMatrix(Common::Matrix3<float> & matrix)
    {
    }

    static QMatrix4x4 getMatrix(Common::Matrix4<float> & matrix)
    {
    }

    static Common::Matrix2<float> getMatrix(QMatrix2x2 & matrix)
    {
    }

    static Common::Matrix3<float> getMatrix(QMatrix3x3 & matrix)
    {
    }

    static Common::Matrix4<float> getMatrix(QMatrix4x4 & matrix)
    {
    }
};

}

#endif // IMPLEMENTATIONSQT_H
