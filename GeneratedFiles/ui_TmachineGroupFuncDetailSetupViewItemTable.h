/********************************************************************************
** Form generated from reading UI file 'TmachineGroupFuncDetailSetupViewItemTable.ui'
**
** Created: Wed Feb 6 10:16:14 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TMACHINEGROUPFUNCDETAILSETUPVIEWITEMTABLE_H
#define UI_TMACHINEGROUPFUNCDETAILSETUPVIEWITEMTABLE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TmachineGroupFuncDetailSetupViewItemTable
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *mainLayout;
    QTableWidget *m_machineGroupFuncDetailSetupTable;

    void setupUi(QWidget *TmachineGroupFuncDetailSetupViewItemTable)
    {
        if (TmachineGroupFuncDetailSetupViewItemTable->objectName().isEmpty())
            TmachineGroupFuncDetailSetupViewItemTable->setObjectName(QString::fromUtf8("TmachineGroupFuncDetailSetupViewItemTable"));
        TmachineGroupFuncDetailSetupViewItemTable->resize(1000, 660);
        layoutWidget = new QWidget(TmachineGroupFuncDetailSetupViewItemTable);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 1001, 661));
        mainLayout = new QVBoxLayout(layoutWidget);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        mainLayout->setContentsMargins(0, 0, 0, 0);
        m_machineGroupFuncDetailSetupTable = new QTableWidget(layoutWidget);
        if (m_machineGroupFuncDetailSetupTable->columnCount() < 12)
            m_machineGroupFuncDetailSetupTable->setColumnCount(12);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        m_machineGroupFuncDetailSetupTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        m_machineGroupFuncDetailSetupTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        m_machineGroupFuncDetailSetupTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        m_machineGroupFuncDetailSetupTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        m_machineGroupFuncDetailSetupTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        m_machineGroupFuncDetailSetupTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        m_machineGroupFuncDetailSetupTable->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        m_machineGroupFuncDetailSetupTable->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        m_machineGroupFuncDetailSetupTable->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        m_machineGroupFuncDetailSetupTable->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        m_machineGroupFuncDetailSetupTable->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        m_machineGroupFuncDetailSetupTable->setHorizontalHeaderItem(11, __qtablewidgetitem11);
        m_machineGroupFuncDetailSetupTable->setObjectName(QString::fromUtf8("m_machineGroupFuncDetailSetupTable"));

        mainLayout->addWidget(m_machineGroupFuncDetailSetupTable);


        retranslateUi(TmachineGroupFuncDetailSetupViewItemTable);

        QMetaObject::connectSlotsByName(TmachineGroupFuncDetailSetupViewItemTable);
    } // setupUi

    void retranslateUi(QWidget *TmachineGroupFuncDetailSetupViewItemTable)
    {
        TmachineGroupFuncDetailSetupViewItemTable->setWindowTitle(QApplication::translate("TmachineGroupFuncDetailSetupViewItemTable", "Form", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = m_machineGroupFuncDetailSetupTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("TmachineGroupFuncDetailSetupViewItemTable", "\346\234\272\347\273\204\347\274\226\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = m_machineGroupFuncDetailSetupTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("TmachineGroupFuncDetailSetupViewItemTable", "\345\212\237\350\203\275", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = m_machineGroupFuncDetailSetupTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("TmachineGroupFuncDetailSetupViewItemTable", "\350\256\276\347\275\256\345\270\201\347\247\215", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = m_machineGroupFuncDetailSetupTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("TmachineGroupFuncDetailSetupViewItemTable", "\350\256\276\347\275\256\345\210\206\345\200\274", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = m_machineGroupFuncDetailSetupTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("TmachineGroupFuncDetailSetupViewItemTable", "\344\270\273\346\234\272\347\216\207", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = m_machineGroupFuncDetailSetupTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("TmachineGroupFuncDetailSetupViewItemTable", "\345\207\240\347\216\207\350\214\203\345\233\264", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = m_machineGroupFuncDetailSetupTable->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("TmachineGroupFuncDetailSetupViewItemTable", "\346\234\200\345\244\247\345\216\213\345\210\206", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = m_machineGroupFuncDetailSetupTable->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("TmachineGroupFuncDetailSetupViewItemTable", "\346\234\200\345\260\217\345\216\213\345\210\206", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = m_machineGroupFuncDetailSetupTable->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("TmachineGroupFuncDetailSetupViewItemTable", "\345\272\204\351\227\262\345\216\213\345\210\206", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = m_machineGroupFuncDetailSetupTable->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("TmachineGroupFuncDetailSetupViewItemTable", "\345\222\214\345\261\200\345\216\213\345\210\206", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = m_machineGroupFuncDetailSetupTable->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QApplication::translate("TmachineGroupFuncDetailSetupViewItemTable", "\346\212\225\347\240\201\345\244\251\346\225\260", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem11 = m_machineGroupFuncDetailSetupTable->horizontalHeaderItem(11);
        ___qtablewidgetitem11->setText(QApplication::translate("TmachineGroupFuncDetailSetupViewItemTable", "\346\270\205\345\270\201\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TmachineGroupFuncDetailSetupViewItemTable: public Ui_TmachineGroupFuncDetailSetupViewItemTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TMACHINEGROUPFUNCDETAILSETUPVIEWITEMTABLE_H
