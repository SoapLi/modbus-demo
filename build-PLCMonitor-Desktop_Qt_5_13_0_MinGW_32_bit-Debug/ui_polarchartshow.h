/********************************************************************************
** Form generated from reading UI file 'polarchartshow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POLARCHARTSHOW_H
#define UI_POLARCHARTSHOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_polarChartShow
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;

    void setupUi(QWidget *polarChartShow)
    {
        if (polarChartShow->objectName().isEmpty())
            polarChartShow->setObjectName(QString::fromUtf8("polarChartShow"));
        polarChartShow->resize(823, 561);
        horizontalLayoutWidget = new QWidget(polarChartShow);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 10, 791, 521));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(polarChartShow);

        QMetaObject::connectSlotsByName(polarChartShow);
    } // setupUi

    void retranslateUi(QWidget *polarChartShow)
    {
        polarChartShow->setWindowTitle(QCoreApplication::translate("polarChartShow", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class polarChartShow: public Ui_polarChartShow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POLARCHARTSHOW_H
