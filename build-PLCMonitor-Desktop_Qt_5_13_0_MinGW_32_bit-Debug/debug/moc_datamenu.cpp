/****************************************************************************
** Meta object code from reading C++ file 'datamenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../modbus_master/datamenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'datamenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DataMenu_t {
    QByteArrayData data[18];
    char stringdata0[375];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DataMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DataMenu_t qt_meta_stringdata_DataMenu = {
    {
QT_MOC_LITERAL(0, 0, 8), // "DataMenu"
QT_MOC_LITERAL(1, 9, 13), // "uartCheckSlot"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 20), // "chartUpdateTimerSlot"
QT_MOC_LITERAL(4, 45, 12), // "chartTipSlot"
QT_MOC_LITERAL(5, 58, 8), // "position"
QT_MOC_LITERAL(6, 67, 10), // "isHovering"
QT_MOC_LITERAL(7, 78, 19), // "serialPlcReciveSlot"
QT_MOC_LITERAL(8, 98, 20), // "radioButttonShowTab1"
QT_MOC_LITERAL(9, 119, 20), // "radioButttonShowTab2"
QT_MOC_LITERAL(10, 140, 17), // "on_setBtn_clicked"
QT_MOC_LITERAL(11, 158, 27), // "on_setBtnOutPutData_clicked"
QT_MOC_LITERAL(12, 186, 36), // "on_pushButtonUsartStartFlush_..."
QT_MOC_LITERAL(13, 223, 30), // "on_pushButtonPolarView_clicked"
QT_MOC_LITERAL(14, 254, 30), // "on_pushButtonWaveReset_clicked"
QT_MOC_LITERAL(15, 285, 25), // "on_pushButtonTEST_clicked"
QT_MOC_LITERAL(16, 311, 31), // "on_pushButtonConnectMcu_clicked"
QT_MOC_LITERAL(17, 343, 31) // "on_pushButtonConnectPlc_clicked"

    },
    "DataMenu\0uartCheckSlot\0\0chartUpdateTimerSlot\0"
    "chartTipSlot\0position\0isHovering\0"
    "serialPlcReciveSlot\0radioButttonShowTab1\0"
    "radioButttonShowTab2\0on_setBtn_clicked\0"
    "on_setBtnOutPutData_clicked\0"
    "on_pushButtonUsartStartFlush_clicked\0"
    "on_pushButtonPolarView_clicked\0"
    "on_pushButtonWaveReset_clicked\0"
    "on_pushButtonTEST_clicked\0"
    "on_pushButtonConnectMcu_clicked\0"
    "on_pushButtonConnectPlc_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DataMenu[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    2,   86,    2, 0x08 /* Private */,
       7,    0,   91,    2, 0x08 /* Private */,
       8,    0,   92,    2, 0x08 /* Private */,
       9,    0,   93,    2, 0x08 /* Private */,
      10,    0,   94,    2, 0x08 /* Private */,
      11,    0,   95,    2, 0x08 /* Private */,
      12,    0,   96,    2, 0x08 /* Private */,
      13,    0,   97,    2, 0x08 /* Private */,
      14,    0,   98,    2, 0x08 /* Private */,
      15,    0,   99,    2, 0x08 /* Private */,
      16,    0,  100,    2, 0x08 /* Private */,
      17,    0,  101,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPointF, QMetaType::Bool,    5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DataMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DataMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->uartCheckSlot(); break;
        case 1: _t->chartUpdateTimerSlot(); break;
        case 2: _t->chartTipSlot((*reinterpret_cast< QPointF(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->serialPlcReciveSlot(); break;
        case 4: _t->radioButttonShowTab1(); break;
        case 5: _t->radioButttonShowTab2(); break;
        case 6: _t->on_setBtn_clicked(); break;
        case 7: _t->on_setBtnOutPutData_clicked(); break;
        case 8: _t->on_pushButtonUsartStartFlush_clicked(); break;
        case 9: _t->on_pushButtonPolarView_clicked(); break;
        case 10: _t->on_pushButtonWaveReset_clicked(); break;
        case 11: _t->on_pushButtonTEST_clicked(); break;
        case 12: _t->on_pushButtonConnectMcu_clicked(); break;
        case 13: _t->on_pushButtonConnectPlc_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DataMenu::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_DataMenu.data,
    qt_meta_data_DataMenu,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DataMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DataMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DataMenu.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int DataMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
