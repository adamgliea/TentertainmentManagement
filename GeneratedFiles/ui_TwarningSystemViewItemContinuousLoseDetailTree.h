/********************************************************************************
** Form generated from reading UI file 'TwarningSystemViewItemContinuousLoseDetailTree.ui'
**
** Created: Wed Feb 6 10:16:14 2013
**      by: Qt User Interface Compiler version 4.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TWARNINGSYSTEMVIEWITEMCONTINUOUSLOSEDETAILTREE_H
#define UI_TWARNINGSYSTEMVIEWITEMCONTINUOUSLOSEDETAILTREE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TwarningSystemViewItemContinuousLoseDetailTree
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTreeWidget *m_continuousLoseTreeWidget;

    void setupUi(QWidget *TwarningSystemViewItemContinuousLoseDetailTree)
    {
        if (TwarningSystemViewItemContinuousLoseDetailTree->objectName().isEmpty())
            TwarningSystemViewItemContinuousLoseDetailTree->setObjectName(QString::fromUtf8("TwarningSystemViewItemContinuousLoseDetailTree"));
        TwarningSystemViewItemContinuousLoseDetailTree->resize(385, 225);
        verticalLayoutWidget = new QWidget(TwarningSystemViewItemContinuousLoseDetailTree);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(-1, -1, 391, 231));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        m_continuousLoseTreeWidget = new QTreeWidget(verticalLayoutWidget);
        m_continuousLoseTreeWidget->setObjectName(QString::fromUtf8("m_continuousLoseTreeWidget"));

        verticalLayout->addWidget(m_continuousLoseTreeWidget);


        retranslateUi(TwarningSystemViewItemContinuousLoseDetailTree);

        QMetaObject::connectSlotsByName(TwarningSystemViewItemContinuousLoseDetailTree);
    } // setupUi

    void retranslateUi(QWidget *TwarningSystemViewItemContinuousLoseDetailTree)
    {
        TwarningSystemViewItemContinuousLoseDetailTree->setWindowTitle(QApplication::translate("TwarningSystemViewItemContinuousLoseDetailTree", "Form", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = m_continuousLoseTreeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("TwarningSystemViewItemContinuousLoseDetailTree", "\350\277\236\347\273\255\344\272\217\346\215\237\345\200\274", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("TwarningSystemViewItemContinuousLoseDetailTree", "\350\277\236\347\273\255\344\272\217\346\215\237\351\241\271\347\233\256", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TwarningSystemViewItemContinuousLoseDetailTree: public Ui_TwarningSystemViewItemContinuousLoseDetailTree {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TWARNINGSYSTEMVIEWITEMCONTINUOUSLOSEDETAILTREE_H
