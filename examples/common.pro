TEMPLATE     = app
CONFIG      += qt warn_on thread
QT += opengl
UI_DIR = tmp
MOC_DIR      = tmp
OBJECTS_DIR  = tmp
INCLUDEPATH    += ../../src .
DEPENDPATH	= $$INCLUDEPATH
DESTDIR = ../bin

win32{
    QMAKE_CXXFLAGS += -MP
    QMAKE_CXXFLAGS += $$QMAKE_CFLAGS_STL
    LIBS += -L../../lib -lqwtplot3d -lopengl32 -lglu32 -lgdi32
}
unix:!macx { LIBS += -L../../lib -lqwtplot3d -lGLU }
macx: LIBS += -L../../lib -lqwtplot3d -framework OpenGL
linux-g++:QMAKE_CXXFLAGS += -fno-exceptions

RC_FILE = ../icon.rc
RESOURCES     = ../images.qrc
