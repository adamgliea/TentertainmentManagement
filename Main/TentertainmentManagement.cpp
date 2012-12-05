#include "TentertainmentManagement.h"
#include "ToutlinerTreeView.h"

#include <QtGui/QTextEdit>
#include <QtGui/QTextFrame>
#include <QtGui/QTextFrameFormat>
#include <QtGui/QPrinter>
#include <QtGui/QPrintDialog>
#include <QtGui/QStatusBar>
#include <QtGui/QFileDialog>
#include <QtGui/QApplication>
#include <QtGui/QMessageBox>
#include <QtGui/QAction>
#include <QtGui/QMenuBar>
#include <QtGui/QToolBar>
#include <QtGui/QDockWidget>
#include <QtGui/QListWidget>
#include <QtGui/QTreeView>
#include <QtGui/QStackedWidget>
#include <QtGui/QHBoxLayout>
#include <QtGui/QSplitter>
#include <QtCore/QDate>
#include <QtCore/QTextStream>


#include "TadminSetupPanel.h"
#include "TassetSetupPanel.h"
#include "TinventoryReportPanel.h"
#include "TmachineFuncSetupPanel.h"
#include "TmachineGroupDifferenceReportPanel.h"
#include "TmachineGroupReportPanel.h"
#include "TwarningSystemPanel.h"
#include "TwelcomePanel.h"
#include "TcommonTypes.h"

namespace YR2K {

    TentertainmentManagement::TentertainmentManagement()
        : m_pOutlinerTreeView(NULL)
        , m_pDockWindow(NULL)
    {
        createActions();
        createMenus();
        createToolBars();
        createStatusBar();
        createStackedWidget();
        createDockWindows();
        setWindowTitle(tr("Entertainment Management"));



    }

    void TentertainmentManagement::print()
    {
    #ifndef QT_NO_PRINTDIALOG
        QPrinter printer;

        QPrintDialog *dlg = new QPrintDialog(&printer, this);
        if (dlg->exec() != QDialog::Accepted)
            return;

        // print
        statusBar()->showMessage(tr("Ready"), 2000);
    #endif
    }

    void TentertainmentManagement::save()
    {
        QString fileName = QFileDialog::getSaveFileName(this,
            tr("Choose a file name"), ".",
            tr("HTML (*.html *.htm)"));
        if (fileName.isEmpty())
            return;
        QFile file(fileName);
        if (!file.open(QFile::WriteOnly | QFile::Text)) {
            QMessageBox::warning(this, tr("Dock Widgets"),
                tr("Cannot write file %1:\n%2.")
                .arg(fileName)
                .arg(file.errorString()));
            return;
        }

        QTextStream out(&file);
        QApplication::setOverrideCursor(Qt::WaitCursor);
        // To do:
        // write to file
        QApplication::restoreOverrideCursor();

        statusBar()->showMessage(tr("Saved '%1'").arg(fileName), 2000);
    }

    void TentertainmentManagement::undo()
    {
    }

    void TentertainmentManagement::about()
    {
        QMessageBox::about(this, tr("About Enterainment Management"),
            tr("The <b>Dock Widgets</b> example demonstrates how to "
            "use Qt's dock widgets. You can enter your own text, "
            "click a customer to add a customer name and "
            "address, and click standard paragraphs to add them."));
    }

    void TentertainmentManagement::createActions()
    {
        m_pSaveAct = new QAction(QIcon(":/images/save.png"), tr("&Save..."), this);
        m_pSaveAct->setShortcuts(QKeySequence::Save);
        m_pSaveAct->setStatusTip(tr("Save the current form letter"));
        connect(m_pSaveAct, SIGNAL(triggered()), this, SLOT(save()));

        m_pPrintAct = new QAction(QIcon(":/images/print.png"), tr("&Print..."), this);
        m_pPrintAct->setShortcuts(QKeySequence::Print);
        m_pPrintAct->setStatusTip(tr("Print the current form letter"));
        connect(m_pPrintAct, SIGNAL(triggered()), this, SLOT(print()));

        m_pUndoAct = new QAction(QIcon(":/images/undo.png"), tr("&Undo"), this);
        m_pUndoAct->setShortcuts(QKeySequence::Undo);
        m_pUndoAct->setStatusTip(tr("Undo the last editing action"));
        connect(m_pUndoAct, SIGNAL(triggered()), this, SLOT(undo()));

        m_pQuitAct = new QAction(tr("&Quit"), this);
        m_pQuitAct->setShortcuts(QKeySequence::Quit);
        m_pQuitAct->setStatusTip(tr("Quit the application"));
        connect(m_pQuitAct, SIGNAL(triggered()), this, SLOT(close()));

        m_pAboutAct = new QAction(tr("&About"), this);
        m_pAboutAct->setStatusTip(tr("Show the application's About box"));
        connect(m_pAboutAct, SIGNAL(triggered()), this, SLOT(about()));
    }

    void TentertainmentManagement::createMenus()
    {
        m_pFileMenu = menuBar()->addMenu(tr("&File"));
        m_pFileMenu->addAction(m_pSaveAct);
        m_pFileMenu->addAction(m_pPrintAct);
        m_pFileMenu->addSeparator();
        m_pFileMenu->addAction(m_pQuitAct);

        m_pEditMenu = menuBar()->addMenu(tr("&Edit"));
        m_pEditMenu->addAction(m_pUndoAct);

        m_pViewMenu = menuBar()->addMenu(tr("&View"));

        menuBar()->addSeparator();

        m_pHelpMenu = menuBar()->addMenu(tr("&Help"));
        m_pHelpMenu->addAction(m_pAboutAct);
    }

    void TentertainmentManagement::createToolBars()
    {
        m_pFileToolBar = addToolBar(tr("File"));
        m_pFileToolBar->addAction(m_pSaveAct);
        m_pFileToolBar->addAction(m_pPrintAct);

        m_pEditToolBar = addToolBar(tr("Edit"));
        m_pEditToolBar->addAction(m_pUndoAct);
    }

    void TentertainmentManagement::createStatusBar()
    {
        statusBar()->showMessage(tr("Ready"));
    }

    void TentertainmentManagement::createDockWindows()
    {
        if (!m_pDockWindow)
        {
            m_pDockWindow = new QDockWidget(tr("Outliner"), this);
        }

        createTreeView();

        m_pDockWindow->setWidget(m_pOutlinerTreeView);
        addDockWidget(Qt::LeftDockWidgetArea, m_pDockWindow);
        m_pViewMenu->addAction(m_pDockWindow->toggleViewAction());

    }

    void TentertainmentManagement::createStackedWidget()
    {
        m_pStackedWidget = new QStackedWidget(this);
        m_pStackedWidget->insertWidget(PANEL_WELCOME, new TwelcomePanel());
        m_pStackedWidget->insertWidget(PANEL_ASSET_SETUP, new TassetSetupPanel());
        m_pStackedWidget->insertWidget(PANEL_MACHINE_FUNC_SETUP, new TmachineFuncSetupPanel());
        m_pStackedWidget->insertWidget(PANEL_ADMIN_SETUP, new TadminSetupPanel());
        m_pStackedWidget->insertWidget(PANEL_MACHINE_GROUP_REPORT, new TmachineGroupReportPanel());
        m_pStackedWidget->insertWidget(PANEL_INVENTORY_REPORT, new TinventoryReportPanel());
        m_pStackedWidget->insertWidget(PANEL_MACHINE_GROUP_DIFFERENCE, new TmachineGroupDifferenceReportPanel());
        m_pStackedWidget->insertWidget(PANEL_WARNING_SYSTEM, new TwarningSystemPanel());

        setCentralWidget(m_pStackedWidget);
    }

    void TentertainmentManagement::createTreeView()
    {
        Q_ASSERT(m_pDockWindow);
        m_pOutlinerTreeView = new ToutlinerTreeView(this);
    }


}
