#include "mainwindow.h"
#include <QApplication>
#include  "datamenu.h"

#include <ModbusService/mcucommunicateservice.h>
#include <ModbusService/plccommunicateservice.h>
#include "GloableData/gloabledata.h"
#include <macro_define.h>
#include <QTextStream>
#include <QByteArray>
#include <QDebug>
#include <QString>
#include "execltool/qexcel.h"
#include <QTableWidget>
#include "qtablewidget.h"
#include <QWidget>
//#include <QtGui/QApplication>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QDebug>
#include <QSplashScreen>
#include "databasetool/databaseengine.h"

#include <QDateTime>
#include <QMessageBox>

#include <QFileDialog>
#include <QSettings>
#include "./execltool/excelengine.h"
#include "qt_windows.h"
#include <QVariant>
#include <Qdebug>
#include <QScrollBar>
#include <QSettings>


#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<conio.h>
#include <QtXml>

typedef struct
{
    char x;
    int j;
}BOX;


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //MainWindow mainWindow;
    //mainWindow.show();
    //UartSetting uartSetting;
    //uartSetting.show();
    DataMenu dataMenu;
    dataMenu.show();

//    QSplashScreen *splash=new QSplashScreen;
//    QPixmap pix(":/new/img/resources/start_logo.png");
//    splash->showMessage("正在载入，请稍等……");
//    splash->setPixmap(pix);
//    splash->show();
//    a.processEvents();//这样可以保证程序一直可以响应鼠标键盘上事件
//    splash->finish(&dataMenu);//启动画面在窗口w创建完成以后结束
//    dataMenu.show();
//    QTextCodec::setCodecForLocale(QTextCodec::codecForLocale());


    return a.exec();
}
