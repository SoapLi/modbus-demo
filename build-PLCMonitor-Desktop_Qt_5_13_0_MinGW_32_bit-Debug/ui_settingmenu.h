/********************************************************************************
** Form generated from reading UI file 'settingmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGMENU_H
#define UI_SETTINGMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingMenu
{
public:
    QPushButton *retBtn;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_15;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_ParaA;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *lineEdit_Limit0;
    QHBoxLayout *horizontalLayout_12;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_ParaZero;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEdit_Limit1;
    QHBoxLayout *horizontalLayout_14;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *lineEdit_Lever;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QLineEdit *lineEdit_WLimit0;
    QHBoxLayout *horizontalLayout_13;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QLineEdit *lineEdit_BaseA;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_15;
    QLineEdit *lineEdit_WLimit1;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_8;
    QLineEdit *lineEdit_BaseZero;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_16;
    QLineEdit *lineEdit_OtherPara;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_16;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QLineEdit *lineEdit_ValueMotorSpeed;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_10;
    QLineEdit *lineEdit_ValueMotorAngle;

    void setupUi(QWidget *SettingMenu)
    {
        if (SettingMenu->objectName().isEmpty())
            SettingMenu->setObjectName(QString::fromUtf8("SettingMenu"));
        SettingMenu->resize(1178, 697);
        SettingMenu->setStyleSheet(QString::fromUtf8(""));
        retBtn = new QPushButton(SettingMenu);
        retBtn->setObjectName(QString::fromUtf8("retBtn"));
        retBtn->setGeometry(QRect(1010, 460, 111, 41));
        QFont font;
        font.setPointSize(14);
        retBtn->setFont(font);
        retBtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: rgb(0, 170, 0);\n"
"background-color:gray;\n"
"color: white;   border-radius: 10px;  \n"
"border: 2px groove gray;                                            \n"
"border-style: outset;\n"
"}\n"
"QPushButton:hover{\n"
"background-color:white; color: black;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgb(85, 170, 255);                                                           border-style: inset; \n"
"}"));
        groupBox = new QGroupBox(SettingMenu);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 140, 511, 361));
        QFont font1;
        font1.setPointSize(16);
        groupBox->setFont(font1);
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"stop:0#E0E0E0, stop: 1 #FFFFFF);\n"
"border:2px solid gray;\n"
"border-radius:5px;\n"
"margin-top:1ex;/* leave space at the top for the title */\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"subcontrol-origin: margin;\n"
"subcontrol-position: top center;\n"
"padding: 0 3px;\n"
"}"));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(16, 25, 481, 261));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(100, 50));
        label->setMaximumSize(QSize(100, 50));
        QFont font2;
        font2.setPointSize(13);
        label->setFont(font2);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label);

        lineEdit_ParaA = new QLineEdit(layoutWidget);
        lineEdit_ParaA->setObjectName(QString::fromUtf8("lineEdit_ParaA"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit_ParaA->sizePolicy().hasHeightForWidth());
        lineEdit_ParaA->setSizePolicy(sizePolicy1);
        lineEdit_ParaA->setMinimumSize(QSize(100, 50));
        lineEdit_ParaA->setMaximumSize(QSize(100, 50));

        horizontalLayout->addWidget(lineEdit_ParaA);


        horizontalLayout_15->addLayout(horizontalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(7);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setMinimumSize(QSize(100, 50));
        label_7->setMaximumSize(QSize(100, 50));
        label_7->setFont(font2);
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(label_7);

        lineEdit_Limit0 = new QLineEdit(layoutWidget);
        lineEdit_Limit0->setObjectName(QString::fromUtf8("lineEdit_Limit0"));
        sizePolicy1.setHeightForWidth(lineEdit_Limit0->sizePolicy().hasHeightForWidth());
        lineEdit_Limit0->setSizePolicy(sizePolicy1);
        lineEdit_Limit0->setMinimumSize(QSize(100, 50));
        lineEdit_Limit0->setMaximumSize(QSize(100, 50));

        horizontalLayout_7->addWidget(lineEdit_Limit0);


        horizontalLayout_15->addLayout(horizontalLayout_7);


        verticalLayout->addLayout(horizontalLayout_15);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(7);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMinimumSize(QSize(100, 50));
        label_2->setMaximumSize(QSize(100, 50));
        QFont font3;
        font3.setPointSize(10);
        label_2->setFont(font3);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_2);

        lineEdit_ParaZero = new QLineEdit(layoutWidget);
        lineEdit_ParaZero->setObjectName(QString::fromUtf8("lineEdit_ParaZero"));
        sizePolicy1.setHeightForWidth(lineEdit_ParaZero->sizePolicy().hasHeightForWidth());
        lineEdit_ParaZero->setSizePolicy(sizePolicy1);
        lineEdit_ParaZero->setMinimumSize(QSize(100, 50));
        lineEdit_ParaZero->setMaximumSize(QSize(100, 50));

        horizontalLayout_2->addWidget(lineEdit_ParaZero);


        horizontalLayout_12->addLayout(horizontalLayout_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setMinimumSize(QSize(100, 50));
        label_5->setMaximumSize(QSize(100, 50));
        label_5->setFont(font2);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_5->addWidget(label_5);

        lineEdit_Limit1 = new QLineEdit(layoutWidget);
        lineEdit_Limit1->setObjectName(QString::fromUtf8("lineEdit_Limit1"));
        sizePolicy1.setHeightForWidth(lineEdit_Limit1->sizePolicy().hasHeightForWidth());
        lineEdit_Limit1->setSizePolicy(sizePolicy1);
        lineEdit_Limit1->setMinimumSize(QSize(100, 50));
        lineEdit_Limit1->setMaximumSize(QSize(100, 50));

        horizontalLayout_5->addWidget(lineEdit_Limit1);


        horizontalLayout_12->addLayout(horizontalLayout_5);


        verticalLayout->addLayout(horizontalLayout_12);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMinimumSize(QSize(100, 50));
        label_3->setMaximumSize(QSize(100, 50));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(label_3);

        lineEdit_Lever = new QLineEdit(layoutWidget);
        lineEdit_Lever->setObjectName(QString::fromUtf8("lineEdit_Lever"));
        sizePolicy1.setHeightForWidth(lineEdit_Lever->sizePolicy().hasHeightForWidth());
        lineEdit_Lever->setSizePolicy(sizePolicy1);
        lineEdit_Lever->setMinimumSize(QSize(100, 50));
        lineEdit_Lever->setMaximumSize(QSize(100, 50));

        horizontalLayout_4->addWidget(lineEdit_Lever);


        horizontalLayout_14->addLayout(horizontalLayout_4);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_3);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setMinimumSize(QSize(100, 50));
        label_6->setMaximumSize(QSize(100, 50));
        label_6->setFont(font2);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_8->addWidget(label_6);

        lineEdit_WLimit0 = new QLineEdit(layoutWidget);
        lineEdit_WLimit0->setObjectName(QString::fromUtf8("lineEdit_WLimit0"));
        sizePolicy1.setHeightForWidth(lineEdit_WLimit0->sizePolicy().hasHeightForWidth());
        lineEdit_WLimit0->setSizePolicy(sizePolicy1);
        lineEdit_WLimit0->setMinimumSize(QSize(100, 50));
        lineEdit_WLimit0->setMaximumSize(QSize(100, 50));

        horizontalLayout_8->addWidget(lineEdit_WLimit0);


        horizontalLayout_14->addLayout(horizontalLayout_8);


        verticalLayout->addLayout(horizontalLayout_14);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setMinimumSize(QSize(100, 50));
        label_4->setMaximumSize(QSize(100, 50));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_6->addWidget(label_4);

        lineEdit_BaseA = new QLineEdit(layoutWidget);
        lineEdit_BaseA->setObjectName(QString::fromUtf8("lineEdit_BaseA"));
        sizePolicy1.setHeightForWidth(lineEdit_BaseA->sizePolicy().hasHeightForWidth());
        lineEdit_BaseA->setSizePolicy(sizePolicy1);
        lineEdit_BaseA->setMinimumSize(QSize(100, 50));
        lineEdit_BaseA->setMaximumSize(QSize(100, 50));

        horizontalLayout_6->addWidget(lineEdit_BaseA);


        horizontalLayout_13->addLayout(horizontalLayout_6);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_4);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_15 = new QLabel(layoutWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        sizePolicy.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy);
        label_15->setMinimumSize(QSize(100, 50));
        label_15->setMaximumSize(QSize(100, 50));
        label_15->setFont(font2);
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_17->addWidget(label_15);

        lineEdit_WLimit1 = new QLineEdit(layoutWidget);
        lineEdit_WLimit1->setObjectName(QString::fromUtf8("lineEdit_WLimit1"));
        sizePolicy1.setHeightForWidth(lineEdit_WLimit1->sizePolicy().hasHeightForWidth());
        lineEdit_WLimit1->setSizePolicy(sizePolicy1);
        lineEdit_WLimit1->setMinimumSize(QSize(100, 50));
        lineEdit_WLimit1->setMaximumSize(QSize(100, 50));

        horizontalLayout_17->addWidget(lineEdit_WLimit1);


        horizontalLayout_13->addLayout(horizontalLayout_17);


        verticalLayout->addLayout(horizontalLayout_13);

        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 290, 209, 58));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        label_8->setMinimumSize(QSize(100, 50));
        label_8->setMaximumSize(QSize(100, 50));
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_8);

        lineEdit_BaseZero = new QLineEdit(layoutWidget1);
        lineEdit_BaseZero->setObjectName(QString::fromUtf8("lineEdit_BaseZero"));
        sizePolicy1.setHeightForWidth(lineEdit_BaseZero->sizePolicy().hasHeightForWidth());
        lineEdit_BaseZero->setSizePolicy(sizePolicy1);
        lineEdit_BaseZero->setMinimumSize(QSize(100, 50));
        lineEdit_BaseZero->setMaximumSize(QSize(100, 50));

        horizontalLayout_3->addWidget(lineEdit_BaseZero);

        layoutWidget_3 = new QWidget(groupBox);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(290, 290, 209, 57));
        horizontalLayout_18 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        horizontalLayout_18->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(layoutWidget_3);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        sizePolicy.setHeightForWidth(label_16->sizePolicy().hasHeightForWidth());
        label_16->setSizePolicy(sizePolicy);
        label_16->setMinimumSize(QSize(100, 50));
        label_16->setMaximumSize(QSize(100, 50));
        label_16->setFont(font2);
        label_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_18->addWidget(label_16);

        lineEdit_OtherPara = new QLineEdit(layoutWidget_3);
        lineEdit_OtherPara->setObjectName(QString::fromUtf8("lineEdit_OtherPara"));
        sizePolicy1.setHeightForWidth(lineEdit_OtherPara->sizePolicy().hasHeightForWidth());
        lineEdit_OtherPara->setSizePolicy(sizePolicy1);
        lineEdit_OtherPara->setMinimumSize(QSize(100, 50));
        lineEdit_OtherPara->setMaximumSize(QSize(100, 50));

        horizontalLayout_18->addWidget(lineEdit_OtherPara);

        groupBox_2 = new QGroupBox(SettingMenu);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(560, 140, 571, 181));
        groupBox_2->setFont(font1);
        groupBox_2->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"background-color: qlineargradient(x1:0, y1:0, x2:0, y2:1,\n"
"stop:0#E0E0E0, stop: 1 #FFFFFF);\n"
"border:2px solid gray;\n"
"border-radius:5px;\n"
"margin-top:1ex;/* leave space at the top for the title */\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"subcontrol-origin: margin;\n"
"subcontrol-position: top center;\n"
"padding: 0 3px;\n"
"}"));
        layoutWidget2 = new QWidget(groupBox_2);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(38, 60, 481, 62));
        horizontalLayout_16 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        horizontalLayout_16->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(5);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(5, 5, 5, 5);
        label_9 = new QLabel(layoutWidget2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        sizePolicy.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy);
        label_9->setMinimumSize(QSize(100, 50));
        label_9->setMaximumSize(QSize(100, 50));
        label_9->setFont(font);
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_9->addWidget(label_9);

        lineEdit_ValueMotorSpeed = new QLineEdit(layoutWidget2);
        lineEdit_ValueMotorSpeed->setObjectName(QString::fromUtf8("lineEdit_ValueMotorSpeed"));
        sizePolicy1.setHeightForWidth(lineEdit_ValueMotorSpeed->sizePolicy().hasHeightForWidth());
        lineEdit_ValueMotorSpeed->setSizePolicy(sizePolicy1);
        lineEdit_ValueMotorSpeed->setMinimumSize(QSize(100, 50));
        lineEdit_ValueMotorSpeed->setMaximumSize(QSize(100, 50));

        horizontalLayout_9->addWidget(lineEdit_ValueMotorSpeed);


        horizontalLayout_16->addLayout(horizontalLayout_9);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_5);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(5);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(5, 5, 5, 5);
        label_10 = new QLabel(layoutWidget2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy);
        label_10->setMinimumSize(QSize(100, 50));
        label_10->setMaximumSize(QSize(100, 50));
        label_10->setFont(font);
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_10->addWidget(label_10);

        lineEdit_ValueMotorAngle = new QLineEdit(layoutWidget2);
        lineEdit_ValueMotorAngle->setObjectName(QString::fromUtf8("lineEdit_ValueMotorAngle"));
        sizePolicy1.setHeightForWidth(lineEdit_ValueMotorAngle->sizePolicy().hasHeightForWidth());
        lineEdit_ValueMotorAngle->setSizePolicy(sizePolicy1);
        lineEdit_ValueMotorAngle->setMinimumSize(QSize(100, 50));
        lineEdit_ValueMotorAngle->setMaximumSize(QSize(100, 50));

        horizontalLayout_10->addWidget(lineEdit_ValueMotorAngle);


        horizontalLayout_16->addLayout(horizontalLayout_10);


        retranslateUi(SettingMenu);

        QMetaObject::connectSlotsByName(SettingMenu);
    } // setupUi

    void retranslateUi(QWidget *SettingMenu)
    {
        SettingMenu->setWindowTitle(QCoreApplication::translate("SettingMenu", "Form", nullptr));
        retBtn->setText(QCoreApplication::translate("SettingMenu", "\350\277\224\345\233\236", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SettingMenu", "Param Setting", nullptr));
        label->setText(QCoreApplication::translate("SettingMenu", "param0", nullptr));
        label_7->setText(QCoreApplication::translate("SettingMenu", "param0", nullptr));
        label_2->setText(QCoreApplication::translate("SettingMenu", "param0", nullptr));
        label_5->setText(QCoreApplication::translate("SettingMenu", "param0", nullptr));
        label_3->setText(QCoreApplication::translate("SettingMenu", "param0", nullptr));
        label_6->setText(QCoreApplication::translate("SettingMenu", "param0", nullptr));
        label_4->setText(QCoreApplication::translate("SettingMenu", "param0", nullptr));
        label_15->setText(QCoreApplication::translate("SettingMenu", "param0", nullptr));
        label_8->setText(QCoreApplication::translate("SettingMenu", "param0", nullptr));
        label_16->setText(QCoreApplication::translate("SettingMenu", "param0", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("SettingMenu", "Param2 Setting", nullptr));
        label_9->setText(QCoreApplication::translate("SettingMenu", "param0", nullptr));
        label_10->setText(QCoreApplication::translate("SettingMenu", "param0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingMenu: public Ui_SettingMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGMENU_H
