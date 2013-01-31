/********************************************************************************
** Form generated from reading UI file 'TmachineGroupReportViewItemSummaryTable.ui'
**
** Created: Wed Jan 30 13:42:47 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TMACHINEGROUPREPORTVIEWITEMSUMMARYTABLE_H
#define UI_TMACHINEGROUPREPORTVIEWITEMSUMMARYTABLE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDateEdit>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TmachineGroupReportViewItemSummaryTable
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QTableWidget *m_summaryReportTableWidget;
    QLabel *m_machineSummaryReportLabel;
    QDateEdit *m_summaryDateEdit;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *TmachineGroupReportViewItemSummaryTable)
    {
        if (TmachineGroupReportViewItemSummaryTable->objectName().isEmpty())
            TmachineGroupReportViewItemSummaryTable->setObjectName(QString::fromUtf8("TmachineGroupReportViewItemSummaryTable"));
        TmachineGroupReportViewItemSummaryTable->resize(660, 313);
        gridLayoutWidget = new QWidget(TmachineGroupReportViewItemSummaryTable);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 661, 311));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        m_summaryReportTableWidget = new QTableWidget(gridLayoutWidget);
        if (m_summaryReportTableWidget->columnCount() < 4)
            m_summaryReportTableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        m_summaryReportTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        m_summaryReportTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        m_summaryReportTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        m_summaryReportTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        m_summaryReportTableWidget->setObjectName(QString::fromUtf8("m_summaryReportTableWidget"));

        gridLayout->addWidget(m_summaryReportTableWidget, 1, 0, 1, 3);

        m_machineSummaryReportLabel = new QLabel(gridLayoutWidget);
        m_machineSummaryReportLabel->setObjectName(QString::fromUtf8("m_machineSummaryReportLabel"));

        gridLayout->addWidget(m_machineSummaryReportLabel, 0, 0, 1, 1);

        m_summaryDateEdit = new QDateEdit(gridLayoutWidget);
        m_summaryDateEdit->setObjectName(QString::fromUtf8("m_summaryDateEdit"));

        gridLayout->addWidget(m_summaryDateEdit, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);


        retranslateUi(TmachineGroupReportViewItemSummaryTable);

        QMetaObject::connectSlotsByName(TmachineGroupReportViewItemSummaryTable);
    } // setupUi

    void retranslateUi(QWidget *TmachineGroupReportViewItemSummaryTable)
    {
        TmachineGroupReportViewItemSummaryTable->setWindowTitle(QApplication::translate("TmachineGroupReportViewItemSummaryTable", "Form", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = m_summaryReportTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("TmachineGroupReportViewItemSummaryTable", "\345\272\217\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = m_summaryReportTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("TmachineGroupReportViewItemSummaryTable", "\350\265\204\344\272\247\345\244\247\347\261\273", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = m_summaryReportTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("TmachineGroupReportViewItemSummaryTable", "\347\274\226\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = m_summaryReportTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("TmachineGroupReportViewItemSummaryTable", "\351\207\221\351\242\235", 0, QApplication::UnicodeUTF8));
        m_machineSummaryReportLabel->setText(QApplication::translate("TmachineGroupReportViewItemSummaryTable", "\346\200\273\346\234\272\347\273\204\346\212\245\350\241\250", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TmachineGroupReportViewItemSummaryTable: public Ui_TmachineGroupReportViewItemSummaryTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TMACHINEGROUPREPORTVIEWITEMSUMMARYTABLE_H
