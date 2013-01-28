#ifndef TASSETSETUPPANEL_H
#define TASSETSETUPPANEL_H
#include <QtGui/QWidget>
#include <QtGui/QPushButton>
#include "ui_TassetSetupViewItemTable.h"
#include "ui_TassetSetupViewItemAddWidget.h"
#include "DatabaseResultModel.h"
#include "TpanelBase.h"


namespace YR2K {

    class TassetSetupPanel : public TpanelBase
    {
    public:
        TassetSetupPanel(QWidget* parent = NULL);
        ~TassetSetupPanel(void);


    private slots:
        void                                    onAddWidgetConfirm(void);
        DBAssetsInfo                            getInfo(void) const;

    private:
        Ui::TassetSetupViewItemTable*           m_pAssetSetupTable;
        Ui::TassetSetupViewItemAddWidget*       m_pAssetSetupAddWidget;
        QPushButton*                            m_pPushButton;
    };
}
#endif  // TASSETSETUPPANEL_H

