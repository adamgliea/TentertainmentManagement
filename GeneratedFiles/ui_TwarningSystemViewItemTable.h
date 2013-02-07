/********************************************************************************
** Form generated from reading UI file 'TwarningSystemViewItemTable.ui'
**
** Created: Thu Feb 7 23:02:19 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TWARNINGSYSTEMVIEWITEMTABLE_H
#define UI_TWARNINGSYSTEMVIEWITEMTABLE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TwarningSystemViewItemTable
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTableWidget *m_warningSystemTableWidget;

    void setupUi(QWidget *TwarningSystemViewItemTable)
    {
        if (TwarningSystemViewItemTable->objectName().isEmpty())
            TwarningSystemViewItemTable->setObjectName(QString::fromUtf8("TwarningSystemViewItemTable"));
        TwarningSystemViewItemTable->resize(920, 550);
        verticalLayoutWidget = new QWidget(TwarningSystemViewItemTable);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(-1, -1, 931, 561));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        m_warningSystemTableWidget = new QTableWidget(verticalLayoutWidget);
        if (m_warningSystemTableWidget->columnCount() < 7)
            m_warningSystemTableWidget->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        m_warningSystemTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        m_warningSystemTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        m_warningSystemTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        m_warningSystemTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        m_warningSystemTableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        m_warningSystemTableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        m_warningSystemTableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        m_warningSystemTableWidget->setObjectName(QString::fromUtf8("m_warningSystemTableWidget"));

        verticalLayout->addWidget(m_warningSystemTableWidget);


        retranslateUi(TwarningSystemViewItemTable);

        QMetaObject::connectSlotsByName(TwarningSystemViewItemTable);
    } // setupUi

    void retranslateUi(QWidget *TwarningSystemViewItemTable)
    {
        TwarningSystemViewItemTable->setWindowTitle(QApplication::translate("TwarningSystemViewItemTable", "Form", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = m_warningSystemTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("TwarningSystemViewItemTable", "\345\272\217\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = m_warningSystemTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("TwarningSystemViewItemTable", "\346\234\272\345\217\260\345\220\215\347\247\260", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = m_warningSystemTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("TwarningSystemViewItemTable", "\345\207\200\346\224\266\345\270\201", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = m_warningSystemTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("TwarningSystemViewItemTable", "\346\270\205\346\224\266\345\270\201", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = m_warningSystemTableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("TwarningSystemViewItemTable", "\345\267\256\345\274\202\346\257\224\350\276\203", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = m_warningSystemTableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("TwarningSystemViewItemTable", "\351\207\221\351\242\235", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = m_warningSystemTableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("TwarningSystemViewItemTable", "\350\277\236\347\273\255\344\272\217\346\215\237\344\277\241\346\201\257", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TwarningSystemViewItemTable: public Ui_TwarningSystemViewItemTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TWARNINGSYSTEMVIEWITEMTABLE_H
