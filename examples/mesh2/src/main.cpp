/********************************************************************
    created:   2003/09/09
    filename:  main.cpp
	
    author:    Micha Bieber	
*********************************************************************/

#include "mesh2mainwindow.h"
#include <qapplication.h>

int main(int argc, char** argv) {
#if (QT_VERSION >= QT_VERSION_CHECK(5, 6, 0))
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif
    QApplication::setColorSpec(QApplication::CustomColor);
    QApplication app(argc, argv);

    if (!QGLFormat::hasOpenGL()) {
        qWarning("This system has no OpenGL support. Exiting.");
        return -1;
    }

    Mesh2MainWindow mainwindow;

    mainwindow.resize(1024, 768);
    mainwindow.show();

    return app.exec();
}
