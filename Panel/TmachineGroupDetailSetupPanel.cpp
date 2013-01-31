#include "TmachineGroupDetailSetupPanel.h"
#include <QtGui/QGridLayout>
#include <QtGui/QVBoxLayout>

namespace YR2K {

    //---------------------------------------------------------------------
    TmachineGroupDetailSetupPanel::TmachineGroupDetailSetupPanel(QWidget* parent /*= NULL*/)
        : TpanelBase(parent)
    {
        m_pMachineDetailSetupTable = new Ui::TmachineDetailSetupViewItemTable();
        m_pMachineDetailSetupTable->setupUi(this);
        m_pPushButton = new QPushButton(this);
        m_pPushButton->setText(tr("Ìí¼ÓÃ÷Ï¸"));

        QGridLayout* mainLayout = new QGridLayout(this);

        QSpacerItem *horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
        mainLayout->addWidget(m_pPushButton, 0, 0);
        mainLayout->addItem(horizontalSpacer, 0, 1);
        mainLayout->addLayout(m_pMachineDetailSetupTable->mainLayout, 1, 0, 1, 2);

        setLayout(mainLayout);

    }

    //---------------------------------------------------------------------
    TmachineGroupDetailSetupPanel::~TmachineGroupDetailSetupPanel(void)
    {
    }

    //---------------------------------------------------------------------
    void TmachineGroupDetailSetupPanel::doInitPanel(const TECategory& category)
    {

    }

}
