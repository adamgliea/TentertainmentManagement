/********************************************************************************
** Form generated from reading UI file 'TmachineGroupReportGiftViewItemTable.ui'
**
** Created: Wed Jan 30 13:42:47 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TMACHINEGROUPREPORTGIFTVIEWITEMTABLE_H
#define UI_TMACHINEGROUPREPORTGIFTVIEWITEMTABLE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TmachineGroupReportGiftViewItemTable
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTableWidget *m_reportGiftTableWidget;

    void setupUi(QWidget *TmachineGroupReportGiftViewItemTable)
    {
        if (TmachineGroupReportGiftViewItemTable->objectName().isEmpty())
            TmachineGroupReportGiftViewItemTable->setObjectName(QString::fromUtf8("TmachineGroupReportGiftViewItemTable"));
        TmachineGroupReportGiftViewItemTable->resize(908, 431);
        verticalLayoutWidget = new QWidget(TmachineGroupReportGiftViewItemTable);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 911, 431));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        m_reportGiftTableWidget = new QTableWidget(verticalLayoutWidget);
        if (m_reportGiftTableWidget->columnCount() < 11)
            m_reportGiftTableWidget->setColumnCount(11);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        m_reportGiftTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        m_reportGiftTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        m_reportGiftTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        m_reportGiftTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        m_reportGiftTableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        m_reportGiftTableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        m_reportGiftTableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        m_reportGiftTableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        m_reportGiftTableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        m_reportGiftTableWidget->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        m_reportGiftTableWidget->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        m_reportGiftTableWidget->setObjectName(QString::fromUtf8("m_reportGiftTableWidget"));

        verticalLayout->addWidget(m_reportGiftTableWidget);


        retranslateUi(TmachineGroupReportGiftViewItemTable);

        QMetaObject::connectSlotsByName(TmachineGroupReportGiftViewItemTable);
    } // setupUi

    void retranslateUi(QWidget *TmachineGroupReportGiftViewItemTable)
    {
        TmachineGroupReportGiftViewItemTable->setWindowTitle(QApplication::translate("TmachineGroupReportGiftViewItemTable", "Form", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = m_reportGiftTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("TmachineGroupReportGiftViewItemTable", "\345\272\217\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = m_reportGiftTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("TmachineGroupReportGiftViewItemTable", "\346\234\272\345\217\260\345\220\215\347\247\260", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = m_reportGiftTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("TmachineGroupReportGiftViewItemTable", "\345\210\206\345\200\274", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = m_reportGiftTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("TmachineGroupReportGiftViewItemTable", "\344\273\212\346\212\225", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = m_reportGiftTableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("TmachineGroupReportGiftViewItemTable", "\344\273\212\345\207\272", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = m_reportGiftTableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("TmachineGroupReportGiftViewItemTable", "\346\230\250\346\212\225", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = m_reportGiftTableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("TmachineGroupReportGiftViewItemTable", "\346\230\250\345\207\272", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = m_reportGiftTableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("TmachineGroupReportGiftViewItemTable", "\346\212\225\345\270\201\345\267\256", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem8 = m_reportGiftTableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("TmachineGroupReportGiftViewItemTable", "\345\207\272\347\245\250\345\267\256", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem9 = m_reportGiftTableWidget->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("TmachineGroupReportGiftViewItemTable", "\345\207\200\344\270\212\345\270\201", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem10 = m_reportGiftTableWidget->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QApplication::translate("TmachineGroupReportGiftViewItemTable", "\351\207\221\351\242\235", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TmachineGroupReportGiftViewItemTable: public Ui_TmachineGroupReportGiftViewItemTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TMACHINEGROUPREPORTGIFTVIEWITEMTABLE_H
