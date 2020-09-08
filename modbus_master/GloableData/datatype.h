#ifndef DATATYPE_H
#define DATATYPE_H
#include <QString>

enum Parity : char
{
    NONE = 'N',
    ODD  = 'O',
    EVEN = 'E'
};

enum RadioButtonTableSelect : int
{

    RADIOBUTTON_TABLE_1 = 0,
    RADIOBUTTON_TABLE_2  = 1,
};

struct SettingPara
{
public:
    float ParaA;
    SettingPara(){
        memset(this, 0, sizeof(SettingPara));
    }

};

struct UartPara
{
public:
    static const unsigned short SIZE = 16;

    char port[SIZE];
    int baudRate;
    uint8_t dataBits;
    uint8_t stopBits;
    Parity parity;

    UartPara() {
        memset(port, 0, SIZE);
    }
};

#endif // DATATYPE_H
