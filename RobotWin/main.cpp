#include "robotwin.h"
#include "robot/namespaces.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	//Movement::Skeletal skeletal = Movement::Skeletal();
	//skeletal.addBone(new Movement::Servo());

	Common::Matrix3f m1 = Common::Matrix3f(1, 2, 3, 3, 2, 1, 2, 1, 3);
	Common::Matrix3f m2 = Common::Matrix3f(4, 5, 6, 6, 5, 4, 4, 6, 5);

	Common::Matrix3f mNew = m1 - m2;

	QApplication a(argc, argv);
	RobotWin w;
	w.show();
	return a.exec();
}
