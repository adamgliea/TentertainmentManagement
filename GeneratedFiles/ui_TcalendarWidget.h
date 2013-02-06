/********************************************************************************
** Form generated from reading UI file 'TcalendarWidget.ui'
**
** Created: Wed Feb 6 10:16:13 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCALENDARWIDGET_H
#define UI_TCALENDARWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCalendarWidget>
#include <QtGui/QHeaderView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TcalendarWidget
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QCalendarWidget *calendarWidget;

    void setupUi(QWidget *TcalendarWidget)
    {
        if (TcalendarWidget->objectName().isEmpty())
            TcalendarWidget->setObjectName(QString::fromUtf8("TcalendarWidget"));
        TcalendarWidget->resize(424, 231);
        verticalLayoutWidget = new QWidget(TcalendarWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 421, 231));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        calendarWidget = new QCalendarWidget(verticalLayoutWidget);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));

        verticalLayout->addWidget(calendarWidget);


        retranslateUi(TcalendarWidget);

        QMetaObject::connectSlotsByName(TcalendarWidget);
    } // setupUi

    void retranslateUi(QWidget *TcalendarWidget)
    {
        TcalendarWidget->setWindowTitle(QApplication::translate("TcalendarWidget", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TcalendarWidget: public Ui_TcalendarWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCALENDARWIDGET_H
