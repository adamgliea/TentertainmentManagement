#ifndef TINVENTORYREPORTPANEL_H
#define TINVENTORYREPORTPANEL_H
#include <QtGui/QWidget>
#include <QtGui/QCalendarWidget>
#include <QtCore/QDate>
#include <QtGui/QTreeView>
#include "DatabaseResultModel.h"
#include "TpanelBase.h"
#include "ui_TsearchWidget.h"
#include "ui_TinventoryReportViewItemTable.h"

#include "TkeyValueTreeView.h"


class QPushButton;
class QLabel;
class QLineEdit;
class QStandardItemModel;

namespace YR2K {

    class TinventoryReportPanel : public TpanelBase
    {
        Q_OBJECT
    public:
        TinventoryReportPanel(QWidget* parent = NULL);
        ~TinventoryReportPanel(void);

        virtual void                            doInitPanel(const TECategory& category, unsigned int itemData);
        virtual void                            doHack();

    private:
        void                                    insertRecordToTable(const int rowIndex, const DBInventoryReportInfo& info);
        int                                     computeCoins(const QString& data);
        int                                     computeTotalBenifit(const QString& addCoinData, const QString& clearCoinData);
        int                                     computeTotalInventory(unsigned int machineId);
        void                                    updateTableByReportInfo(const DBInventoryReportInfo& reportInfo);
        void                                    updateTotalInventoryInfo();


    private slots:
        void                                    onBeginDateClicked();
        void                                    onEndDateClicked();
        void                                    onBeginDateActived(const QDate& date);
        void                                    onEndDateActived(const QDate& date);
        void                                    onSearchClicked();
        void                                    onCellClicked(int row, int column);
        void                                    onAddCoinUpdated();
        void                                    onClearCoinUpdated();

    private:
        QLabel*                                 m_pTotalInventoryLabel;
        QLineEdit*                              m_pTotalInventoryLineEdit;

        Ui::TinventoryReportViewItemTable*      m_pIinventoryReportViewItemTable;
        Ui::TsearchWidget*                      m_pSearchWidget;

        QModelIndex                             m_contextMenuTriggeredIndex;
        QMenu*                                  m_pContextMenu;
        QAction*                                m_pUpdateAction;

        std::vector<DBInventoryReportInfo>      m_vecInventoryReportInfoFoundResult;
        TECategory                              m_eCurrentOperatingCategory;

        unsigned int                            m_uiCurrentOperatingMachineId;
        unsigned int                            m_uiCurrentOperatingReportId;

        QCalendarWidget*                        m_pBeginDateCalendar;
        QCalendarWidget*                        m_pEndDateCalendar;

        QDate                                   m_selectedBeginDate;
        QDate                                   m_selectedEndDate;

        TkeyValueTreeView*                      m_addCoinTreeView;
        TkeyValueTreeView*                      m_clearCoinTreeView;
    };

}
#endif  // TINVENTORYREPORTPANEL_H

