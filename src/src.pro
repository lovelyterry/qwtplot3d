TARGET            = qwtplot3d
TEMPLATE          = lib
DESTDIR      	  = ../lib
CONFIG           += qt warn_on thread static
QT               += opengl

INCLUDEPATH    += .

HEADERS += \
    3rdparty/gl2ps/gl2ps.h \
    qwt3d_autoptr.h \
    qwt3d_autoscaler.h \
    qwt3d_axis.h \
    qwt3d_color.h \
    qwt3d_colorlegend.h \
    qwt3d_coordsys.h \
    qwt3d_drawable.h \
    qwt3d_enrichment.h \
    qwt3d_enrichment_std.h \
    qwt3d_function.h \
    qwt3d_global.h \
    qwt3d_graphplot.h \
    qwt3d_gridmapping.h \
    qwt3d_helper.h \
    qwt3d_io.h \
    qwt3d_io_gl2ps.h \
    qwt3d_io_reader.h \
    qwt3d_label.h \
    qwt3d_mapping.h \
    qwt3d_multiplot.h \
    qwt3d_openglhelper.h \
    qwt3d_parametricsurface.h \
    qwt3d_plot.h \
    qwt3d_portability.h \
    qwt3d_scale.h \
    qwt3d_surfaceplot.h \
    qwt3d_types.h \
    qwt3d_volumeplot.h

SOURCES += \
    3rdparty/gl2ps/gl2ps.c \
    qwt3d_autoscaler.cpp \
    qwt3d_axis.cpp \
    qwt3d_color.cpp \
    qwt3d_colorlegend.cpp \
    qwt3d_coordsys.cpp \
    qwt3d_dataviews.cpp \
    qwt3d_drawable.cpp \
    qwt3d_enrichment_std.cpp \
    qwt3d_function.cpp \
    qwt3d_gridmapping.cpp \
    qwt3d_gridplot.cpp \
    qwt3d_io.cpp \
    qwt3d_io_gl2ps.cpp \
    qwt3d_io_reader.cpp \
    qwt3d_label.cpp \
    qwt3d_lighting.cpp \
    qwt3d_meshplot.cpp \
    qwt3d_mousekeyboard.cpp \
    qwt3d_movements.cpp \
    qwt3d_parametricsurface.cpp \
    qwt3d_plot.cpp \
    qwt3d_scale.cpp \
    qwt3d_surfaceplot.cpp \
    qwt3d_types.cpp

win32 {
    QMAKE_CXXFLAGS += -MP
    QMAKE_CXXFLAGS += $$QMAKE_CFLAGS_STL
    QMAKE_CXXFLAGS_RELEASE += /fp:fast /arch:SSE2
}

linux-g++:QMAKE_CXXFLAGS += -fno-exceptions

unix:VERSION = 0.3.2

MOC_DIR           = tmp
OBJECTS_DIR       = tmp
