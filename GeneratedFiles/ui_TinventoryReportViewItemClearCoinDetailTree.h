/********************************************************************************
** Form generated from reading UI file 'TinventoryReportViewItemClearCoinDetailTree.ui'
**
** Created: Thu Jan 10 13:52:52 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TINVENTORYREPORTVIEWITEMCLEARCOINDETAILTREE_H
#define UI_TINVENTORYREPORTVIEWITEMCLEARCOINDETAILTREE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTreeWidget *m_inventoryReportClearCoinDetailTreeWidget;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(600, 267);
        verticalLayoutWidget = new QWidget(Form);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(-1, -1, 601, 271));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        m_inventoryReportClearCoinDetailTreeWidget = new QTreeWidget(verticalLayoutWidget);
        m_inventoryReportClearCoinDetailTreeWidget->setObjectName(QString::fromUtf8("m_inventoryReportClearCoinDetailTreeWidget"));

        verticalLayout->addWidget(m_inventoryReportClearCoinDetailTreeWidget);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = m_inventoryReportClearCoinDetailTreeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("Form", "\346\270\205\345\270\201\345\200\274", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("Form", "\346\270\205\345\270\201\351\241\271\347\233\256", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TINVENTORYREPORTVIEWITEMCLEARCOINDETAILTREE_H
