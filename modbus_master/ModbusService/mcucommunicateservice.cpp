#include "mcucommunicateservice.h"
#include <QDateTime>
#include <QDebug>
#include "GloableData/gloabledata.h"
#include "libmodbus/modbus.h"
#include <QMessageBox>
#include <QVector>
#include <iostream>
#include "./execltool/excelengine.h"

using namespace std;

#include <utils.h>
#ifndef LJH_LOG_OUT_TXT(contentString)
#define LJH_LOG_OUT_TXT(contentString) Utils::writeLogTXT(contentString,__FILE__, __LINE__,__FUNCTION__);
#endif

McuCommunicateService::McuCommunicateService()
{
    stopped = false;
}

McuCommunicateService::~McuCommunicateService()
{

}

McuCommunicateService *McuCommunicateService::GetInstance()
{
    static McuCommunicateService* mcuService = NULL;
    if(NULL == mcuService)
    {
        mcuService = new McuCommunicateService;
    }
    return mcuService;
}

void McuCommunicateService::stop()
{
    stopped = true;
}

void McuCommunicateService::addCmd(DataDef::McuCmdType cmd)
{
    mcuCmdQueue.append(cmd);
}

void McuCommunicateService::exec_cmd_out_put_xls()
{
//    qDebug()<<"exec_cmd_out_put_xls";
//    ExcelEngine excel(GloableData::GetInstance()->fileNameXls);
//    excel.Open(); //打开
//    excel.SetPic();
//    excel.Save(); //保存
//    excel.Close();
//    qDebug()<<"file output OK!!";
}

void McuCommunicateService::exec_cmd_mcu_test()
{

    qDebug() << "********getpointstart:**********" << QDateTime::currentDateTime();
    uint16_t temp_buff[1]={0};
    for(int s = 0; s < 360; s++)
    {
        modbus_set_slave(GloableData::GetInstance()->serialMcuModbus, 1);
        if(-1 == modbus_read_registers( GloableData::GetInstance()->serialMcuModbus, 0, 1, &temp_buff[0]))
        {

        }
        usleep(10);
        GloableData::GetInstance()->mutex1.lock();
        GloableData::GetInstance()->pointList1.append(QPointF(s, (temp_buff[0])/55.00));
        GloableData::GetInstance()->mutex1.unlock();
        GloableData::GetInstance()->mutex2.lock();
        GloableData::GetInstance()->pointList2.append(QPointF(s, (temp_buff[0])/50.00));
        GloableData::GetInstance()->mutex2.unlock();
    }
}

void McuCommunicateService::run()
{
    while(!stopped)
    {
        if(mcuCmdQueue.isEmpty())
        {
            usleep(200 * 1000); //等待200毫秒
            continue;
        }
        switch(mcuCmdQueue.dequeue())
        {
            case DataDef::READ_POINTS_TEST:
                exec_cmd_mcu_test();
                break;
            case DataDef::OUT_PUT_XLS:
                exec_cmd_out_put_xls();
                break;
        default :
            break;
        }

    }
    stopped = false;
}
