#include "cmdprocess.h"

//plc cmd
static char cmdDataPlcEnableRelase[] = {0x02,0x30,0x31,0x34,0x32,0x34,0x4d,0x30,0x30,0x30,0x30,0x30,0x41,0x03};
static char cmdDataPlcEnableLocked[] = {0x02,0x30,0x31,0x34,0x32,0x33,0x4d,0x30,0x30,0x30,0x30,0x30,0x39,0x03};
//mcu cmd
static char cmdDataMcuReadRegister[]= {0};

CmdProcess *CmdProcess::GetInstance()
{
    static CmdProcess *cmdProcess = NULL;
    if(NULL == cmdProcess)
    {
        cmdProcess = new CmdProcess;
    }
    return cmdProcess;
}

QMap<DataDef::PlcCmdType, DataDef::DataStruct> CmdProcess:: getPlcMap()
{
  return this->plcCmdMap;
}

QMap<DataDef::McuCmdType, DataDef::DataStruct> CmdProcess:: getMcuMap()
{
  return this->mcuCmdMap;
}

CmdProcess::CmdProcess()
{
    plcCmdMap.clear();
    mcuCmdMap.clear();
    CmdInit();
}

void CmdProcess::CmdInit()
{
    PlcCmdInit();
    McuCmdInit();
}

void CmdProcess::PlcCmdInit()
{
    CmdRegister(DataDef::C_ENABLE_RELEASE, DataDef::DataStruct((char *)cmdDataPlcEnableRelase, sizeof(cmdDataPlcEnableRelase) / sizeof(char)));
    CmdRegister(DataDef::C_ENABLE_LOCKED, DataDef::DataStruct((char*)cmdDataPlcEnableLocked, sizeof(cmdDataPlcEnableLocked) / sizeof(char)));
}

void CmdProcess::McuCmdInit()
{
     CmdRegister(DataDef::READ_POINTS_TEST, DataDef::DataStruct((char*)cmdDataMcuReadRegister, sizeof(cmdDataMcuReadRegister) / sizeof(char)));  
}

void CmdProcess::CmdRegister(DataDef::PlcCmdType cmd, DataDef::DataStruct data)
{
    if(plcCmdMap.end() != plcCmdMap.find(cmd)) return;
    plcCmdMap.insert(cmd, data);
}

void CmdProcess::CmdRegister(DataDef::McuCmdType cmd, DataDef::DataStruct data)
{
    if(mcuCmdMap.end() != mcuCmdMap.find(cmd)) return;
    mcuCmdMap.insert(cmd, data);
}
