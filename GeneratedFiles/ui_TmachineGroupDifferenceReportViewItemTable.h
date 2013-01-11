/********************************************************************************
** Form generated from reading UI file 'TmachineGroupDifferenceReportViewItemTable.ui'
**
** Created: Fri Jan 11 13:10:27 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TMACHINEGROUPDIFFERENCEREPORTVIEWITEMTABLE_H
#define UI_TMACHINEGROUPDIFFERENCEREPORTVIEWITEMTABLE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TmachineGroupDifferenceReportViewItemTable
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;

    void setupUi(QWidget *TmachineGroupDifferenceReportViewItemTable)
    {
        if (TmachineGroupDifferenceReportViewItemTable->objectName().isEmpty())
            TmachineGroupDifferenceReportViewItemTable->setObjectName(QString::fromUtf8("TmachineGroupDifferenceReportViewItemTable"));
        TmachineGroupDifferenceReportViewItemTable->resize(749, 424);
        verticalLayoutWidget = new QWidget(TmachineGroupDifferenceReportViewItemTable);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 751, 431));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tableWidget = new QTableWidget(verticalLayoutWidget);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
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
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout->addWidget(tableWidget);


        retranslateUi(TmachineGroupDifferenceReportViewItemTable);

        QMetaObject::connectSlotsByName(TmachineGroupDifferenceReportViewItemTable);
    } // setupUi

    void retranslateUi(QWidget *TmachineGroupDifferenceReportViewItemTable)
    {
        TmachineGroupDifferenceReportViewItemTable->setWindowTitle(QApplication::translate("TmachineGroupDifferenceReportViewItemTable", "Form", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("TmachineGroupDifferenceReportViewItemTable", "\345\272\217\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("TmachineGroupDifferenceReportViewItemTable", "\346\234\272\345\217\260\345\220\215\347\247\260", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("TmachineGroupDifferenceReportViewItemTable", "\345\207\200\346\224\266\345\270\201", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("TmachineGroupDifferenceReportViewItemTable", "\346\270\205\346\224\266\345\270\201", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("TmachineGroupDifferenceReportViewItemTable", "\345\267\256\345\274\202\346\257\224\350\276\203", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TmachineGroupDifferenceReportViewItemTable: public Ui_TmachineGroupDifferenceReportViewItemTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TMACHINEGROUPDIFFERENCEREPORTVIEWITEMTABLE_H
