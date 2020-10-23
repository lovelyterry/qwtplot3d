include( ../common.pro )

SOURCES = src/main.cpp \
		src/mesh2mainwindow.cpp \
		src/lightingdlg.cpp \
		src/mesh.cpp

HEADERS =  src/mesh2mainwindow.h \
		src/functions.h \
		src/lightingdlg.h \
		src/femreader.h

SOURCES += src/designerworkaround.cpp
HEADERS += src/designerworkaround.h 

FORMS =  src/mesh2mainwindowbase.ui \
         src/lightingdlgbase.ui
