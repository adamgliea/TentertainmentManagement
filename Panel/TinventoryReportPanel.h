#ifndef TINVENTORYREPORTPANEL_H
#define TINVENTORYREPORTPANEL_H
#include <QtGui/QWidget>

#include "DatabaseResultModel.h"
#include "TpanelBase.h"
#include "ui_TsearchWidget.h"
#include "ui_TinventoryReportViewItemTable.h"



class QPushButton;
class QLabel;
class QLineEdit;

namespace YR2K {

    class TinventoryReportPanel : public TpanelBase
    {
    public:
        TinventoryReportPanel(QWidget* parent = NULL);
        ~TinventoryReportPanel(void);

        virtual void                            doInitPanel(const TECategory& category, unsigned int itemData);

    private:
        QPushButton*                            m_pAddNewRecordButton;
        QLabel*                                 m_pTotalInventoryLabel;
        QLineEdit*                              m_pTotalInventoryLineEdit;

        Ui::TinventoryReportViewItemTable*      m_pIinventoryReportViewItemTable;
        Ui::TsearchWidget*                      m_pSearchWidget;

        QModelIndex                             m_contextMenuTriggeredIndex;
        QMenu*                                  m_pContextMenu;
        QAction*                                m_pUpdateAction;

        std::vector<DBInventoryReportInfo>      m_vecInventoryReportInfoFoundResult;
        TECategory                              m_eCurrentOperatingCategory;

    };

}
#endif  // TINVENTORYREPORTPANEL_H

