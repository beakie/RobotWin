namespace Common
{
	class Random
	{
	private:
		static unsigned int _seed;

	public:
		Random(const unsigned int seed = 0)
		{
			_seed = seed;
		}

		unsigned int getNext(const unsigned int lower = 0, const unsigned int upper = 0)
		{
			_seed = _seed + 1;
			return _seed;
		}
	};
}
