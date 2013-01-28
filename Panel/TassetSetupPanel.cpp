#include "TassetSetupPanel.h"
#include <QtGui/QGridLayout>
#include <QtGui/QVBoxLayout>
#include <QtGui/QDialogButtonBox>

namespace YR2K {

    //---------------------------------------------------------------------
    TassetSetupPanel::TassetSetupPanel(QWidget* parent /*= NULL*/)
        : TpanelBase(parent)
    {
        m_eType = PANEL_ASSET_SETUP;

        m_pAssetSetupTable = new Ui::TassetSetupViewItemTable();
        m_pAssetSetupTable->setupUi(this);
        m_pPushButton = new QPushButton(this);
        m_pPushButton->setText(tr("添加新大类"));

        QGridLayout* mainLayout = new QGridLayout(this);

        QSpacerItem *horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);
        mainLayout->addWidget(m_pPushButton, 0, 0);
        mainLayout->addItem(horizontalSpacer, 0, 1);
        mainLayout->addLayout(m_pAssetSetupTable->mainLayout, 1, 0, 1, 2);

        setLayout(mainLayout);

        // connect signals and slots.
        //
//         connect(m_pAssetSetupAddWidget->m_buttonBox, SIGNAL(accepted()), this, SLOT(onAddWidgetConfirm()));

    }

    //---------------------------------------------------------------------
    TassetSetupPanel::~TassetSetupPanel(void)
    {
    }

    //---------------------------------------------------------------------
    void TassetSetupPanel::onAddWidgetConfirm( void )
    {

    }

    //---------------------------------------------------------------------
    DBAssetsInfo TassetSetupPanel::getInfo( void ) const
    {
        DBAssetsInfo info;


        return info;
    }

}
