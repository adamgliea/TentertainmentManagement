/********************************************************************************
** Form generated from reading UI file 'TassetSetupViewItemAddWidget.ui'
**
** Created: Wed Jan 30 13:47:02 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASSETSETUPVIEWITEMADDWIDGET_H
#define UI_TASSETSETUPVIEWITEMADDWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QRadioButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TassetSetupViewItemAddWidget
{
public:
    QDialogButtonBox *m_buttonBox;
    QGroupBox *m_categorySetupGroupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *m_warningSetupGroupBox;
    QWidget *layoutWidget1;
    QGridLayout *m_warningSetupGridLayout;
    QLabel *m_clearCoinMarginSetupLabel;
    QLineEdit *m_clearCoinMarginSetupLineEdit;
    QLabel *m_debtSetupLabel;
    QLineEdit *m_debtSetupLineEdit;
    QLabel *m_continuousLossLabel;
    QComboBox *m_continuousLossComboBox;
    QGroupBox *m_accountReportGroupBox;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *m_accountReportRadioButton1;
    QRadioButton *m_accountReportRadioButton2;
    QRadioButton *m_accountReportRadioButton3;
    QWidget *layoutWidget3;
    QGridLayout *gridLayout_2;
    QLabel *m_clearCoinPeriodSetupLabel;
    QLineEdit *m_clearCoinPeriodSetupLineEdit;
    QLabel *m_inputCategoryNameLabel;
    QComboBox *m_inputCategoryNameComboBox;

    void setupUi(QWidget *TassetSetupViewItemAddWidget)
    {
        if (TassetSetupViewItemAddWidget->objectName().isEmpty())
            TassetSetupViewItemAddWidget->setObjectName(QString::fromUtf8("TassetSetupViewItemAddWidget"));
        TassetSetupViewItemAddWidget->resize(898, 652);
        m_buttonBox = new QDialogButtonBox(TassetSetupViewItemAddWidget);
        m_buttonBox->setObjectName(QString::fromUtf8("m_buttonBox"));
        m_buttonBox->setGeometry(QRect(720, 610, 156, 23));
        m_buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        m_categorySetupGroupBox = new QGroupBox(TassetSetupViewItemAddWidget);
        m_categorySetupGroupBox->setObjectName(QString::fromUtf8("m_categorySetupGroupBox"));
        m_categorySetupGroupBox->setGeometry(QRect(0, 0, 871, 571));
        m_categorySetupGroupBox->setFlat(false);
        m_categorySetupGroupBox->setCheckable(false);
        layoutWidget = new QWidget(m_categorySetupGroupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 140, 831, 421));
        verticalLayout_7 = new QVBoxLayout(layoutWidget);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        m_warningSetupGroupBox = new QGroupBox(layoutWidget);
        m_warningSetupGroupBox->setObjectName(QString::fromUtf8("m_warningSetupGroupBox"));
        layoutWidget1 = new QWidget(m_warningSetupGroupBox);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 40, 211, 131));
        m_warningSetupGridLayout = new QGridLayout(layoutWidget1);
        m_warningSetupGridLayout->setObjectName(QString::fromUtf8("m_warningSetupGridLayout"));
        m_warningSetupGridLayout->setContentsMargins(0, 0, 0, 0);
        m_clearCoinMarginSetupLabel = new QLabel(layoutWidget1);
        m_clearCoinMarginSetupLabel->setObjectName(QString::fromUtf8("m_clearCoinMarginSetupLabel"));

        m_warningSetupGridLayout->addWidget(m_clearCoinMarginSetupLabel, 0, 0, 1, 1);

        m_clearCoinMarginSetupLineEdit = new QLineEdit(layoutWidget1);
        m_clearCoinMarginSetupLineEdit->setObjectName(QString::fromUtf8("m_clearCoinMarginSetupLineEdit"));

        m_warningSetupGridLayout->addWidget(m_clearCoinMarginSetupLineEdit, 0, 1, 1, 1);

        m_debtSetupLabel = new QLabel(layoutWidget1);
        m_debtSetupLabel->setObjectName(QString::fromUtf8("m_debtSetupLabel"));

        m_warningSetupGridLayout->addWidget(m_debtSetupLabel, 1, 0, 1, 1);

        m_debtSetupLineEdit = new QLineEdit(layoutWidget1);
        m_debtSetupLineEdit->setObjectName(QString::fromUtf8("m_debtSetupLineEdit"));

        m_warningSetupGridLayout->addWidget(m_debtSetupLineEdit, 1, 1, 1, 1);

        m_continuousLossLabel = new QLabel(layoutWidget1);
        m_continuousLossLabel->setObjectName(QString::fromUtf8("m_continuousLossLabel"));

        m_warningSetupGridLayout->addWidget(m_continuousLossLabel, 2, 0, 1, 1);

        m_continuousLossComboBox = new QComboBox(layoutWidget1);
        m_continuousLossComboBox->setObjectName(QString::fromUtf8("m_continuousLossComboBox"));

        m_warningSetupGridLayout->addWidget(m_continuousLossComboBox, 2, 1, 1, 1);


        verticalLayout_7->addWidget(m_warningSetupGroupBox);

        m_accountReportGroupBox = new QGroupBox(layoutWidget);
        m_accountReportGroupBox->setObjectName(QString::fromUtf8("m_accountReportGroupBox"));
        layoutWidget2 = new QWidget(m_accountReportGroupBox);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(30, 30, 211, 121));
        verticalLayout_2 = new QVBoxLayout(layoutWidget2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        m_accountReportRadioButton1 = new QRadioButton(layoutWidget2);
        m_accountReportRadioButton1->setObjectName(QString::fromUtf8("m_accountReportRadioButton1"));

        verticalLayout_2->addWidget(m_accountReportRadioButton1);

        m_accountReportRadioButton2 = new QRadioButton(layoutWidget2);
        m_accountReportRadioButton2->setObjectName(QString::fromUtf8("m_accountReportRadioButton2"));

        verticalLayout_2->addWidget(m_accountReportRadioButton2);

        m_accountReportRadioButton3 = new QRadioButton(layoutWidget2);
        m_accountReportRadioButton3->setObjectName(QString::fromUtf8("m_accountReportRadioButton3"));

        verticalLayout_2->addWidget(m_accountReportRadioButton3);


        verticalLayout_7->addWidget(m_accountReportGroupBox);

        layoutWidget3 = new QWidget(m_categorySetupGroupBox);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 30, 231, 81));
        gridLayout_2 = new QGridLayout(layoutWidget3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        m_clearCoinPeriodSetupLabel = new QLabel(layoutWidget3);
        m_clearCoinPeriodSetupLabel->setObjectName(QString::fromUtf8("m_clearCoinPeriodSetupLabel"));

        gridLayout_2->addWidget(m_clearCoinPeriodSetupLabel, 1, 0, 1, 1);

        m_clearCoinPeriodSetupLineEdit = new QLineEdit(layoutWidget3);
        m_clearCoinPeriodSetupLineEdit->setObjectName(QString::fromUtf8("m_clearCoinPeriodSetupLineEdit"));

        gridLayout_2->addWidget(m_clearCoinPeriodSetupLineEdit, 1, 1, 1, 1);

        m_inputCategoryNameLabel = new QLabel(layoutWidget3);
        m_inputCategoryNameLabel->setObjectName(QString::fromUtf8("m_inputCategoryNameLabel"));

        gridLayout_2->addWidget(m_inputCategoryNameLabel, 0, 0, 1, 1);

        m_inputCategoryNameComboBox = new QComboBox(layoutWidget3);
        m_inputCategoryNameComboBox->setObjectName(QString::fromUtf8("m_inputCategoryNameComboBox"));

        gridLayout_2->addWidget(m_inputCategoryNameComboBox, 0, 1, 1, 1);


        retranslateUi(TassetSetupViewItemAddWidget);

        m_continuousLossComboBox->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(TassetSetupViewItemAddWidget);
    } // setupUi

    void retranslateUi(QWidget *TassetSetupViewItemAddWidget)
    {
        TassetSetupViewItemAddWidget->setWindowTitle(QApplication::translate("TassetSetupViewItemAddWidget", "\345\244\247\347\261\273\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        m_categorySetupGroupBox->setTitle(QApplication::translate("TassetSetupViewItemAddWidget", "\345\244\247\347\261\273\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        m_warningSetupGroupBox->setTitle(QApplication::translate("TassetSetupViewItemAddWidget", "\346\212\245\350\255\246\350\256\276\345\256\232\357\274\232", 0, QApplication::UnicodeUTF8));
        m_clearCoinMarginSetupLabel->setText(QApplication::translate("TassetSetupViewItemAddWidget", "\346\270\205\345\270\201\345\267\256\345\274\202\350\256\276\345\256\232\357\274\232", 0, QApplication::UnicodeUTF8));
        m_debtSetupLabel->setText(QApplication::translate("TassetSetupViewItemAddWidget", "\346\234\272\345\217\260\350\264\237\345\200\272\350\256\276\345\256\232\357\274\232", 0, QApplication::UnicodeUTF8));
        m_continuousLossLabel->setText(QApplication::translate("TassetSetupViewItemAddWidget", "\350\277\236\347\273\255\344\272\217\346\215\237\345\244\251\346\225\260\350\256\276\345\256\232\357\274\232", 0, QApplication::UnicodeUTF8));
        m_continuousLossComboBox->clear();
        m_continuousLossComboBox->insertItems(0, QStringList()
         << QApplication::translate("TassetSetupViewItemAddWidget", "1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TassetSetupViewItemAddWidget", "2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TassetSetupViewItemAddWidget", "3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TassetSetupViewItemAddWidget", "4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TassetSetupViewItemAddWidget", "5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TassetSetupViewItemAddWidget", "6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TassetSetupViewItemAddWidget", "7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TassetSetupViewItemAddWidget", "8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TassetSetupViewItemAddWidget", "9", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TassetSetupViewItemAddWidget", "10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TassetSetupViewItemAddWidget", "11", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TassetSetupViewItemAddWidget", "12", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TassetSetupViewItemAddWidget", "13", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TassetSetupViewItemAddWidget", "14", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TassetSetupViewItemAddWidget", "15", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TassetSetupViewItemAddWidget", "16", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TassetSetupViewItemAddWidget", "17", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TassetSetupViewItemAddWidget", "18", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TassetSetupViewItemAddWidget", "19", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TassetSetupViewItemAddWidget", "20", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TassetSetupViewItemAddWidget", "21", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TassetSetupViewItemAddWidget", "22", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TassetSetupViewItemAddWidget", "23", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TassetSetupViewItemAddWidget", "24", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TassetSetupViewItemAddWidget", "25", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TassetSetupViewItemAddWidget", "26", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TassetSetupViewItemAddWidget", "27", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TassetSetupViewItemAddWidget", "28", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TassetSetupViewItemAddWidget", "29", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TassetSetupViewItemAddWidget", "30", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TassetSetupViewItemAddWidget", "31", 0, QApplication::UnicodeUTF8)
        );
        m_accountReportGroupBox->setTitle(QApplication::translate("TassetSetupViewItemAddWidget", "\350\264\246\347\233\256\346\212\245\350\241\250\351\200\211\346\213\251\357\274\232", 0, QApplication::UnicodeUTF8));
        m_accountReportRadioButton1->setText(QApplication::translate("TassetSetupViewItemAddWidget", "\350\264\246\347\233\256\346\212\245\350\241\2501", 0, QApplication::UnicodeUTF8));
        m_accountReportRadioButton2->setText(QApplication::translate("TassetSetupViewItemAddWidget", "\350\264\246\347\233\256\346\212\245\350\241\2502", 0, QApplication::UnicodeUTF8));
        m_accountReportRadioButton3->setText(QApplication::translate("TassetSetupViewItemAddWidget", "\350\264\246\347\233\256\346\212\245\350\241\2503", 0, QApplication::UnicodeUTF8));
        m_clearCoinPeriodSetupLabel->setText(QApplication::translate("TassetSetupViewItemAddWidget", "\346\270\205\345\270\201\345\221\250\346\234\237\350\256\276\345\256\232\357\274\232", 0, QApplication::UnicodeUTF8));
        m_inputCategoryNameLabel->setText(QApplication::translate("TassetSetupViewItemAddWidget", "\345\244\247\347\261\273\345\220\215\347\247\260\357\274\232", 0, QApplication::UnicodeUTF8));
        m_inputCategoryNameComboBox->clear();
        m_inputCategoryNameComboBox->insertItems(0, QStringList()
         << QApplication::translate("TassetSetupViewItemAddWidget", "\346\237\234\344\275\223\347\261\273", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TassetSetupViewItemAddWidget", "\345\275\251\347\245\250\347\261\273", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TassetSetupViewItemAddWidget", "\346\250\241\346\213\237\347\261\273", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TassetSetupViewItemAddWidget", "\346\216\250\345\270\201\347\261\273", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TassetSetupViewItemAddWidget", "\345\215\232\345\275\251\347\261\273", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class TassetSetupViewItemAddWidget: public Ui_TassetSetupViewItemAddWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASSETSETUPVIEWITEMADDWIDGET_H
