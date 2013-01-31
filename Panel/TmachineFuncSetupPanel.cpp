#include "TmachineFuncSetupPanel.h"
#include <QtGui/QGridLayout>
#include <QtGui/QVBoxLayout>
#include <QtGui/QPushButton>

namespace YR2K {

    //---------------------------------------------------------------------
    TmachineFuncSetupPanel::TmachineFuncSetupPanel(QWidget* parent /*= NULL*/)
        : TpanelBase(parent)
    {
        m_pMachineFuncSetupTable = new Ui::TmachineFuncSetupViewItemTable();

        QWidget* table = new QWidget(this);
        m_pMachineFuncSetupTable->setupUi(table);

        QGridLayout* mainLayout = new QGridLayout(this);
        mainLayout->addWidget(table);

        int w = table->width();
        int h = table->height();

        setFixedSize(w, h);
        setLayout(mainLayout);
    }

    //---------------------------------------------------------------------
    TmachineFuncSetupPanel::~TmachineFuncSetupPanel(void)
    {
    }

    //---------------------------------------------------------------------
    void TmachineFuncSetupPanel::doInitPanel(const TECategory& category)
    {

    }

}
