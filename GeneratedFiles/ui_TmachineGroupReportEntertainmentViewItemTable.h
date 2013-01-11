/********************************************************************************
** Form generated from reading UI file 'TmachineGroupReportEntertainmentViewItemTable.ui'
**
** Created: Fri Jan 11 13:10:27 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TMACHINEGROUPREPORTENTERTAINMENTVIEWITEMTABLE_H
#define UI_TMACHINEGROUPREPORTENTERTAINMENTVIEWITEMTABLE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TmachineGroupReportEntertainmentViewItemTable
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;

    void setupUi(QWidget *TmachineGroupReportEntertainmentViewItemTable)
    {
        if (TmachineGroupReportEntertainmentViewItemTable->objectName().isEmpty())
            TmachineGroupReportEntertainmentViewItemTable->setObjectName(QString::fromUtf8("TmachineGroupReportEntertainmentViewItemTable"));
        TmachineGroupReportEntertainmentViewItemTable->resize(773, 374);
        verticalLayoutWidget = new QWidget(TmachineGroupReportEntertainmentViewItemTable);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 771, 371));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tableWidget = new QTableWidget(verticalLayoutWidget);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout->addWidget(tableWidget);


        retranslateUi(TmachineGroupReportEntertainmentViewItemTable);

        QMetaObject::connectSlotsByName(TmachineGroupReportEntertainmentViewItemTable);
    } // setupUi

    void retranslateUi(QWidget *TmachineGroupReportEntertainmentViewItemTable)
    {
        TmachineGroupReportEntertainmentViewItemTable->setWindowTitle(QApplication::translate("TmachineGroupReportEntertainmentViewItemTable", "Form", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("TmachineGroupReportEntertainmentViewItemTable", "\345\272\217\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("TmachineGroupReportEntertainmentViewItemTable", "\346\234\272\345\217\260\345\220\215\347\247\260", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("TmachineGroupReportEntertainmentViewItemTable", "\345\210\206\345\200\274", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("TmachineGroupReportEntertainmentViewItemTable", "\344\273\212\346\227\245\344\275\216\350\241\250", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("TmachineGroupReportEntertainmentViewItemTable", "\346\230\250\346\227\245\344\275\216\350\241\250", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("TmachineGroupReportEntertainmentViewItemTable", "\345\207\200\344\270\212\345\270\201", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("TmachineGroupReportEntertainmentViewItemTable", "\351\207\221\351\242\235", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TmachineGroupReportEntertainmentViewItemTable: public Ui_TmachineGroupReportEntertainmentViewItemTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TMACHINEGROUPREPORTENTERTAINMENTVIEWITEMTABLE_H
