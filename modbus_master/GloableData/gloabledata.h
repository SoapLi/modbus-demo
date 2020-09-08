#ifndef GLOABLEDATA_H
#define GLOABLEDATA_H

#include "datatype.h"
#include "libmodbus/modbus.h"
#include <ModbusService/cmdprocess.h>
#include <QMutex>
#include <QSerialPort>
#include <ModbusService/mcucommunicateservice.h>
#include <ModbusService/plccommunicateservice.h>
#include <QTableWidget>
#include <QVector>
#include "../databasetool/databaseengine.h"
#include <QComboBox>
#include <QChartView>
QT_CHARTS_USE_NAMESPACE
class GloableData
{

public:
    ~GloableData();
    static GloableData* GetInstance();

private:
    GloableData();

public:
    modbus_t *serialMcuModbus;
    QSerialPort* serialPlc;

    CmdProcess *cmdProcess;
    McuCommunicateService *mcuService;
    PlcCommunicateService *plcService;

    QList<QPointF> pointList1;
    QList<QPointF> pointList2;

    QMutex mutex1;
    QMutex mutex2;
    QMutex mutex3;

     QComboBox *G_QComboBoxChart;



};

#endif // GLOABLEDATA_H
