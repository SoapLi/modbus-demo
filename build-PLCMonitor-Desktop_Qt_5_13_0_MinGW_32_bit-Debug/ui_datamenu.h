/********************************************************************************
** Form generated from reading UI file 'datamenu.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATAMENU_H
#define UI_DATAMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DataMenu
{
public:
    QGroupBox *groupBox_2;
    QPushButton *pushButtonConnectMcu;
    QComboBox *rateCbx_plc;
    QComboBox *rateCbx_stm;
    QComboBox *portCbx_plc;
    QComboBox *portCbx_stm;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButtonUsartStartFlush;
    QPushButton *pushButtonConnectPlc;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_chartview;
    QPushButton *pushButtonWaveReset;
    QPushButton *setBtnOutPutData;
    QPushButton *setBtn;
    QPushButton *pushButtonTEST;
    QLabel *label_3;
    QTextEdit *textEditShow;
    QRadioButton *radioButtonTabel1;
    QRadioButton *radioButtonTabel2;
    QGroupBox *groupBox_3;
    QLCDNumber *lcdNumber_ABMagneticField;
    QLCDNumber *lcdNumber_ZeroMagneticField;
    QLabel *label_7;
    QPushButton *pushButtonPolarView;
    QComboBox *comboBoxChart;

    void setupUi(QWidget *DataMenu)
    {
        if (DataMenu->objectName().isEmpty())
            DataMenu->setObjectName(QString::fromUtf8("DataMenu"));
        DataMenu->resize(1186, 593);
        DataMenu->setMinimumSize(QSize(600, 0));
        DataMenu->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 211, 211);\n"
"QWidget{border-top-left-radius:15px;border-top-right-radius:5px;}"));
        groupBox_2 = new QGroupBox(DataMenu);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 0, 391, 71));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(9);
        groupBox_2->setFont(font);
        groupBox_2->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"stop:0#D3D3D3, stop: 1 #D3D3D3);\n"
"border:2px solid gray;\n"
"border-radius:5px;\n"
"margin-top:1ex;/* leave space at the top for the title */\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"subcontrol-origin: margin;\n"
"subcontrol-position: top left;\n"
"padding: 0 5px;\n"
"}"));
        pushButtonConnectMcu = new QPushButton(groupBox_2);
        pushButtonConnectMcu->setObjectName(QString::fromUtf8("pushButtonConnectMcu"));
        pushButtonConnectMcu->setGeometry(QRect(230, 10, 61, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        pushButtonConnectMcu->setFont(font1);
        pushButtonConnectMcu->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 12pt \"\351\273\221\344\275\223\";\n"
"\n"
"\n"
"	color: rgb(0, 170, 0);\n"
"background-color:gray;\n"
"color: white;   border-radius: 10px;  \n"
"border: 2px groove gray;                                            \n"
"border-style: outset;\n"
"}\n"
"QPushButton:hover{\n"
"font: 12pt \"\351\273\221\344\275\223\";\n"
"background-color:white; color: black;\n"
"}\n"
"QPushButton:pressed{\n"
"font: 12pt \"\351\273\221\344\275\223\";\n"
"background-color:rgb(85, 170, 255);                                                           border-style: inset; \n"
"}"));
        rateCbx_plc = new QComboBox(groupBox_2);
        rateCbx_plc->setObjectName(QString::fromUtf8("rateCbx_plc"));
        rateCbx_plc->setGeometry(QRect(150, 40, 80, 20));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(rateCbx_plc->sizePolicy().hasHeightForWidth());
        rateCbx_plc->setSizePolicy(sizePolicy);
        rateCbx_plc->setMinimumSize(QSize(80, 20));
        rateCbx_plc->setMaximumSize(QSize(80, 20));
        rateCbx_stm = new QComboBox(groupBox_2);
        rateCbx_stm->setObjectName(QString::fromUtf8("rateCbx_stm"));
        rateCbx_stm->setGeometry(QRect(150, 15, 80, 20));
        sizePolicy.setHeightForWidth(rateCbx_stm->sizePolicy().hasHeightForWidth());
        rateCbx_stm->setSizePolicy(sizePolicy);
        rateCbx_stm->setMinimumSize(QSize(80, 20));
        rateCbx_stm->setMaximumSize(QSize(80, 20));
        portCbx_plc = new QComboBox(groupBox_2);
        portCbx_plc->setObjectName(QString::fromUtf8("portCbx_plc"));
        portCbx_plc->setGeometry(QRect(70, 40, 80, 20));
        sizePolicy.setHeightForWidth(portCbx_plc->sizePolicy().hasHeightForWidth());
        portCbx_plc->setSizePolicy(sizePolicy);
        portCbx_plc->setMinimumSize(QSize(80, 20));
        portCbx_plc->setMaximumSize(QSize(80, 20));
        portCbx_stm = new QComboBox(groupBox_2);
        portCbx_stm->setObjectName(QString::fromUtf8("portCbx_stm"));
        portCbx_stm->setGeometry(QRect(70, 15, 80, 20));
        sizePolicy.setHeightForWidth(portCbx_stm->sizePolicy().hasHeightForWidth());
        portCbx_stm->setSizePolicy(sizePolicy);
        portCbx_stm->setMinimumSize(QSize(80, 20));
        portCbx_stm->setMaximumSize(QSize(80, 20));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 20, 21, 20));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font2.setPointSize(8);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("font: 8pt \"\351\273\221\344\275\223\";"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(40, 40, 21, 20));
        label_6->setStyleSheet(QString::fromUtf8("font: 8pt \"\351\273\221\344\275\223\";"));
        pushButtonUsartStartFlush = new QPushButton(groupBox_2);
        pushButtonUsartStartFlush->setObjectName(QString::fromUtf8("pushButtonUsartStartFlush"));
        pushButtonUsartStartFlush->setGeometry(QRect(300, 10, 81, 51));
        pushButtonUsartStartFlush->setFont(font1);
        pushButtonUsartStartFlush->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 12pt \"\351\273\221\344\275\223\";\n"
"\n"
"\n"
"	color: rgb(0, 170, 0);\n"
"background-color:gray;\n"
"color: white;   border-radius: 10px;  \n"
"border: 2px groove gray;                                            \n"
"border-style: outset;\n"
"}\n"
"QPushButton:hover{\n"
"font: 12pt \"\351\273\221\344\275\223\";\n"
"background-color:white; color: black;\n"
"}\n"
"QPushButton:pressed{\n"
"font: 12pt \"\351\273\221\344\275\223\";\n"
"background-color:rgb(85, 170, 255);                                                           border-style: inset; \n"
"}"));
        pushButtonConnectPlc = new QPushButton(groupBox_2);
        pushButtonConnectPlc->setObjectName(QString::fromUtf8("pushButtonConnectPlc"));
        pushButtonConnectPlc->setGeometry(QRect(230, 40, 61, 21));
        pushButtonConnectPlc->setFont(font1);
        pushButtonConnectPlc->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 12pt \"\351\273\221\344\275\223\";\n"
"\n"
"\n"
"	color: rgb(0, 170, 0);\n"
"background-color:gray;\n"
"color: white;   border-radius: 10px;  \n"
"border: 2px groove gray;                                            \n"
"border-style: outset;\n"
"}\n"
"QPushButton:hover{\n"
"font: 12pt \"\351\273\221\344\275\223\";\n"
"background-color:white; color: black;\n"
"}\n"
"QPushButton:pressed{\n"
"font: 12pt \"\351\273\221\344\275\223\";\n"
"background-color:rgb(85, 170, 255);                                                           border-style: inset; \n"
"}"));
        horizontalLayoutWidget = new QWidget(DataMenu);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 70, 1081, 511));
        horizontalLayout_chartview = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_chartview->setObjectName(QString::fromUtf8("horizontalLayout_chartview"));
        horizontalLayout_chartview->setContentsMargins(0, 0, 0, 0);
        pushButtonWaveReset = new QPushButton(DataMenu);
        pushButtonWaveReset->setObjectName(QString::fromUtf8("pushButtonWaveReset"));
        pushButtonWaveReset->setGeometry(QRect(1090, 170, 91, 35));
        pushButtonWaveReset->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 12pt \"\351\273\221\344\275\223\";\n"
"\n"
"\n"
"	color: rgb(0, 170, 0);\n"
"background-color:gray;\n"
"color: white;   border-radius: 10px;  \n"
"border: 2px groove gray;                                            \n"
"border-style: outset;\n"
"}\n"
"QPushButton:hover{\n"
"font: 12pt \"\351\273\221\344\275\223\";\n"
"background-color:white; color: black;\n"
"}\n"
"QPushButton:pressed{\n"
"font: 12pt \"\351\273\221\344\275\223\";\n"
"background-color:rgb(85, 170, 255);                                                           border-style: inset; \n"
"}"));
        setBtnOutPutData = new QPushButton(DataMenu);
        setBtnOutPutData->setObjectName(QString::fromUtf8("setBtnOutPutData"));
        setBtnOutPutData->setGeometry(QRect(1090, 80, 91, 35));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(setBtnOutPutData->sizePolicy().hasHeightForWidth());
        setBtnOutPutData->setSizePolicy(sizePolicy1);
        setBtnOutPutData->setFont(font1);
        setBtnOutPutData->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 12pt \"\351\273\221\344\275\223\";\n"
"\n"
"\n"
"	color: rgb(0, 170, 0);\n"
"background-color:gray;\n"
"color: white;   border-radius: 10px;  \n"
"border: 2px groove gray;                                            \n"
"border-style: outset;\n"
"}\n"
"QPushButton:hover{\n"
"font: 12pt \"\351\273\221\344\275\223\";\n"
"background-color:white; color: black;\n"
"}\n"
"QPushButton:pressed{\n"
"font: 12pt \"\351\273\221\344\275\223\";\n"
"background-color:rgb(85, 170, 255);                                                           border-style: inset; \n"
"}"));
        setBtn = new QPushButton(DataMenu);
        setBtn->setObjectName(QString::fromUtf8("setBtn"));
        setBtn->setGeometry(QRect(1090, 40, 91, 35));
        sizePolicy1.setHeightForWidth(setBtn->sizePolicy().hasHeightForWidth());
        setBtn->setSizePolicy(sizePolicy1);
        setBtn->setFont(font1);
        setBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 12pt \"\351\273\221\344\275\223\";\n"
"\n"
"\n"
"	color: rgb(0, 170, 0);\n"
"background-color:gray;\n"
"color: white;   border-radius: 10px;  \n"
"border: 2px groove gray;                                            \n"
"border-style: outset;\n"
"}\n"
"QPushButton:hover{\n"
"font: 12pt \"\351\273\221\344\275\223\";\n"
"background-color:white; color: black;\n"
"}\n"
"QPushButton:pressed{\n"
"font: 12pt \"\351\273\221\344\275\223\";\n"
"background-color:rgb(85, 170, 255);                                                           border-style: inset; \n"
"}"));
        pushButtonTEST = new QPushButton(DataMenu);
        pushButtonTEST->setObjectName(QString::fromUtf8("pushButtonTEST"));
        pushButtonTEST->setGeometry(QRect(1090, 530, 91, 50));
        sizePolicy1.setHeightForWidth(pushButtonTEST->sizePolicy().hasHeightForWidth());
        pushButtonTEST->setSizePolicy(sizePolicy1);
        pushButtonTEST->setMinimumSize(QSize(50, 0));
        pushButtonTEST->setFont(font1);
        pushButtonTEST->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 12pt \"\351\273\221\344\275\223\";\n"
"	color: rgb(0, 170, 0);\n"
"background-color:red;\n"
"color: white;   border-radius: 10px;  \n"
"border: 2px groove gray;                                            \n"
"border-style: outset;\n"
"}\n"
"QPushButton:hover{\n"
"font: 12pt \"\351\273\221\344\275\223\";\n"
"background-color:white; color: black;\n"
"}\n"
"QPushButton:pressed{\n"
"font: 12pt \"\351\273\221\344\275\223\";\n"
"background-color:rgb(85, 170, 255);                                                           border-style: inset; \n"
"}"));
        label_3 = new QLabel(DataMenu);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(970, 0, 20, 35));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMinimumSize(QSize(20, 35));
        label_3->setMaximumSize(QSize(20, 35));
        QFont font3;
        font3.setPointSize(12);
        label_3->setFont(font3);
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        textEditShow = new QTextEdit(DataMenu);
        textEditShow->setObjectName(QString::fromUtf8("textEditShow"));
        textEditShow->setGeometry(QRect(400, 0, 461, 70));
        textEditShow->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"font: 75 9pt \"Arial\";\n"
"background-color: rgb(0, 0, 0);"));
        radioButtonTabel1 = new QRadioButton(DataMenu);
        radioButtonTabel1->setObjectName(QString::fromUtf8("radioButtonTabel1"));
        radioButtonTabel1->setGeometry(QRect(1010, 30, 81, 20));
        radioButtonTabel1->setFont(font2);
        radioButtonTabel1->setStyleSheet(QString::fromUtf8("font: 8pt \"\351\273\221\344\275\223\";"));
        radioButtonTabel2 = new QRadioButton(DataMenu);
        radioButtonTabel2->setObjectName(QString::fromUtf8("radioButtonTabel2"));
        radioButtonTabel2->setGeometry(QRect(1010, 50, 81, 20));
        radioButtonTabel2->setStyleSheet(QString::fromUtf8("font: 8pt \"\351\273\221\344\275\223\";"));
        groupBox_3 = new QGroupBox(DataMenu);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(990, 10, 101, 61));
        groupBox_3->setFont(font);
        lcdNumber_ABMagneticField = new QLCDNumber(DataMenu);
        lcdNumber_ABMagneticField->setObjectName(QString::fromUtf8("lcdNumber_ABMagneticField"));
        lcdNumber_ABMagneticField->setGeometry(QRect(860, 0, 111, 35));
        lcdNumber_ABMagneticField->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"background-color: rgb(0, 0, 0);"));
        lcdNumber_ZeroMagneticField = new QLCDNumber(DataMenu);
        lcdNumber_ZeroMagneticField->setObjectName(QString::fromUtf8("lcdNumber_ZeroMagneticField"));
        lcdNumber_ZeroMagneticField->setGeometry(QRect(860, 35, 111, 35));
        lcdNumber_ZeroMagneticField->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 255);\n"
"background-color: rgb(0, 0, 0);"));
        label_7 = new QLabel(DataMenu);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(970, 35, 20, 35));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setMinimumSize(QSize(20, 35));
        label_7->setMaximumSize(QSize(20, 35));
        label_7->setFont(font3);
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        pushButtonPolarView = new QPushButton(DataMenu);
        pushButtonPolarView->setObjectName(QString::fromUtf8("pushButtonPolarView"));
        pushButtonPolarView->setGeometry(QRect(1090, 120, 91, 35));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font4.setPointSize(10);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setWeight(50);
        pushButtonPolarView->setFont(font4);
        pushButtonPolarView->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 10pt \"\351\273\221\344\275\223\";\n"
"\n"
"\n"
"	color: rgb(0, 170, 0);\n"
"background-color:gray;\n"
"color: white;   border-radius: 10px;  \n"
"border: 2px groove gray;                                            \n"
"border-style: outset;\n"
"}\n"
"QPushButton:hover{\n"
"font: 10pt \"\351\273\221\344\275\223\";\n"
"background-color:white; color: black;\n"
"}\n"
"QPushButton:pressed{font: 10pt \"\351\273\221\344\275\223\";\n"
"background-color:rgb(85, 170, 255);                                                           border-style: inset; \n"
"}"));
        comboBoxChart = new QComboBox(DataMenu);
        comboBoxChart->addItem(QString());
        comboBoxChart->addItem(QString());
        comboBoxChart->addItem(QString());
        comboBoxChart->setObjectName(QString::fromUtf8("comboBoxChart"));
        comboBoxChart->setGeometry(QRect(1100, 220, 71, 22));
        pushButtonTEST->raise();
        groupBox_3->raise();
        groupBox_2->raise();
        horizontalLayoutWidget->raise();
        pushButtonWaveReset->raise();
        setBtnOutPutData->raise();
        setBtn->raise();
        label_3->raise();
        textEditShow->raise();
        radioButtonTabel1->raise();
        radioButtonTabel2->raise();
        lcdNumber_ABMagneticField->raise();
        lcdNumber_ZeroMagneticField->raise();
        label_7->raise();
        pushButtonPolarView->raise();
        comboBoxChart->raise();

        retranslateUi(DataMenu);

        QMetaObject::connectSlotsByName(DataMenu);
    } // setupUi

    void retranslateUi(QWidget *DataMenu)
    {
        DataMenu->setWindowTitle(QCoreApplication::translate("DataMenu", "Form", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("DataMenu", "COM Setting", nullptr));
        pushButtonConnectMcu->setText(QCoreApplication::translate("DataMenu", "Connect", nullptr));
        label_5->setText(QCoreApplication::translate("DataMenu", "MCU", nullptr));
        label_6->setText(QCoreApplication::translate("DataMenu", "PLC", nullptr));
        pushButtonUsartStartFlush->setText(QCoreApplication::translate("DataMenu", "Flush", nullptr));
        pushButtonConnectPlc->setText(QCoreApplication::translate("DataMenu", "Connect", nullptr));
        pushButtonWaveReset->setText(QCoreApplication::translate("DataMenu", "Wave Reset", nullptr));
        setBtnOutPutData->setText(QCoreApplication::translate("DataMenu", "Report", nullptr));
        setBtn->setText(QCoreApplication::translate("DataMenu", "Setting", nullptr));
        pushButtonTEST->setText(QCoreApplication::translate("DataMenu", "TEST", nullptr));
        label_3->setText(QCoreApplication::translate("DataMenu", "V", nullptr));
        radioButtonTabel1->setText(QCoreApplication::translate("DataMenu", "t1", nullptr));
        radioButtonTabel2->setText(QCoreApplication::translate("DataMenu", "t2", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("DataMenu", "TYPE", nullptr));
        label_7->setText(QCoreApplication::translate("DataMenu", "V", nullptr));
        pushButtonPolarView->setText(QCoreApplication::translate("DataMenu", "PolarView", nullptr));
        comboBoxChart->setItemText(0, QCoreApplication::translate("DataMenu", "normal", nullptr));
        comboBoxChart->setItemText(1, QCoreApplication::translate("DataMenu", "lock X", nullptr));
        comboBoxChart->setItemText(2, QCoreApplication::translate("DataMenu", "lock Y", nullptr));

    } // retranslateUi

};

namespace Ui {
    class DataMenu: public Ui_DataMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATAMENU_H
