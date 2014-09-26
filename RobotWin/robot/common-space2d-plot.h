#ifndef COMMONPLOT_H
#define COMMONPLOT_H

#include "common-math.h"
#include "common-vector2.h"

namespace Common
{

namespace Space2d
{

template <typename TVALUE>
struct Plot : Vector2<TVALUE>
{

	Plot()
	{
	}

	Plot(float a, float b)
	{
		values[0] = a;
		values[1] = b;
	}

    float x()
    {
        return values[0];
    }

    float y()
    {
        return values[1];
    }

	float distanceFrom(Plot<TVALUE> plot)
    {
        return Math::power(Math::power(plot.values[0] - values[0], 2) + Math::power(plot.values[1] - values[1], 2), 0.5);
    }

	Plot<TVALUE> getOffset(Plot<TVALUE> plot)
    {
        return plot - *this;
    }

	Plot<TVALUE> operator+(const Plot<TVALUE> &plot) const
    {
		Plot<TVALUE> p;

        //todo

        return p;
    }

	Plot<TVALUE> & operator-(const Plot<TVALUE> &plot)
    {
		Vector2::operator -((Vector2<TVALUE>)plot);

        return *this;
    }

	Plot<TVALUE> & operator=(const Plot<TVALUE> &plot)
    {
		Vector2::operator =((Vector2<TVALUE>)plot);

        return *this;
    }

    virtual ~Plot() { }
};

}

}

#endif // COMMONPLOT_H
