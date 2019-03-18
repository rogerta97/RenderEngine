#include "mainwindow.h"

#include <QApplication>
#include <QSurfaceFormat>

class openglwidget* glfuncs;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // I dont even know what is happening but this block just sets some properties to openGL !!  ---------

    QSurfaceFormat format = QSurfaceFormat::defaultFormat();

    format.setMinorVersion(3);
    format.setMajorVersion(3);

    format.setProfile(QSurfaceFormat::CoreProfile);
    format.setDepthBufferSize(24);

    format.setRedBufferSize(8);
    format.setGreenBufferSize(8);
    format.setBlueBufferSize(8);
    format.setAlphaBufferSize(8);

    format.setSwapBehavior(QSurfaceFormat::SwapBehavior::DoubleBuffer);
    format.setOption(QSurfaceFormat::DebugContext);
    QSurfaceFormat::setDefaultFormat(format);

    qDebug("calling");

    // --------------

    MainWindow w;
    w.show();

    return a.exec();
}
