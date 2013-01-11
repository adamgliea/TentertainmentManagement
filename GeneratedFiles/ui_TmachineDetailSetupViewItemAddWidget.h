/********************************************************************************
** Form generated from reading UI file 'TmachineDetailSetupViewItemAddWidget.ui'
**
** Created: Fri Jan 11 13:10:27 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TMACHINEDETAILSETUPVIEWITEMADDWIDGET_H
#define UI_TMACHINEDETAILSETUPVIEWITEMADDWIDGET_H

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

class Ui_TmachineDetailSetupViewItemAddWidget
{
public:
    QDialogButtonBox *m_addConfirmButtonBox;
    QGroupBox *m_machineDetailsetupGroupBox;
    QWidget *layoutWidget;
    QHBoxLayout *m_machineNumberLayout;
    QLabel *m_machineNumberLabel;
    QLineEdit *m_machineNumberLineEdit;
    QWidget *layoutWidget1;
    QHBoxLayout *m_depositaryLayout;
    QLabel *m_depositaryLabel;
    QLineEdit *m_depositaryLineEdit;
    QWidget *layoutWidget2;
    QHBoxLayout *m_phoneLayout;
    QLabel *m_phoneLabel;
    QLineEdit *m_phoneLineEdit;
    QWidget *layoutWidget3;
    QVBoxLayout *m_manufacturerLayout;
    QLabel *m_manufacturerLabel;
    QTextEdit *m_manufacturerTextEdit;
    QWidget *layoutWidget4;
    QHBoxLayout *m_businessStatusLayout;
    QLabel *m_businessStatusLabel;
    QComboBox *m_businessStatusComboBox;
    QWidget *layoutWidget5;
    QVBoxLayout *m_remarkLayout;
    QLabel *m_remarkLabel;
    QTextEdit *m_remarkTextEdit;

    void setupUi(QWidget *TmachineDetailSetupViewItemAddWidget)
    {
        if (TmachineDetailSetupViewItemAddWidget->objectName().isEmpty())
            TmachineDetailSetupViewItemAddWidget->setObjectName(QString::fromUtf8("TmachineDetailSetupViewItemAddWidget"));
        TmachineDetailSetupViewItemAddWidget->resize(866, 642);
        m_addConfirmButtonBox = new QDialogButtonBox(TmachineDetailSetupViewItemAddWidget);
        m_addConfirmButtonBox->setObjectName(QString::fromUtf8("m_addConfirmButtonBox"));
        m_addConfirmButtonBox->setGeometry(QRect(700, 610, 156, 23));
        m_addConfirmButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        m_machineDetailsetupGroupBox = new QGroupBox(TmachineDetailSetupViewItemAddWidget);
        m_machineDetailsetupGroupBox->setObjectName(QString::fromUtf8("m_machineDetailsetupGroupBox"));
        m_machineDetailsetupGroupBox->setGeometry(QRect(0, 0, 851, 581));
        layoutWidget = new QWidget(m_machineDetailsetupGroupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 50, 201, 22));
        m_machineNumberLayout = new QHBoxLayout(layoutWidget);
        m_machineNumberLayout->setObjectName(QString::fromUtf8("m_machineNumberLayout"));
        m_machineNumberLayout->setContentsMargins(0, 0, 0, 0);
        m_machineNumberLabel = new QLabel(layoutWidget);
        m_machineNumberLabel->setObjectName(QString::fromUtf8("m_machineNumberLabel"));

        m_machineNumberLayout->addWidget(m_machineNumberLabel);

        m_machineNumberLineEdit = new QLineEdit(layoutWidget);
        m_machineNumberLineEdit->setObjectName(QString::fromUtf8("m_machineNumberLineEdit"));

        m_machineNumberLayout->addWidget(m_machineNumberLineEdit);

        layoutWidget1 = new QWidget(m_machineDetailsetupGroupBox);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 90, 791, 22));
        m_depositaryLayout = new QHBoxLayout(layoutWidget1);
        m_depositaryLayout->setObjectName(QString::fromUtf8("m_depositaryLayout"));
        m_depositaryLayout->setContentsMargins(0, 0, 0, 0);
        m_depositaryLabel = new QLabel(layoutWidget1);
        m_depositaryLabel->setObjectName(QString::fromUtf8("m_depositaryLabel"));

        m_depositaryLayout->addWidget(m_depositaryLabel);

        m_depositaryLineEdit = new QLineEdit(layoutWidget1);
        m_depositaryLineEdit->setObjectName(QString::fromUtf8("m_depositaryLineEdit"));

        m_depositaryLayout->addWidget(m_depositaryLineEdit);

        layoutWidget2 = new QWidget(m_machineDetailsetupGroupBox);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(30, 130, 231, 22));
        m_phoneLayout = new QHBoxLayout(layoutWidget2);
        m_phoneLayout->setObjectName(QString::fromUtf8("m_phoneLayout"));
        m_phoneLayout->setContentsMargins(0, 0, 0, 0);
        m_phoneLabel = new QLabel(layoutWidget2);
        m_phoneLabel->setObjectName(QString::fromUtf8("m_phoneLabel"));

        m_phoneLayout->addWidget(m_phoneLabel);

        m_phoneLineEdit = new QLineEdit(layoutWidget2);
        m_phoneLineEdit->setObjectName(QString::fromUtf8("m_phoneLineEdit"));

        m_phoneLayout->addWidget(m_phoneLineEdit);

        layoutWidget3 = new QWidget(m_machineDetailsetupGroupBox);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(30, 180, 791, 141));
        m_manufacturerLayout = new QVBoxLayout(layoutWidget3);
        m_manufacturerLayout->setObjectName(QString::fromUtf8("m_manufacturerLayout"));
        m_manufacturerLayout->setContentsMargins(0, 0, 0, 0);
        m_manufacturerLabel = new QLabel(layoutWidget3);
        m_manufacturerLabel->setObjectName(QString::fromUtf8("m_manufacturerLabel"));

        m_manufacturerLayout->addWidget(m_manufacturerLabel);

        m_manufacturerTextEdit = new QTextEdit(layoutWidget3);
        m_manufacturerTextEdit->setObjectName(QString::fromUtf8("m_manufacturerTextEdit"));

        m_manufacturerLayout->addWidget(m_manufacturerTextEdit);

        layoutWidget4 = new QWidget(m_machineDetailsetupGroupBox);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(30, 340, 137, 22));
        m_businessStatusLayout = new QHBoxLayout(layoutWidget4);
        m_businessStatusLayout->setObjectName(QString::fromUtf8("m_businessStatusLayout"));
        m_businessStatusLayout->setContentsMargins(0, 0, 0, 0);
        m_businessStatusLabel = new QLabel(layoutWidget4);
        m_businessStatusLabel->setObjectName(QString::fromUtf8("m_businessStatusLabel"));

        m_businessStatusLayout->addWidget(m_businessStatusLabel);

        m_businessStatusComboBox = new QComboBox(layoutWidget4);
        m_businessStatusComboBox->setObjectName(QString::fromUtf8("m_businessStatusComboBox"));

        m_businessStatusLayout->addWidget(m_businessStatusComboBox);

        layoutWidget5 = new QWidget(m_machineDetailsetupGroupBox);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(30, 380, 791, 171));
        m_remarkLayout = new QVBoxLayout(layoutWidget5);
        m_remarkLayout->setObjectName(QString::fromUtf8("m_remarkLayout"));
        m_remarkLayout->setContentsMargins(0, 0, 0, 0);
        m_remarkLabel = new QLabel(layoutWidget5);
        m_remarkLabel->setObjectName(QString::fromUtf8("m_remarkLabel"));

        m_remarkLayout->addWidget(m_remarkLabel);

        m_remarkTextEdit = new QTextEdit(layoutWidget5);
        m_remarkTextEdit->setObjectName(QString::fromUtf8("m_remarkTextEdit"));

        m_remarkLayout->addWidget(m_remarkTextEdit);


        retranslateUi(TmachineDetailSetupViewItemAddWidget);

        QMetaObject::connectSlotsByName(TmachineDetailSetupViewItemAddWidget);
    } // setupUi

    void retranslateUi(QWidget *TmachineDetailSetupViewItemAddWidget)
    {
        TmachineDetailSetupViewItemAddWidget->setWindowTitle(QApplication::translate("TmachineDetailSetupViewItemAddWidget", "Form", 0, QApplication::UnicodeUTF8));
        m_machineDetailsetupGroupBox->setTitle(QApplication::translate("TmachineDetailSetupViewItemAddWidget", "\346\234\272\345\217\260\346\230\216\347\273\206\346\267\273\345\212\240", 0, QApplication::UnicodeUTF8));
        m_machineNumberLabel->setText(QApplication::translate("TmachineDetailSetupViewItemAddWidget", "\346\234\272\347\273\204\347\274\226\345\217\267\357\274\232", 0, QApplication::UnicodeUTF8));
        m_depositaryLabel->setText(QApplication::translate("TmachineDetailSetupViewItemAddWidget", "\345\207\272\345\234\272\345\216\202\345\256\266\357\274\232", 0, QApplication::UnicodeUTF8));
        m_phoneLabel->setText(QApplication::translate("TmachineDetailSetupViewItemAddWidget", "\345\216\202\345\256\266\347\224\265\350\257\235\357\274\232", 0, QApplication::UnicodeUTF8));
        m_manufacturerLabel->setText(QApplication::translate("TmachineDetailSetupViewItemAddWidget", "\345\255\230\346\224\276\345\234\260\347\202\271\357\274\232", 0, QApplication::UnicodeUTF8));
        m_businessStatusLabel->setText(QApplication::translate("TmachineDetailSetupViewItemAddWidget", "\350\220\245\344\270\232\347\212\266\345\206\265\357\274\232", 0, QApplication::UnicodeUTF8));
        m_remarkLabel->setText(QApplication::translate("TmachineDetailSetupViewItemAddWidget", "\345\244\207\346\263\250\357\274\232", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TmachineDetailSetupViewItemAddWidget: public Ui_TmachineDetailSetupViewItemAddWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TMACHINEDETAILSETUPVIEWITEMADDWIDGET_H
