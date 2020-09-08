#ifndef DATAMENU_H
#define DATAMENU_H

#include <QWidget>
#include <QTimer>
#include <QChart>
#include <QLineSeries>
#include <QVector>
#include "chartview.h"
#include "callout.h"
#include <QSerialPort>
#include <QSerialPortInfo>
#include <macro_define.h>
#include <QVector>
#include <QButtonGroup>
#include "ModbusService/cmdprocess.h"
#include "settingmenu.h"

QT_CHARTS_USE_NAMESPACE

namespace Ui {
class DataMenu;
}


class DataMenu : public QWidget
{
    Q_OBJECT

public:
    explicit DataMenu(QWidget *parent = 0);
    ~DataMenu();



protected:
    void showEvent(QShowEvent *event);

signals:


private slots:

    void uartCheckSlot();
    void chartUpdateTimerSlot();           //波形绘制定时器事件
    void chartTipSlot(QPointF position, bool isHovering);  //鼠标波形tip
    void serialPlcReciveSlot(); //plc 串口接收处理

    void radioButttonShowTab1();
    void radioButttonShowTab2();

    void on_setBtn_clicked();       //设置按键

    void on_setBtnOutPutData_clicked(); // 导出报表按键

    void on_pushButtonUsartStartFlush_clicked();

    void on_pushButtonPolarView_clicked();

    void on_pushButtonWaveReset_clicked();

    void on_pushButtonTEST_clicked();

    void on_pushButtonConnectMcu_clicked();

    void on_pushButtonConnectPlc_clicked();

private:
    void mousePressEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent *event);
    void keyPressEvent(QKeyEvent *event);
    //   bool eventFilter(QObject *watched, QEvent *event);
    void DataClean();
    void execlOutput();
    void motorStart();
    void initDataMenuWnd();
    void initChart();
    void initSerialPortBox();
    void initRadioButtonTable();
    void initOtherValue();
    bool initPlcSerialService();
    bool initMcuSerialService();
    void updateDataCharts();

    Ui::DataMenu *ui;
    ChartView *chartView;
    QChart *chart;
    Callout *tip;
    QLineSeries *chartSeries;
    QLineSeries *chartSeries2;
    QTimer *timerChart;
    QTimer *timerUartStaCheck;
    CmdProcess *qcmdProcess;
    QMap<DataDef::PlcCmdType, DataDef::DataStruct>tempPlcMap;
    QByteArray byteArrayReciveBuff;
    QButtonGroup *btnGroupTableSelect;
};

#endif // DATAMENU_H
