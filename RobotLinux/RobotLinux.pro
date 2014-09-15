#-------------------------------------------------
#
# Project created by QtCreator 2014-09-15T12:50:44
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = RobotLinux
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += \
    ../RobotWin/robot/main.cpp

SUBDIRS += \
    ../RobotWin/robot/robot.pro

OTHER_FILES += \
    ../RobotWin/robot/README.md

HEADERS += \
    ../RobotWin/robot/common.h \
    ../RobotWin/robot/common_types.h \
    ../RobotWin/robot/common-array.h \
    ../RobotWin/robot/common-imatrix.h \
    ../RobotWin/robot/common-math.h \
    ../RobotWin/robot/common-matrix2.h \
    ../RobotWin/robot/common-matrix3.h \
    ../RobotWin/robot/common-matrix4.h \
    ../RobotWin/robot/common-parray.h \
    ../RobotWin/robot/common-projection3d.h \
    ../RobotWin/robot/common-projection3d-axonometric.h \
    ../RobotWin/robot/common-projection3d-axonometrictype.h \
    ../RobotWin/robot/common-projection3d-dimetric.h \
    ../RobotWin/robot/common-projection3d-iprojection.h \
    ../RobotWin/robot/common-projection3d-isometric.h \
    ../RobotWin/robot/common-projection3d-orthographic.h \
    ../RobotWin/robot/common-projection3d-orthographicx.h \
    ../RobotWin/robot/common-projection3d-orthographicy.h \
    ../RobotWin/robot/common-projection3d-orthographicz.h \
    ../RobotWin/robot/common-projection3d-perspective.h \
    ../RobotWin/robot/common-projection3d-trimetric.h \
    ../RobotWin/robot/common-projection3d-weakperspective.h \
    ../RobotWin/robot/common-projection3d-weakperspectivex.h \
    ../RobotWin/robot/common-projection3d-weakperspectivey.h \
    ../RobotWin/robot/common-projection3d-weakperspectivez.h \
    ../RobotWin/robot/common-quaternion.h \
    ../RobotWin/robot/common-space2d.h \
    ../RobotWin/robot/common-space2d-linedistanceangle.h \
    ../RobotWin/robot/common-space2d-linesegment.h \
    ../RobotWin/robot/common-space2d-lineslopeintercept.h \
    ../RobotWin/robot/common-space2d-plot.h \
    ../RobotWin/robot/common-space3d.h \
    ../RobotWin/robot/common-space3d-axis3d.h \
    ../RobotWin/robot/common-space3d-axisangle.h \
    ../RobotWin/robot/common-space3d-coordinate.h \
    ../RobotWin/robot/common-space3d-euleranglesxyx.h \
    ../RobotWin/robot/common-space3d-euleranglesxzx.h \
    ../RobotWin/robot/common-space3d-euleranglesyxy.h \
    ../RobotWin/robot/common-space3d-euleranglesyzy.h \
    ../RobotWin/robot/common-space3d-eulerangleszxz.h \
    ../RobotWin/robot/common-space3d-eulerangleszyz.h \
    ../RobotWin/robot/common-space3d-fixedaxisangle.h \
    ../RobotWin/robot/common-space3d-fixedaxisanglex.h \
    ../RobotWin/robot/common-space3d-fixedaxisangley.h \
    ../RobotWin/robot/common-space3d-fixedaxisanglez.h \
    ../RobotWin/robot/common-space3d-helpers.h \
    ../RobotWin/robot/common-space3d-irotation.h \
    ../RobotWin/robot/common-space3d-linesegment.h \
    ../RobotWin/robot/common-space3d-rotationorder.h \
    ../RobotWin/robot/common-space3d-taitbryananglesxyz.h \
    ../RobotWin/robot/common-space3d-taitbryananglesxzy.h \
    ../RobotWin/robot/common-space3d-taitbryananglesyxz.h \
    ../RobotWin/robot/common-space3d-taitbryananglesyzx.h \
    ../RobotWin/robot/common-space3d-taitbryanangleszxy.h \
    ../RobotWin/robot/common-space3d-taitbryanangleszyx.h \
    ../RobotWin/robot/common-space3d-triplerotation.h \
    ../RobotWin/robot/common-unitvector3.h \
    ../RobotWin/robot/common-vector2.h \
    ../RobotWin/robot/common-vector3.h \
    ../RobotWin/robot/common-vector4.h \
    ../RobotWin/robot/emulation.h \
    ../RobotWin/robot/implementations.h \
    ../RobotWin/robot/implementations-qt.h \
    ../RobotWin/robot/movement.h \
    ../RobotWin/robot/movement-bone.h \
    ../RobotWin/robot/movement-iactuator.h \
    ../RobotWin/robot/movement-servo.h \
    ../RobotWin/robot/movement-skeletal.h \
    ../RobotWin/robot/namespaces.h \
    ../RobotWin/robot/vision.h \
    ../RobotWin/robot/vision-houghtransform.h \
    ../RobotWin/robot/vision-itechnique.h
