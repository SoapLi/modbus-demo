#include "settingmenu.h"
#include "ui_settingmenu.h"
#include <QSerialPortInfo>
#include <QDebug>
#include <QMessageBox>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <Qdebug>
#include <QTime>
#include <QMessageBox>
#include <GloableData/gloabledata.h>
#include "utils.h"
#include <QSettings>
#include <iostream>
#include "macro_define.h"

SettingMenu::SettingMenu(QWidget *parent) :
    QDialog(parent),
    Flag_Get_Para(0),
    ui(new Ui::SettingMenu)
{
    ui->setupUi(this);
    mainByteArray.clear();
    serial = GloableData::GetInstance()->serialPlc;
    connect(serial, SIGNAL(readyRead()), this, SLOT(settingMenuPlcRead()));
    this->setWindowTitle("设置");
}

SettingMenu::~SettingMenu()
{
    delete ui;
}

void SettingMenu::showEvent(QShowEvent *event)
{
    timerGetPara.start(600);
}

void SettingMenu::on_retBtn_clicked()
{
    //this->close();
    disconnect(serial, SIGNAL(readyRead()), this, SLOT(settingMenuPlcRead()));
    reject();
}










