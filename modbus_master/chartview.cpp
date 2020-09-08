#include "chartview.h"

ChartView:: ChartView(QChart *chart, QWidget *parent) :
    QChartView(chart, parent),
    isClicking(false),
    xOld(0), yOld(0)
{
    setRubberBand(QChartView::RectangleRubberBand);
}

void ChartView::mousePressEvent(QMouseEvent *event)
{



    if (event->button() & Qt::LeftButton)
    {
        //        chart()->zoomReset();


    }
    else if (event->button() & Qt::RightButton)
    {
        isClicking = true;
    }

    QChartView::mousePressEvent(event);
}

void ChartView::mouseMoveEvent(QMouseEvent *event)
{
    int x, y;

    if (isClicking)
    {
        if (xOld == 0 && yOld == 0)
        {

        }
        else
        {
            x = event->x() - xOld;
            y = event->y() - yOld;
            chart()->scroll(-x, y);
        }

        xOld = event->x();
        yOld = event->y();

        return;
    }

    QChartView::mouseMoveEvent(event);
}

void ChartView::mouseReleaseEvent(QMouseEvent *event)
{
    if (isClicking) {
        xOld = yOld = 0;

        isClicking = false;
    }

    /* Disable original right click event */
    if (!(event->button() & Qt::RightButton)) {
        QChartView::mouseReleaseEvent(event);


        switch( GloableData::GetInstance()->G_QComboBoxChart->currentIndex())
        {
        case 0:  break;
        case 1:  chart()->axisX()->setRange(0,360); break;
        case 2: chart()->axisY()->setRange(-1000,1000);break;
        default: break;
        }


    }
}

void ChartView::keyPressEvent(QKeyEvent *event)
{
    //    switch (event->key()) {
    //    case Qt::Key_Left:
    //        chart()->scroll(-10, 0);
    //        break;
    //    case Qt::Key_Right:
    //        chart()->scroll(10, 0);
    //        break;
    //    case Qt::Key_Up:
    //        chart()->scroll(0, 10);
    //        break;
    //    case Qt::Key_Down:
    //        chart()->scroll(0, -10);
    //        break;
    //    default:
    //        keyPressEvent(event);
    //        break;
    //    }
}


void ChartView::wheelEvent(QWheelEvent *event)
{

    if (event->delta() > 0)
    {
        chart()->zoom(1.1);
    }
    else
    {
        chart()->zoom(10.0/11);
    }

    QWidget::wheelEvent(event);
}
