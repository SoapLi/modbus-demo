#ifndef SETTINGMENU_H
#define SETTINGMENU_H

#include <QDialog>
#include <QSerialPort>
#include <QTimer>
#include "utils.h"
namespace Ui {
class SettingMenu;
}

class SettingMenu : public QDialog
{
    Q_OBJECT

public:
    explicit SettingMenu(QWidget *parent = 0);
    ~SettingMenu();



private:
    void writeParaToIni();


private slots:
    void on_retBtn_clicked();







protected:
    void showEvent(QShowEvent *event);


private:
    Ui::SettingMenu *ui;
    QByteArray mainByteArray;
    QSerialPort *serial;
    QTimer timerGetPara;
    int Flag_Get_Para;

};

#endif // SETTINGMENU_H
