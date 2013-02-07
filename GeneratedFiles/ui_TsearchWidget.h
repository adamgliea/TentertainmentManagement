/********************************************************************************
** Form generated from reading UI file 'TsearchWidget.ui'
**
** Created: Thu Feb 7 15:40:29 2013
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
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TsearchWidget
{
public:
    QWidget *layoutWidget;
    QGridLayout *m_mainLayout;
    QPushButton *m_searchButton;
    QPushButton *m_dateBeginButton;
    QPushButton *m_dateEndButton;
    QLabel *m_accordingTodateUntilLabel;
    QLabel *m_accordingToDateLabel;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *TsearchWidget)
    {
        if (TsearchWidget->objectName().isEmpty())
            TsearchWidget->setObjectName(QString::fromUtf8("TsearchWidget"));
        TsearchWidget->resize(354, 80);
        layoutWidget = new QWidget(TsearchWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 301, 79));
        m_mainLayout = new QGridLayout(layoutWidget);
        m_mainLayout->setObjectName(QString::fromUtf8("m_mainLayout"));
        m_mainLayout->setContentsMargins(0, 0, 0, 0);
        m_searchButton = new QPushButton(layoutWidget);
        m_searchButton->setObjectName(QString::fromUtf8("m_searchButton"));

        m_mainLayout->addWidget(m_searchButton, 0, 5, 1, 1);

        m_dateBeginButton = new QPushButton(layoutWidget);
        m_dateBeginButton->setObjectName(QString::fromUtf8("m_dateBeginButton"));
        m_dateBeginButton->setEnabled(true);

        m_mainLayout->addWidget(m_dateBeginButton, 0, 1, 1, 1);

        m_dateEndButton = new QPushButton(layoutWidget);
        m_dateEndButton->setObjectName(QString::fromUtf8("m_dateEndButton"));
        m_dateEndButton->setEnabled(true);

        m_mainLayout->addWidget(m_dateEndButton, 0, 3, 1, 1);

        m_accordingTodateUntilLabel = new QLabel(layoutWidget);
        m_accordingTodateUntilLabel->setObjectName(QString::fromUtf8("m_accordingTodateUntilLabel"));

        m_mainLayout->addWidget(m_accordingTodateUntilLabel, 0, 2, 1, 1);

        m_accordingToDateLabel = new QLabel(layoutWidget);
        m_accordingToDateLabel->setObjectName(QString::fromUtf8("m_accordingToDateLabel"));

        m_mainLayout->addWidget(m_accordingToDateLabel, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        m_mainLayout->addItem(horizontalSpacer, 0, 4, 1, 1);


        retranslateUi(TsearchWidget);

        QMetaObject::connectSlotsByName(TsearchWidget);
    } // setupUi

    void retranslateUi(QWidget *TsearchWidget)
    {
        TsearchWidget->setWindowTitle(QApplication::translate("TsearchWidget", "Form", 0, QApplication::UnicodeUTF8));
        m_searchButton->setText(QApplication::translate("TsearchWidget", "\346\220\234\347\264\242", 0, QApplication::UnicodeUTF8));
        m_dateBeginButton->setText(QString());
        m_dateEndButton->setText(QString());
        m_accordingTodateUntilLabel->setText(QApplication::translate("TsearchWidget", "\350\207\263", 0, QApplication::UnicodeUTF8));
        m_accordingToDateLabel->setText(QApplication::translate("TsearchWidget", "\346\214\211\347\205\247\346\227\245\346\234\237", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TsearchWidget: public Ui_TsearchWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TSEARCHWIDGET_H
