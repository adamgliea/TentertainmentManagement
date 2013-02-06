/********************************************************************************
** Form generated from reading UI file 'TmachineGroupFuncBaseSetupViewItemAddWidget.ui'
**
** Created: Wed Feb 6 10:16:14 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TMACHINEGROUPFUNCBASESETUPVIEWITEMADDWIDGET_H
#define UI_TMACHINEGROUPFUNCBASESETUPVIEWITEMADDWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TmachineGroupFuncBaseSetupViewItemAddWidget
{
public:
    QDialogButtonBox *m_buttonBox;
    QGroupBox *m_machineFuncBaseSetupGroupBox;
    QWidget *layoutWidget;
    QHBoxLayout *m_depositaryLayout;
    QLabel *m_factoryNameLabel;
    QLineEdit *m_factoryNameLineEdit;
    QWidget *layoutWidget1;
    QHBoxLayout *m_phoneLayout;
    QLabel *m_factoryPhoneNumberLabel;
    QLineEdit *m_factoryPhoneNumberLineEdit;
    QWidget *layoutWidget2;
    QVBoxLayout *m_manufacturerLayout;
    QLabel *m_locationLabel;
    QTextEdit *m_locationTextEdit;
    QWidget *layoutWidget3;
    QHBoxLayout *m_businessStatusLayout;
    QLabel *m_businessConditionsLabel;
    QComboBox *m_businessConditionsComboBox;
    QWidget *layoutWidget4;
    QVBoxLayout *m_remarkLayout;
    QLabel *m_remarkLabel;
    QTextEdit *m_remarkTextEdit;

    void setupUi(QWidget *TmachineGroupFuncBaseSetupViewItemAddWidget)
    {
        if (TmachineGroupFuncBaseSetupViewItemAddWidget->objectName().isEmpty())
            TmachineGroupFuncBaseSetupViewItemAddWidget->setObjectName(QString::fromUtf8("TmachineGroupFuncBaseSetupViewItemAddWidget"));
        TmachineGroupFuncBaseSetupViewItemAddWidget->resize(866, 642);
        m_buttonBox = new QDialogButtonBox(TmachineGroupFuncBaseSetupViewItemAddWidget);
        m_buttonBox->setObjectName(QString::fromUtf8("m_buttonBox"));
        m_buttonBox->setGeometry(QRect(700, 610, 156, 23));
        m_buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        m_machineFuncBaseSetupGroupBox = new QGroupBox(TmachineGroupFuncBaseSetupViewItemAddWidget);
        m_machineFuncBaseSetupGroupBox->setObjectName(QString::fromUtf8("m_machineFuncBaseSetupGroupBox"));
        m_machineFuncBaseSetupGroupBox->setGeometry(QRect(0, 0, 851, 581));
        layoutWidget = new QWidget(m_machineFuncBaseSetupGroupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 40, 791, 22));
        m_depositaryLayout = new QHBoxLayout(layoutWidget);
        m_depositaryLayout->setObjectName(QString::fromUtf8("m_depositaryLayout"));
        m_depositaryLayout->setContentsMargins(0, 0, 0, 0);
        m_factoryNameLabel = new QLabel(layoutWidget);
        m_factoryNameLabel->setObjectName(QString::fromUtf8("m_factoryNameLabel"));

        m_depositaryLayout->addWidget(m_factoryNameLabel);

        m_factoryNameLineEdit = new QLineEdit(layoutWidget);
        m_factoryNameLineEdit->setObjectName(QString::fromUtf8("m_factoryNameLineEdit"));

        m_depositaryLayout->addWidget(m_factoryNameLineEdit);

        layoutWidget1 = new QWidget(m_machineFuncBaseSetupGroupBox);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 90, 231, 22));
        m_phoneLayout = new QHBoxLayout(layoutWidget1);
        m_phoneLayout->setObjectName(QString::fromUtf8("m_phoneLayout"));
        m_phoneLayout->setContentsMargins(0, 0, 0, 0);
        m_factoryPhoneNumberLabel = new QLabel(layoutWidget1);
        m_factoryPhoneNumberLabel->setObjectName(QString::fromUtf8("m_factoryPhoneNumberLabel"));

        m_phoneLayout->addWidget(m_factoryPhoneNumberLabel);

        m_factoryPhoneNumberLineEdit = new QLineEdit(layoutWidget1);
        m_factoryPhoneNumberLineEdit->setObjectName(QString::fromUtf8("m_factoryPhoneNumberLineEdit"));

        m_phoneLayout->addWidget(m_factoryPhoneNumberLineEdit);

        layoutWidget2 = new QWidget(m_machineFuncBaseSetupGroupBox);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(30, 140, 791, 141));
        m_manufacturerLayout = new QVBoxLayout(layoutWidget2);
        m_manufacturerLayout->setObjectName(QString::fromUtf8("m_manufacturerLayout"));
        m_manufacturerLayout->setContentsMargins(0, 0, 0, 0);
        m_locationLabel = new QLabel(layoutWidget2);
        m_locationLabel->setObjectName(QString::fromUtf8("m_locationLabel"));

        m_manufacturerLayout->addWidget(m_locationLabel);

        m_locationTextEdit = new QTextEdit(layoutWidget2);
        m_locationTextEdit->setObjectName(QString::fromUtf8("m_locationTextEdit"));

        m_manufacturerLayout->addWidget(m_locationTextEdit);

        layoutWidget3 = new QWidget(m_machineFuncBaseSetupGroupBox);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(30, 310, 137, 22));
        m_businessStatusLayout = new QHBoxLayout(layoutWidget3);
        m_businessStatusLayout->setObjectName(QString::fromUtf8("m_businessStatusLayout"));
        m_businessStatusLayout->setContentsMargins(0, 0, 0, 0);
        m_businessConditionsLabel = new QLabel(layoutWidget3);
        m_businessConditionsLabel->setObjectName(QString::fromUtf8("m_businessConditionsLabel"));

        m_businessStatusLayout->addWidget(m_businessConditionsLabel);

        m_businessConditionsComboBox = new QComboBox(layoutWidget3);
        m_businessConditionsComboBox->setObjectName(QString::fromUtf8("m_businessConditionsComboBox"));

        m_businessStatusLayout->addWidget(m_businessConditionsComboBox);

        layoutWidget4 = new QWidget(m_machineFuncBaseSetupGroupBox);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(30, 380, 791, 171));
        m_remarkLayout = new QVBoxLayout(layoutWidget4);
        m_remarkLayout->setObjectName(QString::fromUtf8("m_remarkLayout"));
        m_remarkLayout->setContentsMargins(0, 0, 0, 0);
        m_remarkLabel = new QLabel(layoutWidget4);
        m_remarkLabel->setObjectName(QString::fromUtf8("m_remarkLabel"));

        m_remarkLayout->addWidget(m_remarkLabel);

        m_remarkTextEdit = new QTextEdit(layoutWidget4);
        m_remarkTextEdit->setObjectName(QString::fromUtf8("m_remarkTextEdit"));

        m_remarkLayout->addWidget(m_remarkTextEdit);


        retranslateUi(TmachineGroupFuncBaseSetupViewItemAddWidget);

        QMetaObject::connectSlotsByName(TmachineGroupFuncBaseSetupViewItemAddWidget);
    } // setupUi

    void retranslateUi(QWidget *TmachineGroupFuncBaseSetupViewItemAddWidget)
    {
        TmachineGroupFuncBaseSetupViewItemAddWidget->setWindowTitle(QApplication::translate("TmachineGroupFuncBaseSetupViewItemAddWidget", "Form", 0, QApplication::UnicodeUTF8));
        m_machineFuncBaseSetupGroupBox->setTitle(QApplication::translate("TmachineGroupFuncBaseSetupViewItemAddWidget", "\346\234\272\345\217\260\346\230\216\347\273\206\346\267\273\345\212\240", 0, QApplication::UnicodeUTF8));
        m_factoryNameLabel->setText(QApplication::translate("TmachineGroupFuncBaseSetupViewItemAddWidget", "\345\207\272\345\234\272\345\216\202\345\256\266\357\274\232", 0, QApplication::UnicodeUTF8));
        m_factoryPhoneNumberLabel->setText(QApplication::translate("TmachineGroupFuncBaseSetupViewItemAddWidget", "\345\216\202\345\256\266\347\224\265\350\257\235\357\274\232", 0, QApplication::UnicodeUTF8));
        m_locationLabel->setText(QApplication::translate("TmachineGroupFuncBaseSetupViewItemAddWidget", "\345\255\230\346\224\276\345\234\260\347\202\271\357\274\232", 0, QApplication::UnicodeUTF8));
        m_businessConditionsLabel->setText(QApplication::translate("TmachineGroupFuncBaseSetupViewItemAddWidget", "\350\220\245\344\270\232\347\212\266\345\206\265\357\274\232", 0, QApplication::UnicodeUTF8));
        m_businessConditionsComboBox->clear();
        m_businessConditionsComboBox->insertItems(0, QStringList()
         << QApplication::translate("TmachineGroupFuncBaseSetupViewItemAddWidget", "\345\220\246", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("TmachineGroupFuncBaseSetupViewItemAddWidget", "\346\230\257", 0, QApplication::UnicodeUTF8)
        );
        m_remarkLabel->setText(QApplication::translate("TmachineGroupFuncBaseSetupViewItemAddWidget", "\345\244\207\346\263\250\357\274\232", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TmachineGroupFuncBaseSetupViewItemAddWidget: public Ui_TmachineGroupFuncBaseSetupViewItemAddWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TMACHINEGROUPFUNCBASESETUPVIEWITEMADDWIDGET_H
