#ifndef COMMONPLOT_H
#define COMMONPLOT_H

#include "common-math.h"
#include "common-vector2.h"

namespace Common
{

namespace Space2d
{

struct Plot : Vector2<float>
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

    float distanceFrom(Plot plot)
    {
        return Math::power(Math::power(plot.values[0] - values[0], 2) + Math::power(plot.values[1] - values[1], 2), 0.5);
    }

    Plot getOffset(Plot plot)
    {
        return plot - *this;
    }

    Plot operator+(const Plot &plot) const
    {
		Plot p;

        //todo

        return p;
    }

    Plot & operator-(const Plot &plot)
    {
        Vector2::operator -((Vector2<float>)plot);

        return *this;
    }

    Plot & operator=(const Plot &plot)
    {
        Vector2::operator =((Vector2<float>)plot);

        return *this;
    }

    virtual ~Plot() { }
};

}

}

#endif // COMMONPLOT_H
