#include "robotwin.h"
#include "robot/namespaces.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	Common::Space3d::Coordinate c(0, 0, 0);
	Common::Space3d::EulerAnglesXYX e(0, 0, 0);
	Common::Matrix4f m = e.getMatrix();

	QApplication a(argc, argv);
	RobotWin w;
	w.show();
	return a.exec();
}
