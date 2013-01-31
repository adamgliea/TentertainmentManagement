/********************************************************************************
** Form generated from reading UI file 'TmachineFuncSetupViewItemAdd.ui'
**
** Created: Wed Jan 30 13:42:47 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TMACHINEFUNCSETUPVIEWITEMADD_H
#define UI_TMACHINEFUNCSETUPVIEWITEMADD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TmachineFuncSetupViewItemAdd
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *m_categoryLabel;
    QGroupBox *m_machineSetupGroupBox;
    QLabel *m_mainPossiblityLabel;
    QLineEdit *m_mainPossiblityLineEdit;
    QLabel *m_possibilityRangeLabel;
    QLineEdit *m_possibilityRangeLineEdit;
    QLabel *m_maxBetPointLabel;
    QLineEdit *m_maxBetPointLineEdit;
    QLabel *m_minBetPointLabel;
    QLineEdit *m_maxBetPointLineEdit_2;
    QLabel *m_villageLeisureBetPointLabel;
    QLineEdit *m_villageLeisureBetPointLineEdit;
    QLineEdit *m_drawGameBetPointLineEdit;
    QLabel *m_drawGameBetPointLabel;
    QLineEdit *m_clearCoinTimeLineEdit;
    QLabel *m_clearCoinTimeLabel;
    QLineEdit *m_betTimeInDaysLineEdit;
    QLabel *m_betTimeInDaysLabel;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *m_machineNumberNamelabel;
    QLineEdit *m_machineNumberNamelineEdit;
    QLabel *m_functionLabel;
    QLineEdit *m_functionLineEdit;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_4;
    QLabel *m_coinCategorySetupLabel;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *m_coinCategorySetupLineEdit;
    QLabel *label_11;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *m_pointSetupLabel;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *m_pointSetupLineEdit;
    QLabel *label_12;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout;
    QLabel *m_remarkLabel;
    QTextEdit *m_remarkTextEdit;
    QDialogButtonBox *m_buttonBox;

    void setupUi(QWidget *TmachineFuncSetupViewItemAdd)
    {
        if (TmachineFuncSetupViewItemAdd->objectName().isEmpty())
            TmachineFuncSetupViewItemAdd->setObjectName(QString::fromUtf8("TmachineFuncSetupViewItemAdd"));
        TmachineFuncSetupViewItemAdd->resize(818, 713);
        horizontalLayoutWidget = new QWidget(TmachineFuncSetupViewItemAdd);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 30, 771, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        m_categoryLabel = new QLabel(horizontalLayoutWidget);
        m_categoryLabel->setObjectName(QString::fromUtf8("m_categoryLabel"));

        horizontalLayout->addWidget(m_categoryLabel);

        m_machineSetupGroupBox = new QGroupBox(TmachineFuncSetupViewItemAdd);
        m_machineSetupGroupBox->setObjectName(QString::fromUtf8("m_machineSetupGroupBox"));
        m_machineSetupGroupBox->setGeometry(QRect(10, 110, 781, 511));
        m_mainPossiblityLabel = new QLabel(m_machineSetupGroupBox);
        m_mainPossiblityLabel->setObjectName(QString::fromUtf8("m_mainPossiblityLabel"));
        m_mainPossiblityLabel->setGeometry(QRect(31, 156, 48, 16));
        m_mainPossiblityLineEdit = new QLineEdit(m_machineSetupGroupBox);
        m_mainPossiblityLineEdit->setObjectName(QString::fromUtf8("m_mainPossiblityLineEdit"));
        m_mainPossiblityLineEdit->setGeometry(QRect(97, 156, 61, 20));
        m_possibilityRangeLabel = new QLabel(m_machineSetupGroupBox);
        m_possibilityRangeLabel->setObjectName(QString::fromUtf8("m_possibilityRangeLabel"));
        m_possibilityRangeLabel->setGeometry(QRect(244, 156, 60, 16));
        m_possibilityRangeLineEdit = new QLineEdit(m_machineSetupGroupBox);
        m_possibilityRangeLineEdit->setObjectName(QString::fromUtf8("m_possibilityRangeLineEdit"));
        m_possibilityRangeLineEdit->setGeometry(QRect(310, 156, 61, 20));
        m_maxBetPointLabel = new QLabel(m_machineSetupGroupBox);
        m_maxBetPointLabel->setObjectName(QString::fromUtf8("m_maxBetPointLabel"));
        m_maxBetPointLabel->setGeometry(QRect(31, 187, 60, 16));
        m_maxBetPointLineEdit = new QLineEdit(m_machineSetupGroupBox);
        m_maxBetPointLineEdit->setObjectName(QString::fromUtf8("m_maxBetPointLineEdit"));
        m_maxBetPointLineEdit->setGeometry(QRect(97, 187, 61, 20));
        m_minBetPointLabel = new QLabel(m_machineSetupGroupBox);
        m_minBetPointLabel->setObjectName(QString::fromUtf8("m_minBetPointLabel"));
        m_minBetPointLabel->setGeometry(QRect(244, 187, 60, 16));
        m_maxBetPointLineEdit_2 = new QLineEdit(m_machineSetupGroupBox);
        m_maxBetPointLineEdit_2->setObjectName(QString::fromUtf8("m_maxBetPointLineEdit_2"));
        m_maxBetPointLineEdit_2->setGeometry(QRect(310, 187, 61, 20));
        m_villageLeisureBetPointLabel = new QLabel(m_machineSetupGroupBox);
        m_villageLeisureBetPointLabel->setObjectName(QString::fromUtf8("m_villageLeisureBetPointLabel"));
        m_villageLeisureBetPointLabel->setGeometry(QRect(31, 218, 60, 16));
        m_villageLeisureBetPointLineEdit = new QLineEdit(m_machineSetupGroupBox);
        m_villageLeisureBetPointLineEdit->setObjectName(QString::fromUtf8("m_villageLeisureBetPointLineEdit"));
        m_villageLeisureBetPointLineEdit->setGeometry(QRect(97, 218, 61, 20));
        m_drawGameBetPointLineEdit = new QLineEdit(m_machineSetupGroupBox);
        m_drawGameBetPointLineEdit->setObjectName(QString::fromUtf8("m_drawGameBetPointLineEdit"));
        m_drawGameBetPointLineEdit->setGeometry(QRect(310, 218, 61, 20));
        m_drawGameBetPointLabel = new QLabel(m_machineSetupGroupBox);
        m_drawGameBetPointLabel->setObjectName(QString::fromUtf8("m_drawGameBetPointLabel"));
        m_drawGameBetPointLabel->setGeometry(QRect(244, 218, 60, 16));
        m_clearCoinTimeLineEdit = new QLineEdit(m_machineSetupGroupBox);
        m_clearCoinTimeLineEdit->setObjectName(QString::fromUtf8("m_clearCoinTimeLineEdit"));
        m_clearCoinTimeLineEdit->setGeometry(QRect(97, 280, 61, 20));
        m_clearCoinTimeLabel = new QLabel(m_machineSetupGroupBox);
        m_clearCoinTimeLabel->setObjectName(QString::fromUtf8("m_clearCoinTimeLabel"));
        m_clearCoinTimeLabel->setGeometry(QRect(31, 280, 60, 16));
        m_betTimeInDaysLineEdit = new QLineEdit(m_machineSetupGroupBox);
        m_betTimeInDaysLineEdit->setObjectName(QString::fromUtf8("m_betTimeInDaysLineEdit"));
        m_betTimeInDaysLineEdit->setGeometry(QRect(97, 249, 61, 20));
        m_betTimeInDaysLabel = new QLabel(m_machineSetupGroupBox);
        m_betTimeInDaysLabel->setObjectName(QString::fromUtf8("m_betTimeInDaysLabel"));
        m_betTimeInDaysLabel->setGeometry(QRect(31, 249, 60, 16));
        layoutWidget = new QWidget(m_machineSetupGroupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 40, 225, 48));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        m_machineNumberNamelabel = new QLabel(layoutWidget);
        m_machineNumberNamelabel->setObjectName(QString::fromUtf8("m_machineNumberNamelabel"));

        gridLayout->addWidget(m_machineNumberNamelabel, 0, 0, 1, 1);

        m_machineNumberNamelineEdit = new QLineEdit(layoutWidget);
        m_machineNumberNamelineEdit->setObjectName(QString::fromUtf8("m_machineNumberNamelineEdit"));

        gridLayout->addWidget(m_machineNumberNamelineEdit, 0, 1, 1, 1);

        m_functionLabel = new QLabel(layoutWidget);
        m_functionLabel->setObjectName(QString::fromUtf8("m_functionLabel"));

        gridLayout->addWidget(m_functionLabel, 1, 0, 1, 1);

        m_functionLineEdit = new QLineEdit(layoutWidget);
        m_functionLineEdit->setObjectName(QString::fromUtf8("m_functionLineEdit"));

        gridLayout->addWidget(m_functionLineEdit, 1, 1, 1, 1);

        layoutWidget1 = new QWidget(m_machineSetupGroupBox);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 110, 145, 24));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        m_coinCategorySetupLabel = new QLabel(layoutWidget1);
        m_coinCategorySetupLabel->setObjectName(QString::fromUtf8("m_coinCategorySetupLabel"));

        horizontalLayout_4->addWidget(m_coinCategorySetupLabel);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        m_coinCategorySetupLineEdit = new QLineEdit(layoutWidget1);
        m_coinCategorySetupLineEdit->setObjectName(QString::fromUtf8("m_coinCategorySetupLineEdit"));

        horizontalLayout_2->addWidget(m_coinCategorySetupLineEdit);

        label_11 = new QLabel(layoutWidget1);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_2->addWidget(label_11);


        horizontalLayout_4->addLayout(horizontalLayout_2);

        layoutWidget2 = new QWidget(m_machineSetupGroupBox);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(240, 110, 145, 24));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        m_pointSetupLabel = new QLabel(layoutWidget2);
        m_pointSetupLabel->setObjectName(QString::fromUtf8("m_pointSetupLabel"));

        horizontalLayout_5->addWidget(m_pointSetupLabel);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        m_pointSetupLineEdit = new QLineEdit(layoutWidget2);
        m_pointSetupLineEdit->setObjectName(QString::fromUtf8("m_pointSetupLineEdit"));

        horizontalLayout_3->addWidget(m_pointSetupLineEdit);

        label_12 = new QLabel(layoutWidget2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_3->addWidget(label_12);


        horizontalLayout_5->addLayout(horizontalLayout_3);

        layoutWidget3 = new QWidget(m_machineSetupGroupBox);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(30, 330, 721, 151));
        verticalLayout = new QVBoxLayout(layoutWidget3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        m_remarkLabel = new QLabel(layoutWidget3);
        m_remarkLabel->setObjectName(QString::fromUtf8("m_remarkLabel"));

        verticalLayout->addWidget(m_remarkLabel);

        m_remarkTextEdit = new QTextEdit(layoutWidget3);
        m_remarkTextEdit->setObjectName(QString::fromUtf8("m_remarkTextEdit"));

        verticalLayout->addWidget(m_remarkTextEdit);

        m_buttonBox = new QDialogButtonBox(TmachineFuncSetupViewItemAdd);
        m_buttonBox->setObjectName(QString::fromUtf8("m_buttonBox"));
        m_buttonBox->setGeometry(QRect(640, 650, 156, 23));
        m_buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(TmachineFuncSetupViewItemAdd);

        QMetaObject::connectSlotsByName(TmachineFuncSetupViewItemAdd);
    } // setupUi

    void retranslateUi(QWidget *TmachineFuncSetupViewItemAdd)
    {
        TmachineFuncSetupViewItemAdd->setWindowTitle(QApplication::translate("TmachineFuncSetupViewItemAdd", "Form", 0, QApplication::UnicodeUTF8));
        m_categoryLabel->setText(QApplication::translate("TmachineFuncSetupViewItemAdd", "\347\261\273\345\236\213", 0, QApplication::UnicodeUTF8));
        m_machineSetupGroupBox->setTitle(QApplication::translate("TmachineFuncSetupViewItemAdd", "\346\234\272\345\217\260\345\212\237\350\203\275\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        m_mainPossiblityLabel->setText(QApplication::translate("TmachineFuncSetupViewItemAdd", "\344\270\273\345\207\240\347\216\207\357\274\232", 0, QApplication::UnicodeUTF8));
        m_possibilityRangeLabel->setText(QApplication::translate("TmachineFuncSetupViewItemAdd", "\345\207\240\347\216\207\350\214\203\345\233\264\357\274\232", 0, QApplication::UnicodeUTF8));
        m_maxBetPointLabel->setText(QApplication::translate("TmachineFuncSetupViewItemAdd", "\346\234\200\345\244\247\345\216\213\345\210\206\357\274\232", 0, QApplication::UnicodeUTF8));
        m_minBetPointLabel->setText(QApplication::translate("TmachineFuncSetupViewItemAdd", "\346\234\200\345\260\217\345\216\213\345\210\206\357\274\232", 0, QApplication::UnicodeUTF8));
        m_villageLeisureBetPointLabel->setText(QApplication::translate("TmachineFuncSetupViewItemAdd", "\345\272\204\351\227\262\345\216\213\345\210\206\357\274\232", 0, QApplication::UnicodeUTF8));
        m_drawGameBetPointLabel->setText(QApplication::translate("TmachineFuncSetupViewItemAdd", "\345\222\214\345\261\200\345\216\213\345\210\206\357\274\232", 0, QApplication::UnicodeUTF8));
        m_clearCoinTimeLabel->setText(QApplication::translate("TmachineFuncSetupViewItemAdd", "\346\270\205\345\270\201\346\227\266\351\227\264\357\274\232", 0, QApplication::UnicodeUTF8));
        m_betTimeInDaysLabel->setText(QApplication::translate("TmachineFuncSetupViewItemAdd", "\346\212\225\347\240\201\345\244\251\346\225\260\357\274\232", 0, QApplication::UnicodeUTF8));
        m_machineNumberNamelabel->setText(QApplication::translate("TmachineFuncSetupViewItemAdd", "\346\234\272\347\273\204\347\274\226\345\217\267\345\220\215\347\247\260\357\274\232", 0, QApplication::UnicodeUTF8));
        m_functionLabel->setText(QApplication::translate("TmachineFuncSetupViewItemAdd", "\345\212\237\350\203\275\357\274\232", 0, QApplication::UnicodeUTF8));
        m_coinCategorySetupLabel->setText(QApplication::translate("TmachineFuncSetupViewItemAdd", "\350\256\276\347\275\256\345\270\201\347\247\215\357\274\232", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("TmachineFuncSetupViewItemAdd", "\345\210\206/\345\205\203", 0, QApplication::UnicodeUTF8));
        m_pointSetupLabel->setText(QApplication::translate("TmachineFuncSetupViewItemAdd", "\350\256\276\347\275\256\345\210\206\345\200\274\357\274\232", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("TmachineFuncSetupViewItemAdd", "\345\270\201/\345\210\206", 0, QApplication::UnicodeUTF8));
        m_remarkLabel->setText(QApplication::translate("TmachineFuncSetupViewItemAdd", "\345\244\207\346\263\250\357\274\232", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TmachineFuncSetupViewItemAdd: public Ui_TmachineFuncSetupViewItemAdd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TMACHINEFUNCSETUPVIEWITEMADD_H
