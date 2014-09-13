#ifndef ROBOTWIN_H
#define ROBOTWIN_H

#include <QtWidgets/QMainWindow>
#include "ui_robotwin.h"

class RobotWin : public QMainWindow
{
	Q_OBJECT

public:
	RobotWin(QWidget *parent = 0);
	~RobotWin();

private:
	Ui::RobotWinClass ui;
};

#endif // ROBOTWIN_H
