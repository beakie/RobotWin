#ifndef COMMONRANDOMIZER_H
#define COMMONRANDOMIZER_H

// http://en.wikipedia.org/wiki/Mersenne_twister
// http://en.wikipedia.org/wiki/Linear_congruential_generator

namespace Common
{
	class Randomizer
	{
	private:
		unsigned int _seed;

	public:
		Randomizer(const unsigned int seed = 1)
		{
			_seed = seed;
		}

		// Linear Congruential Generator
		unsigned int getNext(const unsigned int lower, const unsigned int upper)
		{
			return getNext() % (upper - lower + 1) + lower;
		}

		unsigned int getNext()
		{
			_seed = _seed * 1664525 + 1013904223;
			return (_seed >> 24);
		}
	};
}

#endif // COMMONRANDOMIZER_H
