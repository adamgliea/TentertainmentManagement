#include "TmachineGroupReportGiftPanel.h"

namespace YR2K {

    //---------------------------------------------------------------------
    TmachineGroupReportGiftPanel::TmachineGroupReportGiftPanel(QWidget* parent/* = NULL*/)
        : TpanelBase(parent)
    {
        QWidget* searchWidget = new QWidget(this);
        QWidget* table = new QWidget(this);
        m_pSearchWidget = new Ui::TsearchWidget();
        m_pMachineGroupReportGiftViewItemTable = new Ui::TmachineGroupReportGiftViewItemTable();

        m_pSearchWidget->setupUi(searchWidget);
        m_pMachineGroupReportGiftViewItemTable->setupUi(table);
        QVBoxLayout* mainLayout = new QVBoxLayout(this);
        mainLayout->addWidget(searchWidget);
        mainLayout->addWidget(table);

        int w = searchWidget->width() > table->width() ? searchWidget->width() : table->width();
        int h = searchWidget->height() + table->height();
        setLayout(mainLayout);

        setFixedSize(w, h);

    }

    //---------------------------------------------------------------------
    TmachineGroupReportGiftPanel::~TmachineGroupReportGiftPanel(void)
    {
    }

    //---------------------------------------------------------------------
    void TmachineGroupReportGiftPanel::doInitPanel(const TECategory& category)
    {

    }

}
