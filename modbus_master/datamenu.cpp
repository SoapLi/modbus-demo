#include "datamenu.h"
#include "ui_datamenu.h"
#include <QDateTime>
#include <QDebug>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QtMath>
#include <QPen>
#include <QColor>
#include <QPainter>
#include <QMessageBox>
#include <QString>
#include <QTextStream>
#include <QDateTime>
#include "qt_windows.h"
#include <QVariant>
#include <QScrollBar>
#include <QSettings>
#include <QFileDialog>
#include <QSettings>
#include <QApplication>
#include <QScreen>
#include <QInputDialog>
#include "ModbusService/mcucommunicateservice.h"
#include "ModbusService/plccommunicateservice.h"
#include "GloableData/gloabledata.h"
#include "./ModbusService/cmdtype.h"
#include "utils.h"
#include "GloableData/datatype.h"
#include "./execltool/excelengine.h"
#include "macro_define.h"

#include "polarchartshow.h"
#include "settingmenu.h"

DataMenu::DataMenu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DataMenu),
    chart(new QChart),
    tip(0),
    timerChart(new QTimer),
    timerUartStaCheck(new QTimer)
{
    ui->setupUi(this);
    this->setWindowTitle("UPPER DEMO");
    initOtherValue();
    initChart();
    initSerialPortBox();
    connect(timerChart, SIGNAL(timeout()),               this,    SLOT(chartUpdateTimerSlot()));
    connect(chartSeries,     SIGNAL(hovered(QPointF, bool)), this,    SLOT(chartTipSlot(QPointF,bool)));
    connect(chartSeries2,     SIGNAL(hovered(QPointF, bool)), this,    SLOT(chartTipSlot(QPointF,bool)));
    connect(timerUartStaCheck, SIGNAL(timeout()),       this,    SLOT(uartCheckSlot()));
    timerChart->setInterval(TIMER_CHART_INTERVAL);
    GloableData::GetInstance()->G_QComboBoxChart = ui->comboBoxChart;
}

DataMenu::~DataMenu()
{
    delete ui;
}




void DataMenu::showEvent(QShowEvent *event)
{

}


void DataMenu::paintEvent(QPaintEvent *event)
{

}


void DataMenu::keyPressEvent(QKeyEvent *event)
{
    if(event->modifiers() == Qt::ControlModifier)
    {
        if(event->key() == Qt::Key_1)
        {
            QMessageBox::StandardButton button;
            button = QMessageBox::question(this, tr("notify"),
                                           QString(tr("hello")),
                                           QMessageBox::Yes | QMessageBox::No);
            if (button == QMessageBox::No) {


            }
            else if (button == QMessageBox::Yes) {


            }
        }
    }
}




void DataMenu::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::RightButton){


    }
}

void DataMenu::serialPlcReciveSlot()
{
    QByteArray temp = GloableData::GetInstance()->serialPlc->readAll();

    if(!temp.isEmpty())
    {
        byteArrayReciveBuff.append(temp);
        if(byteArrayReciveBuff.contains(0x03))
        {


            byteArrayReciveBuff.clear();
        }
    }

}

bool DataMenu::initPlcSerialService()
{
    QSerialPort * serial = new QSerialPort;
    serial->setPortName(ui->portCbx_plc->currentText());
    serial->open(QIODevice::ReadWrite);
    serial->setBaudRate(ui->rateCbx_plc->currentText().toInt());
    serial->setDataBits(QSerialPort::Data7);
    serial->setParity(QSerialPort::EvenParity);
    serial->setStopBits(QSerialPort::OneStop);
    serial->setFlowControl(QSerialPort::NoFlowControl);
    if(NULL != GloableData::GetInstance()->serialPlc)
    {
        return true;
    }
    if(!serial->isOpen())
    {
        qDebug() << "initPlcSerialService failed!";
        QMessageBox::about(NULL, "报告", QString("plc串口打开失败！"));
        //  this->close();
        return false;
    }
    GloableData::GetInstance()->serialPlc= serial;

#if 0    //是否需要plc 线程
    PlcCommunicateService *plcService = PlcCommunicateService::GetInstance();    //服务线程初始化
    plcService->start();
    qDebug()<<" PLC SERVICE INIT OK!";
#endif
    connect(GloableData::GetInstance()->serialPlc, SIGNAL(readyRead()), this, SLOT(serialPlcReciveSlot()));
    return true;
}

bool DataMenu::initMcuSerialService()
{
    //init RTU
    modbus_t *mbTmp ;
    mbTmp = modbus_new_rtu(ui->portCbx_stm->currentText().toLatin1().data(),
                           ui->rateCbx_stm->currentText().toInt(),
                           'N',
                           8,
                           1);
    if(NULL == mbTmp)
    {
        qDebug() << "initMcuSerialService failed!";
        return false;
    }
    modbus_set_slave(mbTmp, 1);  //modbus slaver addr
    if(0 != modbus_connect(mbTmp))
    {
        QMessageBox::about(NULL, "报告", QString("mcu串口打开失败!"));
        modbus_close(GloableData::GetInstance()->serialMcuModbus);
        modbus_free(GloableData::GetInstance()->serialMcuModbus);
        GloableData::GetInstance()->serialMcuModbus = NULL;
        return false;
    }
    struct timeval t;
    t.tv_sec=0;
    t.tv_usec=1000000;   //设置modbus超时时间为1000毫秒
    modbus_set_response_timeout(mbTmp, &t);
    GloableData::GetInstance()->serialMcuModbus = mbTmp;
    McuCommunicateService *mcuService = McuCommunicateService::GetInstance();    //服务线程初始化
    mcuService->start();
    return true;
}

#define XL 0
#define XR 360
#define YU 1000
#define YD -1000
void DataMenu::initChart()
{
    chartSeries = new QLineSeries;
    chartSeries->setColor(Qt::red);
    chartSeries->setName("series1");
    chart->addSeries(chartSeries);

    chartSeries2 = new QLineSeries;
    chartSeries2->setColor(Qt::blue);
    chartSeries2->setName("series2");
    chart->addSeries(chartSeries2);

   // series1->setUseOpenGL(true);
   // series2->setUseOpenGL(true);

    chart->createDefaultAxes();
    chart->axisY()->setRange(YD, YU);
    chart->axisX()->setRange(XL, XR);
    chart->axisX()->setTitleFont(QFont("Microsoft YaHei", 10, QFont::Normal, true));
    chart->axisY()->setTitleFont(QFont("Microsoft YaHei", 10, QFont::Normal, true));

    chart->axisX()->setTitleText("X");
    chart->axisY()->setTitleText("Y");

    chart->axisX()->setGridLineVisible(true);
    chart->axisY()->setGridLineVisible(true);
    chart->axisY()->setGridLineColor(QColor(192,192,192));
    chart->axisX()->setGridLineColor(QColor(192,192,192));
    chart->setTheme(QChart::ChartThemeDark);
    /* hide legend */
    chart->legend()->hide();
    chartView = new ChartView(chart);
   // chartView->setRenderHint(QPainter::Antialiasing);
   // chartView->setRenderHint(QPainter::Qt4CompatiblePainting);
    ui->horizontalLayout_chartview->addWidget(chartView);
}

void DataMenu::initOtherValue()
{
    qcmdProcess = CmdProcess::GetInstance();
    tempPlcMap =qcmdProcess->getPlcMap();
    this->setMinimumSize(1186,593);
    this->setMaximumSize(1186,593);
    byteArrayReciveBuff.clear();
}

void DataMenu::initSerialPortBox()
{
    //初始化控件
    /************************************* 串口：MCU ****************************************************/
    //1、COM口
    auto ports = QSerialPortInfo::availablePorts();
    for (auto port : ports)
    {
        ui->portCbx_stm->addItem(port.portName());
    }
    //2、波特率
    QList<int> rateList;
    rateList << 9600 << 256000 << 115200 << 38400;
    for (auto rate : rateList)
    {
        ui->rateCbx_stm->addItem(QString::number(rate));
    }

    /************************************* 串口：PLC ****************************************************/
    //1、COM口
    auto portsPlc = QSerialPortInfo::availablePorts();
    for (auto portPlc : portsPlc)
    {
        ui->portCbx_plc->addItem(portPlc.portName());
    }
    //2、波特率
    QList<int> rateListPlc;
    rateListPlc  << 38400 << 9600 << 115200 << 19200;
    for (auto ratePlc : rateListPlc)
    {
        ui->rateCbx_plc->addItem(QString::number(ratePlc));
    }
}


void DataMenu::initRadioButtonTable()
{
    btnGroupTableSelect = new QButtonGroup(this);
    btnGroupTableSelect->addButton(ui->radioButtonTabel1, RADIOBUTTON_TABLE_1);
    btnGroupTableSelect->addButton(ui->radioButtonTabel2, RADIOBUTTON_TABLE_2);
    ui->radioButtonTabel1->setChecked(true);
    connect(ui->radioButtonTabel1, SIGNAL(clicked()), this, SLOT(radioButttonShowTab1()));
    connect(ui->radioButtonTabel2, SIGNAL(clicked()), this, SLOT(radioButttonShowTab2()));
}


void DataMenu::radioButttonShowTab1()
{

}
void DataMenu::radioButttonShowTab2()
{

}


void DataMenu::chartUpdateTimerSlot()
{
    updateDataCharts();
}

void DataMenu::chartTipSlot(QPointF position, bool isHovering)
{
    if (tip == 0)
        tip = new Callout(chart);
    if (isHovering)
    {
        tip->setText(QString("X: %1 \nY: %2 ").arg(position.x()).arg(position.y()));
        tip->setAnchor(position);
        tip->setZValue(11);
        tip->updateGeometry();
        tip->show();
    }
    else
    {
        tip->hide();
    }
}


void DataMenu::updateDataCharts()
{
    GloableData::GetInstance()->mutex1.lock();
    chartSeries->replace(GloableData::GetInstance()->pointList1);
    GloableData::GetInstance()->mutex1.unlock();

    GloableData::GetInstance()->mutex2.lock();
    chartSeries2->replace(GloableData::GetInstance()->pointList2);
    GloableData::GetInstance()->mutex2.unlock();
}


void DataMenu::on_setBtn_clicked()
{
    disconnect(GloableData::GetInstance()->serialPlc, SIGNAL(readyRead()), this, SLOT(serialPlcReciveSlot()));
    SettingMenu settingMenu;
    settingMenu.exec();
    connect(GloableData::GetInstance()->serialPlc, SIGNAL(readyRead()), this, SLOT(serialPlcReciveSlot()));
}



void DataMenu::motorStart()
{
    GloableData::GetInstance()->serialPlc->write( CmdProcess::GetInstance()->getPlcMap().find(DataDef::C_ENABLE_LOCKED).value().data);
    Utils::sleep(80);
}


void DataMenu::uartCheckSlot()
{


}

void DataMenu::DataClean()
{
    if(GloableData::GetInstance()->serialMcuModbus == NULL)
    {
        return;
    }

    //清除mcu数据
    modbus_set_slave(GloableData::GetInstance()->serialMcuModbus, 1);
    modbus_write_bit(GloableData::GetInstance()->serialMcuModbus, 0x0100, 1);
    QThread::usleep(20);
    GloableData::GetInstance()->mutex1.lock();
    GloableData::GetInstance()->pointList1.clear();
    GloableData::GetInstance()->mutex1.unlock();

    GloableData::GetInstance()->mutex2.lock();
    GloableData::GetInstance()->pointList2.clear();
    GloableData::GetInstance()->mutex2.unlock();

    chartSeries->clear();
    chartSeries2->clear();
}




void DataMenu::execlOutput(void)
{
//    QCoreApplication::setOrganizationName(QString("PLCMoniter"));
//    QCoreApplication::setApplicationName(QString("para"));
//    QSettings settings(QSettings::IniFormat, QSettings::UserScope, QCoreApplication::organizationName(), QCoreApplication::applicationName());
//    QString curDir = settings.value("xlsDir").toString();
//    QString fileName = QFileDialog::getSaveFileName(this,
//                                                    tr("Open Config"),
//                                                    curDir,
//                                                    tr("Config Files (*.xls)"));

//    if (!fileName.isNull())
//    {
//        settings.setValue("xlsDir", fileName);
//        fileName.replace(2,1,"\\");
//        GloableData::GetInstance()->fileNameXls = fileName;
//        McuCommunicateService::GetInstance()->addCmd(DataDef::OUT_PUT_XLS);
//    }
//    else
//    {

//        //点的是取消
//        //  qDebug()<<"quit!";
//        ui->setBtnOutPutData->setEnabled(true);
//        ui->setBtnOutPutData->setText("报表");
//    }
}


void DataMenu::on_setBtnOutPutData_clicked()
{
    ui->setBtnOutPutData->setEnabled(false);
    ui->setBtnOutPutData->setText("准备中...");

    QScreen * screen = QGuiApplication::primaryScreen();
    QPixmap p = screen->grabWindow(chartView->winId());

    QImage image = p.toImage();
    image.save(QCoreApplication::applicationDirPath()+"/chart.png");


     execlOutput();




    return;

}

void DataMenu::on_pushButtonUsartStartFlush_clicked()
{

    // qDebug()<< ui->portCbx_stm->count();
    ui->portCbx_stm->clearEditText();
    ui->portCbx_stm->clear();
    ui->portCbx_plc->clearEditText();
    ui->portCbx_plc->clear();
    //   qDebug()<< ui->portCbx_stm->count();
    //  qDebug()<<"uart count: "<<QSerialPortInfo::availablePorts().count();
    for(int i = 0;i<QSerialPortInfo::availablePorts().count();i++)
    {
        // qDebug()<<"uart count: "<<QSerialPortInfo::availablePorts().at(i).portName();
        ui->portCbx_stm->addItem(QSerialPortInfo::availablePorts().at(i).portName());
        ui->portCbx_plc->addItem(QSerialPortInfo::availablePorts().at(i).portName());
    }
}

void DataMenu::on_pushButtonPolarView_clicked()
{
    polarChartShow * polarMenu = new polarChartShow();
    polarMenu->show();
}

void DataMenu::on_pushButtonWaveReset_clicked()
{
    chart->axisX()->setRange(0, 360);
    chart->axisY()->setRange(-1000, 1000);
}

void DataMenu::on_pushButtonTEST_clicked()
{
    DataClean();
  //  motorStart();
 //   McuCommunicateService::GetInstance()->addCmd(DataDef::READ_POINTS);
    McuCommunicateService::GetInstance()->addCmd(DataDef::READ_POINTS_TEST);
    timerChart->start();
    //timerChangeY->start(50);
   // timer_updatastatue->stop();
}

void DataMenu::on_pushButtonConnectMcu_clicked()
{

      if(false == initMcuSerialService())
      {
          return;
      }
      QMessageBox::about(NULL, "报告", QString("串口已打开！"));
      return ;
}

void DataMenu::on_pushButtonConnectPlc_clicked()
{
      if(false ==   initPlcSerialService())
      {
          return;
      }
      QMessageBox::about(NULL, "报告", QString("串口已打开！"));
      return ;
}
