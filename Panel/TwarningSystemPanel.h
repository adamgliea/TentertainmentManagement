#ifndef TWARNINGSYSTEMPANEL_H
#define TWARNINGSYSTEMPANEL_H
#include <QtGui/QWidget>
#include "ui_TwarningSystemViewItemTable.h"
#include "ui_TwarningSystemViewItemContinuousLoseDetailTree.h"

namespace YR2K {

    class TwarningSystemPanel : public QWidget
    {
    public:
        TwarningSystemPanel(QWidget* parent = NULL);
        ~TwarningSystemPanel(void);

    private:
        Ui::TwarningSystemViewItemTable*        m_pWarningSystemViewItemTable;

        Ui::TwarningSystemViewItemContinuousLoseDetailTree* m_pWarningSystemViewItemContinuousLoseDetailTree;
    };
}
#endif  // TWARNINGSYSTEMPANEL_H

