/********************************************************************************
** Form generated from reading UI file 'TmachineGroupReportViewItemSummaryWidget.ui'
**
** Created: Thu Jan 10 13:52:53 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TMACHINEGROUPREPORTVIEWITEMSUMMARYWIDGET_H
#define UI_TMACHINEGROUPREPORTVIEWITEMSUMMARYWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *m_cabinetLabel;
    QLineEdit *m_cabinetLineEdit;
    QLabel *m_lotteryLabel;
    QLineEdit *m_lotteryLineEdit;
    QLabel *m_simulateLabel;
    QLineEdit *m_simulateLineEdit;
    QLabel *m_coindozerLabel;
    QLineEdit *m_coindozerLineEdit;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLineEdit *m_wagerLineEdit;
    QLabel *m_wagerLabel;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(197, 161);
        widget = new QWidget(Form);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 189, 152));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        m_cabinetLabel = new QLabel(widget);
        m_cabinetLabel->setObjectName(QString::fromUtf8("m_cabinetLabel"));

        gridLayout->addWidget(m_cabinetLabel, 0, 0, 1, 2);

        m_cabinetLineEdit = new QLineEdit(widget);
        m_cabinetLineEdit->setObjectName(QString::fromUtf8("m_cabinetLineEdit"));

        gridLayout->addWidget(m_cabinetLineEdit, 0, 2, 1, 1);

        m_lotteryLabel = new QLabel(widget);
        m_lotteryLabel->setObjectName(QString::fromUtf8("m_lotteryLabel"));

        gridLayout->addWidget(m_lotteryLabel, 1, 0, 1, 2);

        m_lotteryLineEdit = new QLineEdit(widget);
        m_lotteryLineEdit->setObjectName(QString::fromUtf8("m_lotteryLineEdit"));

        gridLayout->addWidget(m_lotteryLineEdit, 1, 2, 1, 1);

        m_simulateLabel = new QLabel(widget);
        m_simulateLabel->setObjectName(QString::fromUtf8("m_simulateLabel"));

        gridLayout->addWidget(m_simulateLabel, 2, 0, 1, 2);

        m_simulateLineEdit = new QLineEdit(widget);
        m_simulateLineEdit->setObjectName(QString::fromUtf8("m_simulateLineEdit"));

        gridLayout->addWidget(m_simulateLineEdit, 2, 2, 1, 1);

        m_coindozerLabel = new QLabel(widget);
        m_coindozerLabel->setObjectName(QString::fromUtf8("m_coindozerLabel"));

        gridLayout->addWidget(m_coindozerLabel, 3, 0, 1, 2);

        m_coindozerLineEdit = new QLineEdit(widget);
        m_coindozerLineEdit->setObjectName(QString::fromUtf8("m_coindozerLineEdit"));

        gridLayout->addWidget(m_coindozerLineEdit, 3, 2, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 2);

        lineEdit_4 = new QLineEdit(widget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        gridLayout->addWidget(lineEdit_4, 4, 2, 1, 1);

        m_wagerLineEdit = new QLineEdit(widget);
        m_wagerLineEdit->setObjectName(QString::fromUtf8("m_wagerLineEdit"));

        gridLayout->addWidget(m_wagerLineEdit, 5, 2, 1, 1);

        m_wagerLabel = new QLabel(widget);
        m_wagerLabel->setObjectName(QString::fromUtf8("m_wagerLabel"));

        gridLayout->addWidget(m_wagerLabel, 5, 0, 1, 2);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", 0, QApplication::UnicodeUTF8));
        m_cabinetLabel->setText(QApplication::translate("Form", "\346\237\234\344\275\223\347\261\273\357\274\232", 0, QApplication::UnicodeUTF8));
        m_lotteryLabel->setText(QApplication::translate("Form", "\345\275\251\347\245\250\347\261\273\357\274\232", 0, QApplication::UnicodeUTF8));
        m_simulateLabel->setText(QApplication::translate("Form", "\346\250\241\346\213\237\347\261\273\357\274\232", 0, QApplication::UnicodeUTF8));
        m_coindozerLabel->setText(QApplication::translate("Form", "\346\216\250\345\270\201\347\261\273\357\274\232", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Form", "\345\215\232\345\275\251\347\261\273\357\274\232", 0, QApplication::UnicodeUTF8));
        m_wagerLabel->setText(QApplication::translate("Form", "\345\220\210\350\256\241\357\274\232", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TMACHINEGROUPREPORTVIEWITEMSUMMARYWIDGET_H
