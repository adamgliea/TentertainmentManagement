/********************************************************************************
** Form generated from reading UI file 'TinventoryReportViewItemTable.ui'
**
** Created: Wed Feb 6 15:07:39 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TINVENTORYREPORTVIEWITEMTABLE_H
#define UI_TINVENTORYREPORTVIEWITEMTABLE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TinventoryReportViewItemTable
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTableWidget *m_inventoryReportTableWidget;

    void setupUi(QWidget *TinventoryReportViewItemTable)
    {
        if (TinventoryReportViewItemTable->objectName().isEmpty())
            TinventoryReportViewItemTable->setObjectName(QString::fromUtf8("TinventoryReportViewItemTable"));
        TinventoryReportViewItemTable->resize(1000, 660);
        verticalLayoutWidget = new QWidget(TinventoryReportViewItemTable);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(-1, -1, 1001, 661));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        m_inventoryReportTableWidget = new QTableWidget(verticalLayoutWidget);
        if (m_inventoryReportTableWidget->columnCount() < 5)
            m_inventoryReportTableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        m_inventoryReportTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        m_inventoryReportTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        m_inventoryReportTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        m_inventoryReportTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        m_inventoryReportTableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        m_inventoryReportTableWidget->setObjectName(QString::fromUtf8("m_inventoryReportTableWidget"));

        verticalLayout->addWidget(m_inventoryReportTableWidget);


        retranslateUi(TinventoryReportViewItemTable);

        QMetaObject::connectSlotsByName(TinventoryReportViewItemTable);
    } // setupUi

    void retranslateUi(QWidget *TinventoryReportViewItemTable)
    {
        TinventoryReportViewItemTable->setWindowTitle(QApplication::translate("TinventoryReportViewItemTable", "Form", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = m_inventoryReportTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("TinventoryReportViewItemTable", "\346\234\272\345\217\260\345\220\215\347\247\260", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = m_inventoryReportTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("TinventoryReportViewItemTable", "\345\212\240\345\270\201\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = m_inventoryReportTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("TinventoryReportViewItemTable", "\346\200\273\345\212\240\345\270\201", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = m_inventoryReportTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("TinventoryReportViewItemTable", "\346\270\205\345\270\201\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = m_inventoryReportTableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("TinventoryReportViewItemTable", "\346\212\225\345\270\201\347\233\210\345\210\251", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TinventoryReportViewItemTable: public Ui_TinventoryReportViewItemTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TINVENTORYREPORTVIEWITEMTABLE_H
