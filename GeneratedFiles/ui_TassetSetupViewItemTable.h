/********************************************************************************
** Form generated from reading UI file 'TassetSetupViewItemTable.ui'
**
** Created: Fri Jan 11 14:14:00 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASSETSETUPVIEWITEMTABLE_H
#define UI_TASSETSETUPVIEWITEMTABLE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TassetSetupViewItemTable
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *mainLayout;
    QTableWidget *tableWidget;

    void setupUi(QWidget *TassetSetupViewItemTable)
    {
        if (TassetSetupViewItemTable->objectName().isEmpty())
            TassetSetupViewItemTable->setObjectName(QString::fromUtf8("TassetSetupViewItemTable"));
        TassetSetupViewItemTable->resize(747, 219);
        verticalLayoutWidget = new QWidget(TassetSetupViewItemTable);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(-10, 0, 751, 211));
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

        mainLayout->addWidget(tableWidget);


        retranslateUi(TassetSetupViewItemTable);

        QMetaObject::connectSlotsByName(TassetSetupViewItemTable);
    } // setupUi

    void retranslateUi(QWidget *TassetSetupViewItemTable)
    {
        TassetSetupViewItemTable->setWindowTitle(QApplication::translate("TassetSetupViewItemTable", "\345\244\247\347\261\273\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("TassetSetupViewItemTable", "\345\244\247\347\261\273\347\232\204\345\220\215\347\247\260", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("TassetSetupViewItemTable", "\346\270\205\345\270\201\345\221\250\346\234\237\350\256\276\345\256\232", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("TassetSetupViewItemTable", "\346\270\205\345\270\201\345\267\256\345\274\202\350\256\276\345\256\232", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("TassetSetupViewItemTable", "\346\234\272\345\217\260\350\264\237\345\200\272\350\256\276\345\256\232", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("TassetSetupViewItemTable", "\350\277\236\347\273\255\344\272\217\346\215\237\345\244\251\346\225\260\350\256\276\345\256\232", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("TassetSetupViewItemTable", "\350\264\246\347\233\256\346\212\245\350\241\250\351\200\211\346\213\251", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TassetSetupViewItemTable: public Ui_TassetSetupViewItemTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASSETSETUPVIEWITEMTABLE_H