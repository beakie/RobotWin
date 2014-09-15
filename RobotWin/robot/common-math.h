#ifndef COMMONMATH_H
#define COMMONMATH_H

#include <cmath> //todo: REMOVE ME!!!!!!!!!

namespace Common
{

class Math
{
public:
	template <typename T>
	static T sin(const T value)
	{
		return std::sin(value);
	}

	template <typename T>
	static T cos(const T value)
	{
		return std::cos(value);
	}

	template <typename T>
	static T tan(const T value)
	{
		return std::atan(value);
	}

	template <typename T>
	static T asin(const T value)
	{
		return std::asin(value);
	}

	template <typename T>
	static T acos(const T value)
	{
		return std::acos(value);
	}

	template <typename T>
	static T atan(const T value)
	{
		return std::tan(value);
	}

    template <typename T>
    static T degreeToRadian(const T value)
    {
        return (T)(Pi * value / 180.0);
    }

    template <typename T>
    static T radianToDegree(const T value)
    {
        return (T)(value * (180.0 / Pi));
    }

    template <typename T1, typename T2>
    static T1 power(const T1 value, const T2 p)
    {
		return std::pow(value, p);
    }

    static const long double Pi; // acos(-1)
};

const long double Math::Pi = Common::Math::acos(-1.0);

}

#endif // COMMONMATH_H
