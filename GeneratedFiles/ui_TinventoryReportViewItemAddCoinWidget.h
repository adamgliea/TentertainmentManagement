/********************************************************************************
** Form generated from reading UI file 'TinventoryReportViewItemAddCoinWidget.ui'
**
** Created: Wed Feb 6 19:30:55 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TINVENTORYREPORTVIEWITEMADDCOINWIDGET_H
#define UI_TINVENTORYREPORTVIEWITEMADDCOINWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TinventoryReportViewItemAddCoinWidget
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *m_addCoinValueLabel;
    QLineEdit *m_addCoinValueLineEdit;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *m_buttonBox;

    void setupUi(QWidget *TinventoryReportViewItemAddCoinWidget)
    {
        if (TinventoryReportViewItemAddCoinWidget->objectName().isEmpty())
            TinventoryReportViewItemAddCoinWidget->setObjectName(QString::fromUtf8("TinventoryReportViewItemAddCoinWidget"));
        TinventoryReportViewItemAddCoinWidget->resize(250, 119);
        layoutWidget = new QWidget(TinventoryReportViewItemAddCoinWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 10, 191, 48));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        m_addCoinValueLabel = new QLabel(layoutWidget);
        m_addCoinValueLabel->setObjectName(QString::fromUtf8("m_addCoinValueLabel"));

        gridLayout->addWidget(m_addCoinValueLabel, 0, 0, 1, 2);

        m_addCoinValueLineEdit = new QLineEdit(layoutWidget);
        m_addCoinValueLineEdit->setObjectName(QString::fromUtf8("m_addCoinValueLineEdit"));

        gridLayout->addWidget(m_addCoinValueLineEdit, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        m_buttonBox = new QDialogButtonBox(TinventoryReportViewItemAddCoinWidget);
        m_buttonBox->setObjectName(QString::fromUtf8("m_buttonBox"));
        m_buttonBox->setGeometry(QRect(60, 80, 156, 23));
        m_buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(TinventoryReportViewItemAddCoinWidget);

        QMetaObject::connectSlotsByName(TinventoryReportViewItemAddCoinWidget);
    } // setupUi

    void retranslateUi(QWidget *TinventoryReportViewItemAddCoinWidget)
    {
        TinventoryReportViewItemAddCoinWidget->setWindowTitle(QApplication::translate("TinventoryReportViewItemAddCoinWidget", "Form", 0, QApplication::UnicodeUTF8));
        m_addCoinValueLabel->setText(QApplication::translate("TinventoryReportViewItemAddCoinWidget", "\345\212\240\345\270\201\346\225\260\351\207\217\357\274\232", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TinventoryReportViewItemAddCoinWidget: public Ui_TinventoryReportViewItemAddCoinWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TINVENTORYREPORTVIEWITEMADDCOINWIDGET_H
