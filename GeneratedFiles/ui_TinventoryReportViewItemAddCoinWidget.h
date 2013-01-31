/********************************************************************************
** Form generated from reading UI file 'TinventoryReportViewItemAddCoinWidget.ui'
**
** Created: Wed Jan 30 13:42:46 2013
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
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TinventoryReportViewItemAddCoinWidget
{
public:
    QPushButton *m_submitButton;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *m_addCoinValueLabel;
    QLineEdit *m_addCoinValueLineEdit;
    QLineEdit *m_idLineEdit;
    QLabel *m_idLabel;

    void setupUi(QWidget *TinventoryReportViewItemAddCoinWidget)
    {
        if (TinventoryReportViewItemAddCoinWidget->objectName().isEmpty())
            TinventoryReportViewItemAddCoinWidget->setObjectName(QString::fromUtf8("TinventoryReportViewItemAddCoinWidget"));
        TinventoryReportViewItemAddCoinWidget->resize(150, 87);
        m_submitButton = new QPushButton(TinventoryReportViewItemAddCoinWidget);
        m_submitButton->setObjectName(QString::fromUtf8("m_submitButton"));
        m_submitButton->setGeometry(QRect(70, 60, 75, 23));
        layoutWidget = new QWidget(TinventoryReportViewItemAddCoinWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 141, 48));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        m_addCoinValueLabel = new QLabel(layoutWidget);
        m_addCoinValueLabel->setObjectName(QString::fromUtf8("m_addCoinValueLabel"));

        gridLayout->addWidget(m_addCoinValueLabel, 1, 0, 1, 2);

        m_addCoinValueLineEdit = new QLineEdit(layoutWidget);
        m_addCoinValueLineEdit->setObjectName(QString::fromUtf8("m_addCoinValueLineEdit"));

        gridLayout->addWidget(m_addCoinValueLineEdit, 1, 2, 1, 1);

        m_idLineEdit = new QLineEdit(layoutWidget);
        m_idLineEdit->setObjectName(QString::fromUtf8("m_idLineEdit"));

        gridLayout->addWidget(m_idLineEdit, 0, 2, 1, 1);

        m_idLabel = new QLabel(layoutWidget);
        m_idLabel->setObjectName(QString::fromUtf8("m_idLabel"));

        gridLayout->addWidget(m_idLabel, 0, 0, 1, 2);


        retranslateUi(TinventoryReportViewItemAddCoinWidget);

        QMetaObject::connectSlotsByName(TinventoryReportViewItemAddCoinWidget);
    } // setupUi

    void retranslateUi(QWidget *TinventoryReportViewItemAddCoinWidget)
    {
        TinventoryReportViewItemAddCoinWidget->setWindowTitle(QApplication::translate("TinventoryReportViewItemAddCoinWidget", "Form", 0, QApplication::UnicodeUTF8));
        m_submitButton->setText(QApplication::translate("TinventoryReportViewItemAddCoinWidget", "\346\217\220\344\272\244", 0, QApplication::UnicodeUTF8));
        m_addCoinValueLabel->setText(QApplication::translate("TinventoryReportViewItemAddCoinWidget", "\345\212\240\345\270\201\346\225\260\351\207\217\357\274\232", 0, QApplication::UnicodeUTF8));
        m_idLabel->setText(QApplication::translate("TinventoryReportViewItemAddCoinWidget", "\347\274\226\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TinventoryReportViewItemAddCoinWidget: public Ui_TinventoryReportViewItemAddCoinWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TINVENTORYREPORTVIEWITEMADDCOINWIDGET_H
