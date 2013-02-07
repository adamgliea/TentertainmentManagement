#ifndef TINVENTORYREPORTPANEL_H
#define TINVENTORYREPORTPANEL_H
#include <QtGui/QWidget>
#include <QtGui/QCalendarWidget>
#include <QtCore/QDate>

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
        Q_OBJECT
    public:
        TinventoryReportPanel(QWidget* parent = NULL);
        ~TinventoryReportPanel(void);

        virtual void                            doInitPanel(const TECategory& category, unsigned int itemData);
        virtual void                            doHack();

    private:
        void                                    insertRecordToTable(const int rowIndex, const DBInventoryReportInfo& info);
        int                                     computeTotalAddCoins(const QString& data);
        int                                     computeTotalClearCoins(const QString& data);
        int                                     computeTotalBenifit(const QString& addCoinData, const QString& clearCoinData);
    private slots:
        void                                    onBeginDateClicked();
        void                                    onEndDateClicked();
        void                                    onBeginDateActived(const QDate& date);
        void                                    onEndDateActived(const QDate& date);
        void                                    onSearchClicked();

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

        unsigned int                            m_uiCurrentOperatingId;

        QCalendarWidget*                        m_pBeginDateCalendar;
        QCalendarWidget*                        m_pEndDateCalendar;

        QDate                                   m_selectedBeginDate;
        QDate                                   m_selectedEndDate;

    };

}
#endif  // TINVENTORYREPORTPANEL_H

