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
        Q_OBJECT
    public:
        TassetSetupPanel(QWidget* parent = NULL);
        ~TassetSetupPanel(void);

        DBAssetsInfo                            getInfo(void) const;

    private slots:
        void                                    onAddButtonClicked();
        void                                    onConfirmAddNewRecord();
        void                                    onCancelAddNewRecord();

        void                                    onCustomContextMenuRequested(const QPoint& pos);
        void                                    onRemoveActionTriggered();

    protected:
        virtual void                            doInitPanel(const TECategory& category);

    private:
        void                                    destroyAddWidgetPanel();
        void                                    insertRecordToTable(const int rowIndex, const DBAssetsInfo& info);

        void                                    createActions(void);

    private:
        Ui::TassetSetupViewItemTable*           m_pAssetSetupTable;
        Ui::TassetSetupViewItemAddWidget*       m_pAssetSetupAddWidget;
        QPushButton*                            m_pPushButton;

        QWidget*                                m_pAddWidgetPanel;

        QModelIndex                             m_contextMenuTriggeredIndex;
        QMenu*                                  m_pContextMenu;
        QAction*                                m_pRemoveAction;

        std::vector<DBAssetsInfo>               m_vecAssetsFoundResult;
        TECategory                              m_eCurrentOperatingCategory;
    };
}
#endif  // TASSETSETUPPANEL_H

