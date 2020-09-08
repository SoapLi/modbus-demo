#ifndef POLARCHARTSHOW_H
#define POLARCHARTSHOW_H

#include <QWidget>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtCharts/QScatterSeries>
#include <QtCharts/QLineSeries>
#include <QtCharts/QSplineSeries>
#include <QtCharts/QAreaSeries>
#include <QtCharts/QValueAxis>
#include <QtCharts/QPolarChart>
#include <QtCore/QDebug>
 #include <QLineSeries>
#include <QtCharts/QLineSeries>
#include <QtCharts/QChartView>
#include <QtCharts/QPolarChart>
#include <QPolarChart>

#include <QDateTime>
#include <QDebug>

#include <QtMath>

#include <QPen>
#include <QColor>
#include <QPainter>
#include "GloableData/gloabledata.h"

#include "utils.h"
#include "GloableData/datatype.h"
#include <QMessageBox>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QString>
#include <QTextStream>
#include <QDateTime>
\
#include "qt_windows.h"
#include <QVariant>
#include <Qdebug>
#include <QScrollBar>
#include <QSettings>
#include <QFileDialog>
#include <QSettings>
#include "macro_define.h"

#include "polarchartshow.h"
QT_CHARTS_USE_NAMESPACE
namespace Ui {
class polarChartShow;
}

class polarChartShow : public QWidget
{
    Q_OBJECT

public:
    explicit polarChartShow(QWidget *parent = 0);
    ~polarChartShow();

private:
    void keyPressEvent(QKeyEvent *event);
    Ui::polarChartShow *ui;
     QPolarChart *mpolarchart;
     QChartView *chartView ;
};

#endif // POLARCHARTSHOW_H
