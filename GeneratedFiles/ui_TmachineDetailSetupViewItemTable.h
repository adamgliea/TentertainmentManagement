/********************************************************************************
** Form generated from reading UI file 'TmachineDetailSetupViewItemTable.ui'
**
** Created: Mon Jan 28 16:46:05 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TMACHINEDETAILSETUPVIEWITEMTABLE_H
#define UI_TMACHINEDETAILSETUPVIEWITEMTABLE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TmachineDetailSetupViewItemTable
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *mainLayout;
    QTableWidget *tableWidget;

    void setupUi(QWidget *TmachineDetailSetupViewItemTable)
    {
        if (TmachineDetailSetupViewItemTable->objectName().isEmpty())
            TmachineDetailSetupViewItemTable->setObjectName(QString::fromUtf8("TmachineDetailSetupViewItemTable"));
        TmachineDetailSetupViewItemTable->resize(739, 99);
        verticalLayoutWidget = new QWidget(TmachineDetailSetupViewItemTable);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(-1, -1, 741, 101));
        mainLayout = new QVBoxLayout(verticalLayoutWidget);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        mainLayout->setContentsMargins(0, 0, 0, 0);
        tableWidget = new QTableWidget(verticalLayoutWidget);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
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
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(true);
        tableWidget->horizontalHeader()->setDefaultSectionSize(120);

        mainLayout->addWidget(tableWidget);


        retranslateUi(TmachineDetailSetupViewItemTable);

        QMetaObject::connectSlotsByName(TmachineDetailSetupViewItemTable);
    } // setupUi

    void retranslateUi(QWidget *TmachineDetailSetupViewItemTable)
    {
        TmachineDetailSetupViewItemTable->setWindowTitle(QApplication::translate("TmachineDetailSetupViewItemTable", "Form", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("TmachineDetailSetupViewItemTable", "\346\234\272\347\273\204\347\274\226\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("TmachineDetailSetupViewItemTable", "\345\207\272\345\234\272\345\216\202\345\256\266", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("TmachineDetailSetupViewItemTable", "\345\216\202\345\256\266\347\224\265\350\257\235", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("TmachineDetailSetupViewItemTable", "\345\255\230\346\224\276\345\234\260\347\202\271", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("TmachineDetailSetupViewItemTable", "\350\220\245\344\270\232\347\212\266\345\206\265", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("TmachineDetailSetupViewItemTable", "\345\244\207\346\263\250", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TmachineDetailSetupViewItemTable: public Ui_TmachineDetailSetupViewItemTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TMACHINEDETAILSETUPVIEWITEMTABLE_H
