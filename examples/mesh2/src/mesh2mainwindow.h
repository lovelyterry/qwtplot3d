#ifndef mesh2mainwindow_h__2004_03_07_13_38_begin_guarded_code
#define mesh2mainwindow_h__2004_03_07_13_38_begin_guarded_code

#include "qwt3d_surfaceplot.h"

#include "designerworkaround.h"
#include "ui_mesh2mainwindowbase.h"

class DummyBase : public QMainWindow, protected Ui::MainWindow, protected DesignerWorkaround {
public:
    DummyBase(QWidget* parent = 0)
        : QMainWindow(parent) {
    }
};

class QLabel;
class QTimer;
class QAction;
class ColorMapPreview;

class Mesh2MainWindow : public DummyBase {
    Q_OBJECT
public:
    Mesh2MainWindow(QWidget* parent = 0);
    ~Mesh2MainWindow();

    Qwt3D::SurfacePlot* dataWidget;

public slots:
    void createFunction(QString const& name);
    void createPSurface(QString const& name);
    void setFileType(QString const& name);

    void pickCoordSystem(QAction*);
    void pickPlotStyle(QAction*);
    void pickFloorStyle(QAction*);
    void pickAxesColor();
    void pickBgColor();
    void pickMeshColor();
    void pickNumberColor();
    void pickLabelColor();
    void pickTitleColor();
    void pickDataColor();
    void resetColors();
    void pickNumberFont();
    void pickLabelFont();
    void pickTitleFont();
    void resetFonts();
    void setStandardView();
    void dumpImage();
    void toggleAnimation(bool);
    void toggleProjectionMode(bool);
    void toggleColorLegend(bool);
    void toggleAutoScale(bool val);
    void toggleShader(bool val);
    void rotate();
    void setPolygonOffset(int);

    void showRotate(double x, double y, double z);
    void showShift(double x, double y);
    void showScale(double x, double y, double z);
    void showZoom(double z);
    void showNormals(bool val);
    void setNormalQuality(int);
    void setNormalLength(int);
    bool openColorMap(Qwt3D::ColorVector& cv, QString fname);
    void adaptDataColors(const QString&);
    void updateColorLegend(int majors, int minors);

    void setLeftGrid(bool b);
    void setRightGrid(bool b);
    void setCeilGrid(bool b);
    void setFloorGrid(bool b);
    void setFrontGrid(bool b);
    void setBackGrid(bool b);
    void setGrid(Qwt3D::SIDE, bool);

private:
    QLabel *filenameWidget, *dimWidget, *rotateLabel, *shiftLabel, *scaleLabel, *zoomLabel;
    QTimer* timer;
    int     redrawWait;
    QAction* activeCoordSystem;
    bool                  legend_;
    Qwt3D::StandardColor* col_;
    QString      filetype_;
};

#endif /* include guarded */
