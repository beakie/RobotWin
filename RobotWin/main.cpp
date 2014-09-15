#include "robotwin.h"
#include "robot/namespaces.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	Movement::Skeletal skeletal = Movement::Skeletal();
	//skeletal.addBone(new Movement::Servo());

	QApplication a(argc, argv);
	RobotWin w;
	w.show();
	return a.exec();
}
