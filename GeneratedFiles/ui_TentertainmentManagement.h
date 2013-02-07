/********************************************************************************
** Form generated from reading UI file 'TentertainmentManagement.ui'
**
** Created: Thu Feb 7 23:02:14 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TENTERTAINMENTMANAGEMENT_H
#define UI_TENTERTAINMENTMANAGEMENT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TentertainmentManagementClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TentertainmentManagementClass)
    {
        if (TentertainmentManagementClass->objectName().isEmpty())
            TentertainmentManagementClass->setObjectName(QString::fromUtf8("TentertainmentManagementClass"));
        TentertainmentManagementClass->resize(600, 400);
        menuBar = new QMenuBar(TentertainmentManagementClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        TentertainmentManagementClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TentertainmentManagementClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        TentertainmentManagementClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(TentertainmentManagementClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        TentertainmentManagementClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(TentertainmentManagementClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        TentertainmentManagementClass->setStatusBar(statusBar);

        retranslateUi(TentertainmentManagementClass);

        QMetaObject::connectSlotsByName(TentertainmentManagementClass);
    } // setupUi

    void retranslateUi(QMainWindow *TentertainmentManagementClass)
    {
        TentertainmentManagementClass->setWindowTitle(QApplication::translate("TentertainmentManagementClass", "TentertainmentManagement", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TentertainmentManagementClass: public Ui_TentertainmentManagementClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TENTERTAINMENTMANAGEMENT_H
