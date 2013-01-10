/********************************************************************************
** Form generated from reading UI file 'TassetSetupViewItemTable.ui'
**
** Created: Thu Jan 10 13:52:51 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASSETSETUPVIEWITEMTABLE_H
#define UI_TASSETSETUPVIEWITEMTABLE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QRadioButton>
#include <QtGui/QTableWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *m_warningSetupLabel;
    QTableWidget *m_warningSetupTableWidget;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLabel *m_inputCategoryNameLabel;
    QTextEdit *m_inputCategoryNameLabelTextEdit;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_3;
    QLabel *m_clearCoinPeriodSetupLabel;
    QTextEdit *m_clearCoinPeriodSetupTextEdit;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_6;
    QLabel *m_accountSelectionLabel;
    QVBoxLayout *verticalLayout_5;
    QRadioButton *m_accountSelectionRadioButton1;
    QRadioButton *m_accountSelectionRadioButton2;
    QRadioButton *m_accountSelectionRadioButton3;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(648, 117);
        layoutWidget = new QWidget(Form);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(230, 0, 321, 111));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        m_warningSetupLabel = new QLabel(layoutWidget);
        m_warningSetupLabel->setObjectName(QString::fromUtf8("m_warningSetupLabel"));

        verticalLayout_4->addWidget(m_warningSetupLabel);

        m_warningSetupTableWidget = new QTableWidget(layoutWidget);
        if (m_warningSetupTableWidget->columnCount() < 3)
            m_warningSetupTableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        m_warningSetupTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        m_warningSetupTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        m_warningSetupTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (m_warningSetupTableWidget->rowCount() < 1)
            m_warningSetupTableWidget->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        m_warningSetupTableWidget->setVerticalHeaderItem(0, __qtablewidgetitem3);
        m_warningSetupTableWidget->setObjectName(QString::fromUtf8("m_warningSetupTableWidget"));
        m_warningSetupTableWidget->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_warningSetupTableWidget->sizePolicy().hasHeightForWidth());
        m_warningSetupTableWidget->setSizePolicy(sizePolicy);
        m_warningSetupTableWidget->setAutoScroll(true);
        m_warningSetupTableWidget->setCornerButtonEnabled(true);
        m_warningSetupTableWidget->horizontalHeader()->setCascadingSectionResizes(false);

        verticalLayout_4->addWidget(m_warningSetupTableWidget);

        layoutWidget1 = new QWidget(Form);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 0, 101, 111));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        m_inputCategoryNameLabel = new QLabel(layoutWidget1);
        m_inputCategoryNameLabel->setObjectName(QString::fromUtf8("m_inputCategoryNameLabel"));

        verticalLayout->addWidget(m_inputCategoryNameLabel);

        m_inputCategoryNameLabelTextEdit = new QTextEdit(layoutWidget1);
        m_inputCategoryNameLabelTextEdit->setObjectName(QString::fromUtf8("m_inputCategoryNameLabelTextEdit"));

        verticalLayout->addWidget(m_inputCategoryNameLabelTextEdit);

        layoutWidget2 = new QWidget(Form);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(120, 0, 101, 111));
        verticalLayout_3 = new QVBoxLayout(layoutWidget2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        m_clearCoinPeriodSetupLabel = new QLabel(layoutWidget2);
        m_clearCoinPeriodSetupLabel->setObjectName(QString::fromUtf8("m_clearCoinPeriodSetupLabel"));

        verticalLayout_3->addWidget(m_clearCoinPeriodSetupLabel);

        m_clearCoinPeriodSetupTextEdit = new QTextEdit(layoutWidget2);
        m_clearCoinPeriodSetupTextEdit->setObjectName(QString::fromUtf8("m_clearCoinPeriodSetupTextEdit"));

        verticalLayout_3->addWidget(m_clearCoinPeriodSetupTextEdit);

        layoutWidget3 = new QWidget(Form);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(560, 0, 81, 82));
        verticalLayout_6 = new QVBoxLayout(layoutWidget3);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        m_accountSelectionLabel = new QLabel(layoutWidget3);
        m_accountSelectionLabel->setObjectName(QString::fromUtf8("m_accountSelectionLabel"));

        verticalLayout_6->addWidget(m_accountSelectionLabel);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        m_accountSelectionRadioButton1 = new QRadioButton(layoutWidget3);
        m_accountSelectionRadioButton1->setObjectName(QString::fromUtf8("m_accountSelectionRadioButton1"));

        verticalLayout_5->addWidget(m_accountSelectionRadioButton1);

        m_accountSelectionRadioButton2 = new QRadioButton(layoutWidget3);
        m_accountSelectionRadioButton2->setObjectName(QString::fromUtf8("m_accountSelectionRadioButton2"));

        verticalLayout_5->addWidget(m_accountSelectionRadioButton2);

        m_accountSelectionRadioButton3 = new QRadioButton(layoutWidget3);
        m_accountSelectionRadioButton3->setObjectName(QString::fromUtf8("m_accountSelectionRadioButton3"));

        verticalLayout_5->addWidget(m_accountSelectionRadioButton3);


        verticalLayout_6->addLayout(verticalLayout_5);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "\345\244\247\347\261\273\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        m_warningSetupLabel->setText(QApplication::translate("Form", "\346\212\245\350\255\246\350\256\276\345\256\232", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = m_warningSetupTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Form", "\346\270\205\345\270\201\345\267\256\345\274\202\350\256\276\345\256\232", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = m_warningSetupTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Form", "\346\234\272\345\217\260\350\264\237\345\200\272\350\256\276\345\256\232", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = m_warningSetupTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Form", "\350\277\236\347\273\255\344\272\217\346\215\237\345\244\251\346\225\260\350\256\276\345\256\232", 0, QApplication::UnicodeUTF8));
        m_inputCategoryNameLabel->setText(QApplication::translate("Form", "\345\244\247\347\261\273\347\232\204\345\220\215\347\247\260", 0, QApplication::UnicodeUTF8));
        m_clearCoinPeriodSetupLabel->setText(QApplication::translate("Form", "\346\270\205\345\270\201\345\221\250\346\234\237\350\256\276\345\256\232", 0, QApplication::UnicodeUTF8));
        m_accountSelectionLabel->setText(QApplication::translate("Form", "\350\264\246\347\233\256\346\212\245\350\241\250\351\200\211\346\213\251", 0, QApplication::UnicodeUTF8));
        m_accountSelectionRadioButton1->setText(QApplication::translate("Form", "\350\264\246\347\233\256\346\212\245\350\241\2501", 0, QApplication::UnicodeUTF8));
        m_accountSelectionRadioButton2->setText(QApplication::translate("Form", "\350\264\246\347\233\256\346\212\245\350\241\2502", 0, QApplication::UnicodeUTF8));
        m_accountSelectionRadioButton3->setText(QApplication::translate("Form", "\350\264\246\347\233\256\346\212\245\350\241\2503", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASSETSETUPVIEWITEMTABLE_H
