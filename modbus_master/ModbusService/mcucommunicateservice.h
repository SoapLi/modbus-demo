#ifndef MCUCOMMUNICATESERVICE_H
#define MCUCOMMUNICATESERVICE_H
#include <stdint.h>
#include <QQueue>
#include <QThread>
#include "cmdtype.h"
#include "libmodbus/modbus.h"
#include <QTableWidget>

#include "./databasetool/databaseengine.h"


class McuCommunicateService : public QThread
{
//    Q_OBJECT

public:
    ~McuCommunicateService();
    static McuCommunicateService *GetInstance();
    void stop();
    void addCmd(DataDef::McuCmdType cmd);

protected:
    void run();

private:
    McuCommunicateService();
    void exec_cmd_out_put_xls(void);
    void exec_cmd_mcu_test(void);

public:
    QQueue<DataDef::McuCmdType> mcuCmdQueue;

//signals:
//    void TestSignal(int);

private:
    volatile bool stopped;
};

#endif // MCUCOMMUNICATESERVICE_H
