#include <qmainwindow.h>

#include "qwt3d_function.h"
#include "qwt3d_plot.h"
#include "qwt3d_surfaceplot.h"

#include "ui_axesmainwindowbase.h"

class DummyBase : public QMainWindow, protected Ui::MainWindow {
public:
    DummyBase(QWidget* parent = 0)
        : QMainWindow(parent) {
    }
};

class AxesMainWindow : public DummyBase {
    Q_OBJECT

public:
    AxesMainWindow(QWidget* parent = 0);
    ~AxesMainWindow();
    Qwt3D::SurfacePlot* plot;
    Qwt3D::Function*    rosenbrock;
    void                resetTics();

public slots:
    void setNumberGap(int gap);
    void setLabelGap(int gap);

    void setSmoothLines(bool);
    void setTicLength(int val);
    void setTicNumber(int degree);

    void standardItems();
    void complexItems();
    void letterItems();
    void timeItems();
    void customScale();

private:
    int tics;
};
