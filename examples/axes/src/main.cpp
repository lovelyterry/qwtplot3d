/********************************************************************
    created:   2003/09/10
    filename:  main.cpp
	
    author:    Micha Bieber	
*********************************************************************/

#include "axesmainwindow.h"
#include <qapplication.h>

int main(int argc, char** argv) {
#if (QT_VERSION >= QT_VERSION_CHECK(5, 6, 0))
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif
    QApplication app(argc, argv);

    if (!QGLFormat::hasOpenGL()) {
        qWarning("This system has no OpenGL support. Exiting.");
        return -1;
    }

    AxesMainWindow mainwindow;

    mainwindow.show();

    return app.exec();
}
