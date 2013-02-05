/********************************************************************************
** Form generated from reading UI file 'TmachineGroupFuncDetailSetupViewItemAdd.ui'
**
** Created: Tue Feb 5 14:41:24 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TMACHINEGROUPFUNCDETAILSETUPVIEWITEMADD_H
#define UI_TMACHINEGROUPFUNCDETAILSETUPVIEWITEMADD_H

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

class Ui_TmachineGroupFuncDetailSetupViewItemAdd
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *m_categoryLabel;
    QGroupBox *m_machineSetupGroupBox;
    QLabel *m_mainProbabilityLabel;
    QLineEdit *m_mainProbabilityLineEdit;
    QLabel *m_probabilityRangeLabel;
    QLineEdit *m_probabilityRangeLineEdit;
    QLabel *m_maxPointsLabel;
    QLineEdit *m_maxPointsLineEdit;
    QLabel *m_minPointsLabel;
    QLineEdit *m_minPointsLineEdit;
    QLabel *m_markPointsLabel;
    QLineEdit *m_markPointsLineEdit;
    QLineEdit *m_drawPointsLineEdit;
    QLabel *m_drawPointsLabel;
    QLineEdit *m_clearPointCycleLineEdit;
    QLabel *m_clearPointCycleLabel;
    QLineEdit *m_pushPointDaysLineEdit;
    QLabel *m_pushPointDaysLabel;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *m_machineTypeLabel;
    QLineEdit *m_machineTypeLineEdit;
    QLabel *m_functionLabel;
    QLineEdit *m_functionLineEdit;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_4;
    QLabel *m_cashRatioLabel;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *m_cashRatioLineEdit;
    QLabel *label_11;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *m_coinRatioLabel;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *m_coinRatioLineEdit;
    QLabel *label_12;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout;
    QLabel *m_remarkLabel;
    QTextEdit *m_remarkTextEdit;
    QDialogButtonBox *m_buttonBox;

    void setupUi(QWidget *TmachineGroupFuncDetailSetupViewItemAdd)
    {
        if (TmachineGroupFuncDetailSetupViewItemAdd->objectName().isEmpty())
            TmachineGroupFuncDetailSetupViewItemAdd->setObjectName(QString::fromUtf8("TmachineGroupFuncDetailSetupViewItemAdd"));
        TmachineGroupFuncDetailSetupViewItemAdd->resize(818, 713);
        horizontalLayoutWidget = new QWidget(TmachineGroupFuncDetailSetupViewItemAdd);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 30, 771, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        m_categoryLabel = new QLabel(horizontalLayoutWidget);
        m_categoryLabel->setObjectName(QString::fromUtf8("m_categoryLabel"));

        horizontalLayout->addWidget(m_categoryLabel);

        m_machineSetupGroupBox = new QGroupBox(TmachineGroupFuncDetailSetupViewItemAdd);
        m_machineSetupGroupBox->setObjectName(QString::fromUtf8("m_machineSetupGroupBox"));
        m_machineSetupGroupBox->setGeometry(QRect(10, 110, 781, 511));
        m_mainProbabilityLabel = new QLabel(m_machineSetupGroupBox);
        m_mainProbabilityLabel->setObjectName(QString::fromUtf8("m_mainProbabilityLabel"));
        m_mainProbabilityLabel->setGeometry(QRect(31, 156, 48, 16));
        m_mainProbabilityLineEdit = new QLineEdit(m_machineSetupGroupBox);
        m_mainProbabilityLineEdit->setObjectName(QString::fromUtf8("m_mainProbabilityLineEdit"));
        m_mainProbabilityLineEdit->setGeometry(QRect(97, 156, 61, 20));
        m_probabilityRangeLabel = new QLabel(m_machineSetupGroupBox);
        m_probabilityRangeLabel->setObjectName(QString::fromUtf8("m_probabilityRangeLabel"));
        m_probabilityRangeLabel->setGeometry(QRect(244, 156, 60, 16));
        m_probabilityRangeLineEdit = new QLineEdit(m_machineSetupGroupBox);
        m_probabilityRangeLineEdit->setObjectName(QString::fromUtf8("m_probabilityRangeLineEdit"));
        m_probabilityRangeLineEdit->setGeometry(QRect(310, 156, 61, 20));
        m_maxPointsLabel = new QLabel(m_machineSetupGroupBox);
        m_maxPointsLabel->setObjectName(QString::fromUtf8("m_maxPointsLabel"));
        m_maxPointsLabel->setGeometry(QRect(31, 187, 60, 16));
        m_maxPointsLineEdit = new QLineEdit(m_machineSetupGroupBox);
        m_maxPointsLineEdit->setObjectName(QString::fromUtf8("m_maxPointsLineEdit"));
        m_maxPointsLineEdit->setGeometry(QRect(97, 187, 61, 20));
        m_minPointsLabel = new QLabel(m_machineSetupGroupBox);
        m_minPointsLabel->setObjectName(QString::fromUtf8("m_minPointsLabel"));
        m_minPointsLabel->setGeometry(QRect(244, 187, 60, 16));
        m_minPointsLineEdit = new QLineEdit(m_machineSetupGroupBox);
        m_minPointsLineEdit->setObjectName(QString::fromUtf8("m_minPointsLineEdit"));
        m_minPointsLineEdit->setGeometry(QRect(310, 187, 61, 20));
        m_markPointsLabel = new QLabel(m_machineSetupGroupBox);
        m_markPointsLabel->setObjectName(QString::fromUtf8("m_markPointsLabel"));
        m_markPointsLabel->setGeometry(QRect(31, 218, 60, 16));
        m_markPointsLineEdit = new QLineEdit(m_machineSetupGroupBox);
        m_markPointsLineEdit->setObjectName(QString::fromUtf8("m_markPointsLineEdit"));
        m_markPointsLineEdit->setGeometry(QRect(97, 218, 61, 20));
        m_drawPointsLineEdit = new QLineEdit(m_machineSetupGroupBox);
        m_drawPointsLineEdit->setObjectName(QString::fromUtf8("m_drawPointsLineEdit"));
        m_drawPointsLineEdit->setGeometry(QRect(310, 218, 61, 20));
        m_drawPointsLabel = new QLabel(m_machineSetupGroupBox);
        m_drawPointsLabel->setObjectName(QString::fromUtf8("m_drawPointsLabel"));
        m_drawPointsLabel->setGeometry(QRect(244, 218, 60, 16));
        m_clearPointCycleLineEdit = new QLineEdit(m_machineSetupGroupBox);
        m_clearPointCycleLineEdit->setObjectName(QString::fromUtf8("m_clearPointCycleLineEdit"));
        m_clearPointCycleLineEdit->setGeometry(QRect(97, 280, 61, 20));
        m_clearPointCycleLabel = new QLabel(m_machineSetupGroupBox);
        m_clearPointCycleLabel->setObjectName(QString::fromUtf8("m_clearPointCycleLabel"));
        m_clearPointCycleLabel->setGeometry(QRect(31, 280, 60, 16));
        m_pushPointDaysLineEdit = new QLineEdit(m_machineSetupGroupBox);
        m_pushPointDaysLineEdit->setObjectName(QString::fromUtf8("m_pushPointDaysLineEdit"));
        m_pushPointDaysLineEdit->setGeometry(QRect(97, 249, 61, 20));
        m_pushPointDaysLabel = new QLabel(m_machineSetupGroupBox);
        m_pushPointDaysLabel->setObjectName(QString::fromUtf8("m_pushPointDaysLabel"));
        m_pushPointDaysLabel->setGeometry(QRect(31, 249, 60, 16));
        layoutWidget = new QWidget(m_machineSetupGroupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 40, 225, 48));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        m_machineTypeLabel = new QLabel(layoutWidget);
        m_machineTypeLabel->setObjectName(QString::fromUtf8("m_machineTypeLabel"));

        gridLayout->addWidget(m_machineTypeLabel, 0, 0, 1, 1);

        m_machineTypeLineEdit = new QLineEdit(layoutWidget);
        m_machineTypeLineEdit->setObjectName(QString::fromUtf8("m_machineTypeLineEdit"));

        gridLayout->addWidget(m_machineTypeLineEdit, 0, 1, 1, 1);

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
        m_cashRatioLabel = new QLabel(layoutWidget1);
        m_cashRatioLabel->setObjectName(QString::fromUtf8("m_cashRatioLabel"));

        horizontalLayout_4->addWidget(m_cashRatioLabel);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        m_cashRatioLineEdit = new QLineEdit(layoutWidget1);
        m_cashRatioLineEdit->setObjectName(QString::fromUtf8("m_cashRatioLineEdit"));

        horizontalLayout_2->addWidget(m_cashRatioLineEdit);

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
        m_coinRatioLabel = new QLabel(layoutWidget2);
        m_coinRatioLabel->setObjectName(QString::fromUtf8("m_coinRatioLabel"));

        horizontalLayout_5->addWidget(m_coinRatioLabel);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        m_coinRatioLineEdit = new QLineEdit(layoutWidget2);
        m_coinRatioLineEdit->setObjectName(QString::fromUtf8("m_coinRatioLineEdit"));

        horizontalLayout_3->addWidget(m_coinRatioLineEdit);

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

        m_buttonBox = new QDialogButtonBox(TmachineGroupFuncDetailSetupViewItemAdd);
        m_buttonBox->setObjectName(QString::fromUtf8("m_buttonBox"));
        m_buttonBox->setGeometry(QRect(640, 650, 156, 23));
        m_buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(TmachineGroupFuncDetailSetupViewItemAdd);

        QMetaObject::connectSlotsByName(TmachineGroupFuncDetailSetupViewItemAdd);
    } // setupUi

    void retranslateUi(QWidget *TmachineGroupFuncDetailSetupViewItemAdd)
    {
        TmachineGroupFuncDetailSetupViewItemAdd->setWindowTitle(QApplication::translate("TmachineGroupFuncDetailSetupViewItemAdd", "Form", 0, QApplication::UnicodeUTF8));
        m_categoryLabel->setText(QApplication::translate("TmachineGroupFuncDetailSetupViewItemAdd", "\347\261\273\345\236\213", 0, QApplication::UnicodeUTF8));
        m_machineSetupGroupBox->setTitle(QApplication::translate("TmachineGroupFuncDetailSetupViewItemAdd", "\346\234\272\345\217\260\345\212\237\350\203\275\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        m_mainProbabilityLabel->setText(QApplication::translate("TmachineGroupFuncDetailSetupViewItemAdd", "\344\270\273\345\207\240\347\216\207\357\274\232", 0, QApplication::UnicodeUTF8));
        m_probabilityRangeLabel->setText(QApplication::translate("TmachineGroupFuncDetailSetupViewItemAdd", "\345\207\240\347\216\207\350\214\203\345\233\264\357\274\232", 0, QApplication::UnicodeUTF8));
        m_maxPointsLabel->setText(QApplication::translate("TmachineGroupFuncDetailSetupViewItemAdd", "\346\234\200\345\244\247\345\216\213\345\210\206\357\274\232", 0, QApplication::UnicodeUTF8));
        m_minPointsLabel->setText(QApplication::translate("TmachineGroupFuncDetailSetupViewItemAdd", "\346\234\200\345\260\217\345\216\213\345\210\206\357\274\232", 0, QApplication::UnicodeUTF8));
        m_markPointsLabel->setText(QApplication::translate("TmachineGroupFuncDetailSetupViewItemAdd", "\345\272\204\351\227\262\345\216\213\345\210\206\357\274\232", 0, QApplication::UnicodeUTF8));
        m_drawPointsLabel->setText(QApplication::translate("TmachineGroupFuncDetailSetupViewItemAdd", "\345\222\214\345\261\200\345\216\213\345\210\206\357\274\232", 0, QApplication::UnicodeUTF8));
        m_clearPointCycleLabel->setText(QApplication::translate("TmachineGroupFuncDetailSetupViewItemAdd", "\346\270\205\345\270\201\346\227\266\351\227\264\357\274\232", 0, QApplication::UnicodeUTF8));
        m_pushPointDaysLabel->setText(QApplication::translate("TmachineGroupFuncDetailSetupViewItemAdd", "\346\212\225\347\240\201\345\244\251\346\225\260\357\274\232", 0, QApplication::UnicodeUTF8));
        m_machineTypeLabel->setText(QApplication::translate("TmachineGroupFuncDetailSetupViewItemAdd", "\346\234\272\347\273\204\347\274\226\345\217\267\345\220\215\347\247\260\357\274\232", 0, QApplication::UnicodeUTF8));
        m_functionLabel->setText(QApplication::translate("TmachineGroupFuncDetailSetupViewItemAdd", "\345\212\237\350\203\275\357\274\232", 0, QApplication::UnicodeUTF8));
        m_cashRatioLabel->setText(QApplication::translate("TmachineGroupFuncDetailSetupViewItemAdd", "\350\256\276\347\275\256\345\270\201\347\247\215\357\274\232", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("TmachineGroupFuncDetailSetupViewItemAdd", "\345\210\206/\345\205\203", 0, QApplication::UnicodeUTF8));
        m_coinRatioLabel->setText(QApplication::translate("TmachineGroupFuncDetailSetupViewItemAdd", "\350\256\276\347\275\256\345\210\206\345\200\274\357\274\232", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("TmachineGroupFuncDetailSetupViewItemAdd", "\345\270\201/\345\210\206", 0, QApplication::UnicodeUTF8));
        m_remarkLabel->setText(QApplication::translate("TmachineGroupFuncDetailSetupViewItemAdd", "\345\244\207\346\263\250\357\274\232", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TmachineGroupFuncDetailSetupViewItemAdd: public Ui_TmachineGroupFuncDetailSetupViewItemAdd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TMACHINEGROUPFUNCDETAILSETUPVIEWITEMADD_H
