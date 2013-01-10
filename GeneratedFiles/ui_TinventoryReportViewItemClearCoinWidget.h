/********************************************************************************
** Form generated from reading UI file 'TinventoryReportViewItemClearCoinWidget.ui'
**
** Created: Thu Jan 10 13:52:52 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TINVENTORYREPORTVIEWITEMCLEARCOINWIDGET_H
#define UI_TINVENTORYREPORTVIEWITEMCLEARCOINWIDGET_H

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

class Ui_Form
{
public:
    QPushButton *m_submitButton;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *m_clearCoinValueLabel;
    QLineEdit *m_clearCoinValueLineEdit;
    QLineEdit *m_idLineEdit;
    QLabel *m_idLabel;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(155, 103);
        m_submitButton = new QPushButton(Form);
        m_submitButton->setObjectName(QString::fromUtf8("m_submitButton"));
        m_submitButton->setGeometry(QRect(70, 70, 75, 23));
        layoutWidget = new QWidget(Form);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 141, 48));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        m_clearCoinValueLabel = new QLabel(layoutWidget);
        m_clearCoinValueLabel->setObjectName(QString::fromUtf8("m_clearCoinValueLabel"));

        gridLayout->addWidget(m_clearCoinValueLabel, 1, 0, 1, 2);

        m_clearCoinValueLineEdit = new QLineEdit(layoutWidget);
        m_clearCoinValueLineEdit->setObjectName(QString::fromUtf8("m_clearCoinValueLineEdit"));

        gridLayout->addWidget(m_clearCoinValueLineEdit, 1, 2, 1, 1);

        m_idLineEdit = new QLineEdit(layoutWidget);
        m_idLineEdit->setObjectName(QString::fromUtf8("m_idLineEdit"));

        gridLayout->addWidget(m_idLineEdit, 0, 2, 1, 1);

        m_idLabel = new QLabel(layoutWidget);
        m_idLabel->setObjectName(QString::fromUtf8("m_idLabel"));

        gridLayout->addWidget(m_idLabel, 0, 0, 1, 2);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", 0, QApplication::UnicodeUTF8));
        m_submitButton->setText(QApplication::translate("Form", "\346\217\220\344\272\244", 0, QApplication::UnicodeUTF8));
        m_clearCoinValueLabel->setText(QApplication::translate("Form", "\346\270\205\345\270\201\346\225\260\351\207\217\357\274\232", 0, QApplication::UnicodeUTF8));
        m_idLabel->setText(QApplication::translate("Form", "\347\274\226\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TINVENTORYREPORTVIEWITEMCLEARCOINWIDGET_H
