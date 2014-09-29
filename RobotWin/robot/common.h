#ifndef COMMON_H
#define COMMON_H

#include "common-array.h"
#include "common-imatrix.h"
#include "common-math.h"
#include "common-matrix2.h"
#include "common-matrix3.h"
#include "common-matrix4.h"
#include "common-quaternion.h"
#include "common-random.h"
#include "common-unitvector3.h"
#include "common-vector2.h"
#include "common-vector3.h"
#include "common-vector4.h"

#include "common-projection3d.h"
#include "common-space2d.h"
#include "common-space3d.h"

namespace Common
{

	typedef Matrix2<char> Matrix2c;
	typedef Matrix2<int> Matrix2i;
	typedef Matrix2<float> Matrix2f;

	typedef Matrix3<char> Matrix3c;
	typedef Matrix3<int> Matrix3i;
	typedef Matrix3<float> Matrix3f;

	typedef Matrix4<char> Matrix4c;
	typedef Matrix4<int> Matrix4i;
	typedef Matrix4<float> Matrix4f;

	typedef Vector2<char> Vector2c;
	typedef Vector2<int> Vector2i;
	typedef Vector2<float> Vector2f;

	typedef Vector3<char> Vector3c;
	typedef Vector3<int> Vector3i;
	typedef Vector3<float> Vector3f;

}

#endif // COMMON_H
