/********************************************************************************
** Form generated from reading UI file 'TmachineGroupFuncBaseSetupViewItemTable.ui'
**
** Created: Thu Feb 7 23:02:19 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TMACHINEGROUPFUNCBASESETUPVIEWITEMTABLE_H
#define UI_TMACHINEGROUPFUNCBASESETUPVIEWITEMTABLE_H

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
    QTableWidget *m_machineGroupFuncBaseSetupTable;

    void setupUi(QWidget *TmachineDetailSetupViewItemTable)
    {
        if (TmachineDetailSetupViewItemTable->objectName().isEmpty())
            TmachineDetailSetupViewItemTable->setObjectName(QString::fromUtf8("TmachineDetailSetupViewItemTable"));
        TmachineDetailSetupViewItemTable->resize(1000, 660);
        verticalLayoutWidget = new QWidget(TmachineDetailSetupViewItemTable);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(-1, -1, 1001, 701));
        mainLayout = new QVBoxLayout(verticalLayoutWidget);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        mainLayout->setContentsMargins(0, 0, 0, 0);
        m_machineGroupFuncBaseSetupTable = new QTableWidget(verticalLayoutWidget);
        if (m_machineGroupFuncBaseSetupTable->columnCount() < 5)
            m_machineGroupFuncBaseSetupTable->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        m_machineGroupFuncBaseSetupTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        m_machineGroupFuncBaseSetupTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        m_machineGroupFuncBaseSetupTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        m_machineGroupFuncBaseSetupTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        m_machineGroupFuncBaseSetupTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        m_machineGroupFuncBaseSetupTable->setObjectName(QString::fromUtf8("m_machineGroupFuncBaseSetupTable"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_machineGroupFuncBaseSetupTable->sizePolicy().hasHeightForWidth());
        m_machineGroupFuncBaseSetupTable->setSizePolicy(sizePolicy);
        m_machineGroupFuncBaseSetupTable->horizontalHeader()->setCascadingSectionResizes(true);
        m_machineGroupFuncBaseSetupTable->horizontalHeader()->setDefaultSectionSize(120);

        mainLayout->addWidget(m_machineGroupFuncBaseSetupTable);


        retranslateUi(TmachineDetailSetupViewItemTable);

        QMetaObject::connectSlotsByName(TmachineDetailSetupViewItemTable);
    } // setupUi

    void retranslateUi(QWidget *TmachineDetailSetupViewItemTable)
    {
        TmachineDetailSetupViewItemTable->setWindowTitle(QApplication::translate("TmachineDetailSetupViewItemTable", "Form", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = m_machineGroupFuncBaseSetupTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("TmachineDetailSetupViewItemTable", "\345\207\272\345\234\272\345\216\202\345\256\266", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = m_machineGroupFuncBaseSetupTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("TmachineDetailSetupViewItemTable", "\345\216\202\345\256\266\347\224\265\350\257\235", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = m_machineGroupFuncBaseSetupTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("TmachineDetailSetupViewItemTable", "\345\255\230\346\224\276\345\234\260\347\202\271", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = m_machineGroupFuncBaseSetupTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("TmachineDetailSetupViewItemTable", "\350\220\245\344\270\232\347\212\266\345\206\265", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = m_machineGroupFuncBaseSetupTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("TmachineDetailSetupViewItemTable", "\345\244\207\346\263\250", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TmachineDetailSetupViewItemTable: public Ui_TmachineDetailSetupViewItemTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TMACHINEGROUPFUNCBASESETUPVIEWITEMTABLE_H
