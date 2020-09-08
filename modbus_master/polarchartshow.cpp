#include "polarchartshow.h"
#include "ui_polarchartshow.h"
#include <QApplication>
#include <QScreen>


polarChartShow::polarChartShow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::polarChartShow)
{
    ui->setupUi(this);



    const qreal angularMin = 0;
    const qreal angularMax = 360;

    const qreal radialMin = -200;
    const qreal radialMax = 200;

    QLineSeries *series3 = new QLineSeries();
    series3->setName("ab磁场");
    series3->replace(GloableData::GetInstance()->pointList2);

    QPolarChart *chart = new QPolarChart();
    chart->addSeries(series3);

    chart->setTitle("磁场饼图");


    QValueAxis *angularAxis = new QValueAxis();
    angularAxis->setTickCount(9); // First and last ticks are co-located on 0/360 angle.
    angularAxis->setLabelFormat("%.1f");
    angularAxis->setShadesVisible(true);
    angularAxis->setShadesBrush(QBrush(QColor(249, 249, 255)));
    chart->addAxis(angularAxis, QPolarChart::PolarOrientationAngular);

    QValueAxis *radialAxis = new QValueAxis();
    radialAxis->setTickCount(9);
    radialAxis->setLabelFormat("%d");
    chart->addAxis(radialAxis, QPolarChart::PolarOrientationRadial);

    series3->attachAxis(radialAxis);
    series3->attachAxis(angularAxis);

    radialAxis->setRange(radialMin, radialMax);
    angularAxis->setRange(angularMin, angularMax);

    chartView = new QChartView();
    chartView->setChart(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    ui->horizontalLayout->addWidget(chartView);
    mpolarchart = chart;
    //GloableData::GetInstance()->G_chartViewPolar = chartView;



}

polarChartShow::~polarChartShow()
{
    delete ui;
}

void polarChartShow::keyPressEvent(QKeyEvent *event)
{


    if(event->modifiers() == Qt::ControlModifier)
    {

        if(event->key() == Qt::Key_1)
        {
            mpolarchart->zoomIn();

        }
        if(event->key() == Qt::Key_2)
        {
            mpolarchart->zoomOut();
        }
        if(event->key() == Qt::Key_3)
        {
            QScreen * screen2 = QGuiApplication::primaryScreen();
            QPixmap p2 = screen2->grabWindow( chartView->winId());
            QImage image2 = p2.toImage();
            image2.save(QCoreApplication::applicationDirPath()+"/chart2.png");
        }
    }
}
