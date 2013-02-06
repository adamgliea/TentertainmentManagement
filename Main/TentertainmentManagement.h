#ifndef TENTERTAINMENTMANAGEMENT_H
#define TENTERTAINMENTMANAGEMENT_H

#include <QtGui/QMainWindow>
#include <QtGui/QScrollArea>
#include <QtGui/QStandardItem>
#include "TpanelBase.h"

QT_BEGIN_NAMESPACE
class QAction;
class QListWidget;
class QMenu;
class QTextEdit;
class QStackedWidget;
class QTreeView;
class QSplitter;

QT_END_NAMESPACE

namespace YR2K {

    class ToutlinerTreeView;

    class TentertainmentManagement : public QMainWindow
    {
        Q_OBJECT
    public:
        TentertainmentManagement();

    private slots:
        void                        save();
        void                        print();
        void                        undo();
        void                        about();
        void                        onTreeMenuClicked(const TEPanelIndex& menuType, const TECategory& category, unsigned int itemData);

        void                        onInitInventoryTreeCabinetNode(QStandardItem* cabinetItem);
        void                        onInitInventoryTreeLotteryNode(QStandardItem* lotteryItem);
        void                        onInitInventoryTreeSimulateNode(QStandardItem* simulateItem);
        void                        onInitInventoryTreeCoindozerNode(QStandardItem* coindozerItem);
        void                        onInitInventoryTreeWagerNode(QStandardItem* wagerItem);

    private:
        void                        createActions();
        void                        createMenus();
        void                        createStatusBar();
        void                        createSplitWindows();
        void                        createStackedWidget();
        void                        createTreeView();

        TpanelBase*                 m_aryPanelWidgets[PANEL_NUM + 1];
        QScrollArea*                m_aryPanelWidgetScrollAreas[PANEL_NUM + 1];
        QStackedWidget*             m_pStackedWidget;
        QListWidget*                m_pCustomerList;
        QListWidget*                m_pPparagraphsList;

        QMenu*                      m_pFileMenu;
        QMenu*                      m_pEditMenu;
        QMenu*                      m_pViewMenu;
        QMenu*                      m_pHelpMenu;

        QAction*                    m_pSaveAct;
        QAction*                    m_pPrintAct;
        QAction*                    m_pUndoAct;
        QAction*                    m_pAboutAct;
        QAction*                    m_pQuitAct;

        QDockWidget*                m_pDockWindow;
        ToutlinerTreeView*          m_pOutlinerTreeView;
        QSplitter*                  m_pSplitterWindow;
    };

}
//! [0]

#endif  // TENTERTAINMENTMANAGEMENT_H
