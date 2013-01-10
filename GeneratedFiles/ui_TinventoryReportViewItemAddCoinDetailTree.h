/********************************************************************************
** Form generated from reading UI file 'TinventoryReportViewItemAddCoinDetailTree.ui'
**
** Created: Thu Jan 10 13:52:51 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TINVENTORYREPORTVIEWITEMADDCOINDETAILTREE_H
#define UI_TINVENTORYREPORTVIEWITEMADDCOINDETAILTREE_H

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
    QTreeWidget *m_inventoryReportClearAddDetailTreeWidget;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(599, 268);
        verticalLayoutWidget = new QWidget(Form);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(-1, -1, 601, 271));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        m_inventoryReportClearAddDetailTreeWidget = new QTreeWidget(verticalLayoutWidget);
        m_inventoryReportClearAddDetailTreeWidget->setObjectName(QString::fromUtf8("m_inventoryReportClearAddDetailTreeWidget"));

        verticalLayout->addWidget(m_inventoryReportClearAddDetailTreeWidget);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = m_inventoryReportClearAddDetailTreeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("Form", "\345\212\240\345\270\201\345\200\274", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("Form", "\345\212\240\345\270\201\351\241\271\347\233\256", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TINVENTORYREPORTVIEWITEMADDCOINDETAILTREE_H
