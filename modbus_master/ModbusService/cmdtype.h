#ifndef CMDTYPE_H
#define CMDTYPE_H

namespace DataDef {

enum PlcCmdType{
    C_ENABLE_RELEASE = 0,
    C_ENABLE_LOCKED,
};

enum McuCmdType{
    READ_POINTS_TEST,
    OUT_PUT_XLS,
};


struct DataStruct
{
public:
    int dataLen;
    char *data;
    DataStruct(char* data, int dataLen) {
        this->data = data;
        this->dataLen = dataLen;
    }
};

}

#endif // CMDTYPE_H
