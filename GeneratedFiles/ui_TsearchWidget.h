/********************************************************************************
** Form generated from reading UI file 'TsearchWidget.ui'
**
** Created: Thu Jan 10 13:52:53 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TSEARCHWIDGET_H
#define UI_TSEARCHWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QPushButton *m_searchButton;
    QWidget *layoutWidget;
    QHBoxLayout *m_accordingToNumberLayout;
    QLabel *m_accordingToNumberLabel;
    QLineEdit *m_accordingToNumberLineEdit;
    QWidget *layoutWidget1;
    QHBoxLayout *m_accordingToDateLayout;
    QLabel *m_accordingToDateLabel;
    QLineEdit *m_dateBeginLineEdit;
    QLabel *m_accordingTodateUntilLabel;
    QLineEdit *m_dateEndLineEdit;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(502, 64);
        m_searchButton = new QPushButton(Form);
        m_searchButton->setObjectName(QString::fromUtf8("m_searchButton"));
        m_searchButton->setGeometry(QRect(420, 10, 61, 41));
        layoutWidget = new QWidget(Form);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 195, 22));
        m_accordingToNumberLayout = new QHBoxLayout(layoutWidget);
        m_accordingToNumberLayout->setObjectName(QString::fromUtf8("m_accordingToNumberLayout"));
        m_accordingToNumberLayout->setContentsMargins(0, 0, 0, 0);
        m_accordingToNumberLabel = new QLabel(layoutWidget);
        m_accordingToNumberLabel->setObjectName(QString::fromUtf8("m_accordingToNumberLabel"));

        m_accordingToNumberLayout->addWidget(m_accordingToNumberLabel);

        m_accordingToNumberLineEdit = new QLineEdit(layoutWidget);
        m_accordingToNumberLineEdit->setObjectName(QString::fromUtf8("m_accordingToNumberLineEdit"));

        m_accordingToNumberLayout->addWidget(m_accordingToNumberLineEdit);

        layoutWidget1 = new QWidget(Form);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 30, 394, 22));
        m_accordingToDateLayout = new QHBoxLayout(layoutWidget1);
        m_accordingToDateLayout->setObjectName(QString::fromUtf8("m_accordingToDateLayout"));
        m_accordingToDateLayout->setContentsMargins(0, 0, 0, 0);
        m_accordingToDateLabel = new QLabel(layoutWidget1);
        m_accordingToDateLabel->setObjectName(QString::fromUtf8("m_accordingToDateLabel"));

        m_accordingToDateLayout->addWidget(m_accordingToDateLabel);

        m_dateBeginLineEdit = new QLineEdit(layoutWidget1);
        m_dateBeginLineEdit->setObjectName(QString::fromUtf8("m_dateBeginLineEdit"));

        m_accordingToDateLayout->addWidget(m_dateBeginLineEdit);

        m_accordingTodateUntilLabel = new QLabel(layoutWidget1);
        m_accordingTodateUntilLabel->setObjectName(QString::fromUtf8("m_accordingTodateUntilLabel"));

        m_accordingToDateLayout->addWidget(m_accordingTodateUntilLabel);

        m_dateEndLineEdit = new QLineEdit(layoutWidget1);
        m_dateEndLineEdit->setObjectName(QString::fromUtf8("m_dateEndLineEdit"));

        m_accordingToDateLayout->addWidget(m_dateEndLineEdit);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", 0, QApplication::UnicodeUTF8));
        m_searchButton->setText(QApplication::translate("Form", "\346\220\234\347\264\242", 0, QApplication::UnicodeUTF8));
        m_accordingToNumberLabel->setText(QApplication::translate("Form", "\346\214\211\347\205\247\347\274\226\345\217\267", 0, QApplication::UnicodeUTF8));
        m_accordingToDateLabel->setText(QApplication::translate("Form", "\346\214\211\347\205\247\346\227\245\346\234\237", 0, QApplication::UnicodeUTF8));
        m_accordingTodateUntilLabel->setText(QApplication::translate("Form", "\350\207\263", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TSEARCHWIDGET_H
