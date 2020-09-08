#include "gloabledata.h"

GloableData::GloableData()
{
    serialMcuModbus = NULL;
    serialPlc = NULL;
    cmdProcess = CmdProcess::GetInstance();


}


GloableData::~GloableData()
{
    delete serialMcuModbus;
    delete serialPlc;
}

GloableData *GloableData::GetInstance()
{
    static GloableData * gloableData = NULL;
    if(NULL == gloableData)
    {
        gloableData = new GloableData();
    }
    return gloableData;
}
