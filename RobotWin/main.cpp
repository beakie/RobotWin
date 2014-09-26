#include "robotwin.h"
#include "robot/namespaces.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	bool** x;
	{
		unsigned int seed = 1234;
		Landscape::Maze::PrimsAlgorithm(4, 4, seed).Walls;
	}

	Common::Array<int> i;
	i.addItem(123);

	QApplication a(argc, argv);
	RobotWin w;
	w.show();
	return a.exec();
}

// add image.clone()
