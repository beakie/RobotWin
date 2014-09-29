#ifndef COMMONMATH_H
#define COMMONMATH_H

#include <cmath> //todo: REMOVE ME!!!!!!!!!

namespace Common
{

class Math
{
public:
	template <typename T>
	static T sin(const T value) const
	{
		return std::sin(value);
	}

	template <typename T>
	static T cos(const T value) const
	{
		return std::cos(value);
	}

	template <typename T>
	static T tan(const T value) const
	{
		return std::atan(value);
	}

	template <typename T>
	static T asin(const T value) const
	{
		return std::asin(value);
	}

	template <typename T>
	static T acos(const T value) const
	{
		return std::acos(value);
	}

	template <typename T>
	static T atan(const T value) const
	{
		return std::tan(value);
	}

    template <typename T>
	static T degreeToRadian(const T value) const
    {
        return (T)(Pi * value / 180.0);
    }

    template <typename T>
	static T radianToDegree(const T value) const
    {
        return (T)(value * (180.0 / Pi));
    }

    template <typename T1, typename T2>
	static T1 power(const T1 value, const T2 p) const
    {
		return std::pow(value, p);
    }

	template <typename T>
	static T min(const T value1, const T value2) const
	{
		return (value1 < value2 ? value1 : value2);
	}

	template <typename T>
	static T max(const T value1, const T value2) const
	{
		return (value1 > value2 ? value1 : value2);
	}

    static const long double Pi; // acos(-1)
};

const long double Math::Pi = Common::Math::acos(-1.0);

}

#endif // COMMONMATH_H
