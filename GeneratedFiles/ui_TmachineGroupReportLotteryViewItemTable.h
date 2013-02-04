/********************************************************************************
** Form generated from reading UI file 'TmachineGroupReportLotteryViewItemTable.ui'
**
** Created: Mon Feb 4 14:03:37 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TMACHINEGROUPREPORTLOTTERYVIEWITEMTABLE_H
#define UI_TMACHINEGROUPREPORTLOTTERYVIEWITEMTABLE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TmachineGroupReportLotteryViewItemTable
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTableWidget *m_reportLotteryTableWidget;

    void setupUi(QWidget *TmachineGroupReportLotteryViewItemTable)
    {
        if (TmachineGroupReportLotteryViewItemTable->objectName().isEmpty())
            TmachineGroupReportLotteryViewItemTable->setObjectName(QString::fromUtf8("TmachineGroupReportLotteryViewItemTable"));
        TmachineGroupReportLotteryViewItemTable->resize(940, 390);
        verticalLayoutWidget = new QWidget(TmachineGroupReportLotteryViewItemTable);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 941, 391));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        m_reportLotteryTableWidget = new QTableWidget(verticalLayoutWidget);
        if (m_reportLotteryTableWidget->columnCount() < 18)
            m_reportLotteryTableWidget->setColumnCount(18);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        m_reportLotteryTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        m_reportLotteryTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        m_reportLotteryTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        m_reportLotteryTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        m_reportLotteryTableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        m_reportLotteryTableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        m_reportLotteryTableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        m_reportLotteryTableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        m_reportLotteryTableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        m_reportLotteryTableWidget->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        m_reportLotteryTableWidget->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        m_reportLotteryTableWidget->setHorizontalHeaderItem(11, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        m_reportLotteryTableWidget->setHorizontalHeaderItem(12, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        m_reportLotteryTableWidget->setHorizontalHeaderItem(13, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        m_reportLotteryTableWidget->setHorizontalHeaderItem(14, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        m_reportLotteryTableWidget->setHorizontalHeaderItem(15, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        m_reportLotteryTableWidget->setHorizontalHeaderItem(16, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        m_reportLotteryTableWidget->setHorizontalHeaderItem(17, __qtablewidgetitem17);
        m_reportLotteryTableWidget->setObjectName(QString::fromUtf8("m_reportLotteryTableWidget"));

        verticalLayout->addWidget(m_reportLotteryTableWidget);


        retranslateUi(TmachineGroupReportLotteryViewItemTable);

        QMetaObject::connectSlotsByName(TmachineGroupReportLotteryViewItemTable);
    } // setupUi

    void retranslateUi(QWidget *TmachineGroupReportLotteryViewItemTable)
    {
        TmachineGroupReportLotteryViewItemTable->setWindowTitle(QApplication::translate("TmachineGroupReportLotteryViewItemTable", "Form", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = m_reportLotteryTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("TmachineGroupReportLotteryViewItemTable", "\345\272\217\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = m_reportLotteryTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("TmachineGroupReportLotteryViewItemTable", "\346\234\272\345\217\260\345\220\215\347\247\260", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = m_reportLotteryTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("TmachineGroupReportLotteryViewItemTable", "\345\210\206\345\200\274", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = m_reportLotteryTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("TmachineGroupReportLotteryViewItemTable", "\344\273\212\346\212\225", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = m_reportLotteryTableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("TmachineGroupReportLotteryViewItemTable", "\344\273\212\345\207\272", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = m_reportLotteryTableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("TmachineGroupReportLotteryViewItemTable", "\346\230\250\346\212\225", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = m_reportLotteryTableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("TmachineGroupReportLotteryViewItemTable", "\346\230\250\345\207\272", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = m_reportLotteryTableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("TmachineGroupReportLotteryViewItemTable", "\346\212\225\345\270\201\345\267\256", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = m_reportLotteryTableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("TmachineGroupReportLotteryViewItemTable", "\351\200\200\345\270\201\345\267\256", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = m_reportLotteryTableWidget->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("TmachineGroupReportLotteryViewItemTable", "\345\207\200\344\270\212\345\270\201", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = m_reportLotteryTableWidget->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QApplication::translate("TmachineGroupReportLotteryViewItemTable", "\351\207\221\351\242\235", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem11 = m_reportLotteryTableWidget->horizontalHeaderItem(11);
        ___qtablewidgetitem11->setText(QApplication::translate("TmachineGroupReportLotteryViewItemTable", "\344\273\212\345\274\200", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem12 = m_reportLotteryTableWidget->horizontalHeaderItem(12);
        ___qtablewidgetitem12->setText(QApplication::translate("TmachineGroupReportLotteryViewItemTable", "\344\273\212\346\264\227", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem13 = m_reportLotteryTableWidget->horizontalHeaderItem(13);
        ___qtablewidgetitem13->setText(QApplication::translate("TmachineGroupReportLotteryViewItemTable", "\346\230\250\345\274\200", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem14 = m_reportLotteryTableWidget->horizontalHeaderItem(14);
        ___qtablewidgetitem14->setText(QApplication::translate("TmachineGroupReportLotteryViewItemTable", "\346\230\250\346\264\227", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem15 = m_reportLotteryTableWidget->horizontalHeaderItem(15);
        ___qtablewidgetitem15->setText(QApplication::translate("TmachineGroupReportLotteryViewItemTable", "\345\274\200\345\210\206\345\267\256", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem16 = m_reportLotteryTableWidget->horizontalHeaderItem(16);
        ___qtablewidgetitem16->setText(QApplication::translate("TmachineGroupReportLotteryViewItemTable", "\346\264\227\345\210\206\345\267\256", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem17 = m_reportLotteryTableWidget->horizontalHeaderItem(17);
        ___qtablewidgetitem17->setText(QApplication::translate("TmachineGroupReportLotteryViewItemTable", "\345\274\200\346\264\227\345\267\256", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TmachineGroupReportLotteryViewItemTable: public Ui_TmachineGroupReportLotteryViewItemTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TMACHINEGROUPREPORTLOTTERYVIEWITEMTABLE_H
