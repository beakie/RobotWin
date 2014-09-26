#include "robotwin.h"
#include "robot/namespaces.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	bool** x;
	{
		x = Landscape::Maze::PrimsAlgorithm(4, 4).Walls; // do proper copy
	}

	Common::Array<int> i;

	QApplication a(argc, argv);
	RobotWin w;
	w.show();
	return a.exec();
}
