#ifndef TMACHINEFUNCSETUPPANEL_H
#define TMACHINEFUNCSETUPPANEL_H
#include <QtGui/QWidget>
#include "ui_TmachineFuncSetupViewItemTable.h"
#include "ui_TmachineFuncSetupViewItemAdd.h"

namespace YR2K {

    class TmachineFuncSetupPanel : public QWidget
    {
    public:
        TmachineFuncSetupPanel(QWidget* parent = NULL);
        ~TmachineFuncSetupPanel(void);

    private:
        Ui::TmachineFuncSetupViewItemTable*           m_pMachineFuncSetupTable;
        Ui::TmachineFuncSetupViewItemAdd*       m_pMachineFuncSetupAddWidget;
    };

}
#endif  // TMACHINEFUNCSETUPPANEL_H

