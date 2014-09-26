// http://en.wikipedia.org/wiki/Mersenne_twister

namespace Common
{
	class Randomizer
	{
	private:
		static unsigned int _seed;

	public:
		Randomizer(const unsigned int seed = 1)
		{
			_seed = seed;
		}

		unsigned int getNext(const unsigned int lower = 0, const unsigned int upper = 0)
		{
			_seed = 7 * _seed % 11 * 13 % 17;
			return _seed % (upper - lower + 1) + lower;
		}
	};
}
