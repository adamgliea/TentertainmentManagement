#ifndef TENTERTAINMENTMANAGEMENT_H
#define TENTERTAINMENTMANAGEMENT_H

#include <QtGui/QMainWindow>

QT_BEGIN_NAMESPACE
class QAction;
class QListWidget;
class QMenu;
class QTextEdit;
class QStackedWidget;
class QTreeView;
QT_END_NAMESPACE

namespace YR2K {

    class ToutlinerTreeView;

    class TentertainmentManagement : public QMainWindow
    {
        Q_OBJECT

    public:
        TentertainmentManagement();

    private slots:
        void save();
        void print();
        void undo();
        void about();

    private:
        void createActions();
        void createMenus();
        void createToolBars();
        void createStatusBar();
        void createDockWindows();
        void createStackedWidget();
        void createTreeView();

        QStackedWidget* m_pStackedWidget;
        QListWidget*    m_pCustomerList;
        QListWidget*    m_pPparagraphsList;

        QMenu*          m_pFileMenu;
        QMenu*          m_pEditMenu;
        QMenu*          m_pViewMenu;
        QMenu*          m_pHelpMenu;
        QToolBar*       m_pFileToolBar;
        QToolBar*       m_pEditToolBar;

        QAction*        m_pSaveAct;
        QAction*        m_pPrintAct;
        QAction*        m_pUndoAct;
        QAction*        m_pAboutAct;
        QAction*        m_pQuitAct;

        ToutlinerTreeView*  m_pOutlinerTreeView;
    };

}
//! [0]

#endif  // TENTERTAINMENTMANAGEMENT_H
