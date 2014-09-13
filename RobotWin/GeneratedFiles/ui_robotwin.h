/********************************************************************************
** Form generated from reading UI file 'robotwin.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROBOTWIN_H
#define UI_ROBOTWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RobotWinClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *RobotWinClass)
    {
        if (RobotWinClass->objectName().isEmpty())
            RobotWinClass->setObjectName(QStringLiteral("RobotWinClass"));
        RobotWinClass->resize(600, 400);
        menuBar = new QMenuBar(RobotWinClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        RobotWinClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(RobotWinClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        RobotWinClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(RobotWinClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        RobotWinClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(RobotWinClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        RobotWinClass->setStatusBar(statusBar);

        retranslateUi(RobotWinClass);

        QMetaObject::connectSlotsByName(RobotWinClass);
    } // setupUi

    void retranslateUi(QMainWindow *RobotWinClass)
    {
        RobotWinClass->setWindowTitle(QApplication::translate("RobotWinClass", "RobotWin", 0));
    } // retranslateUi

};

namespace Ui {
    class RobotWinClass: public Ui_RobotWinClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROBOTWIN_H
