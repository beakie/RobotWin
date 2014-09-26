#include "common-array.h"
#include "common-space2d-plot.h"
#include <random>

namespace Landscape
{
	namespace Maze
	{
		class PrimsAlgorithm // better name? Prim's Randomized Maze Algorithm
		{
		public:
			bool** Walls;

		private:
			Common::Array<Common::Space2d::Plot<unsigned int>> _frontier;
			unsigned int _rows;
			unsigned int _columns;

		public:

			PrimsAlgorithm(const unsigned int rows, const unsigned int columns)
			{
				_rows = rows * 2 + 1;
				_columns = columns * 2 + 1;

				Walls = new bool*[_rows];

				for (int x = 0; x < _rows; x++)
				{
					Walls[x] = new bool[_columns];

					for (int y = 0; y < _columns; y++)
						Walls[x][y] = false;
				}

				_frontier = Common::Array<Common::Space2d::Plot<unsigned int>>();

				addCell(0, 0);
			}

			void addCell(unsigned int x, unsigned int y)
			{
				Walls[x][y] = true;

				if (x > 0) // left
					if (Walls[x - 2][y] == false)
						if (!_frontier.exists(Common::Space2d::Plot<unsigned int>(x - 2, y)))
							_frontier.addItem(Common::Space2d::Plot<unsigned int>(x - 2, y));

				if (x < _rows) // right
					if (Walls[x + 2][y] == false)
						if (!_frontier.exists(Common::Space2d::Plot<unsigned int>(x + 2, y)))
							_frontier.addItem(Common::Space2d::Plot<unsigned int>(x + 2, y));

				if (y > 0) // up
					if (Walls[x][y - 2] == false)
						if (!_frontier.exists(Common::Space2d::Plot<unsigned int>(x, y - 2)))
							_frontier.addItem(Common::Space2d::Plot<unsigned int>(x, y - 2));

				if (y < _columns) // down
					if (Walls[x][y + 2] == false)
						if (!_frontier.exists(Common::Space2d::Plot<unsigned int>(x, y + 2)))
							_frontier.addItem(Common::Space2d::Plot<unsigned int>(x, y + 2));

				breakWall();
			}

			void breakWall()
			{
				if (_frontier.count() == 0)
					return;

				unsigned int fIndex = rand() % _frontier.count();

				unsigned int x = _frontier[fIndex].values[0];
				unsigned int y = _frontier[fIndex].values[1];

				//_frontier.removeAt(fIndex);

				Common::Array<Common::Space2d::Plot<unsigned int>> pending;

				if (x > 0) // left
					if (Walls[x - 2][y] == true)
						pending.addItem(Common::Space2d::Plot<unsigned int>(x - 2, y));

				if (x < _rows) // right
					if (Walls[x + 2][y] == true)
						pending.addItem(Common::Space2d::Plot<unsigned int>(x + 2, y));

				if (y > 0) // up
					if (Walls[x][y - 2] == true)
						pending.addItem(Common::Space2d::Plot<unsigned int>(x, y - 2));

				if (y < _columns) // down
					if (Walls[x][y + 2] == true)
						pending.addItem(Common::Space2d::Plot<unsigned int>(x, y + 2));

				unsigned int pIndex = rand() % pending.count();

				Common::Space2d::Plot<unsigned int> next = pending[pIndex];

				Walls[(x + next.values[0]) / 2][(y + next.values[1]) / 2] = true;

				addCell(next.values[0], next.values[1]);
			}

			virtual ~PrimsAlgorithm()
			{
				for (int i = 0; i < _rows; i++)
				{
					delete[] Walls[i];
				}

				delete[] Walls;
			}
		};
	}
}
