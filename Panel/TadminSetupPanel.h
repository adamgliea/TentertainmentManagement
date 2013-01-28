#ifndef TADMINSETUPPANEL_H
#define TADMINSETUPPANEL_H
#include <QtGui/QWidget>
#include "TpanelBase.h"

namespace YR2K {
    class TadminSetupPanel : public TpanelBase
    {
    public:
        TadminSetupPanel(QWidget* parent = NULL);
        ~TadminSetupPanel(void);
    };
}


#endif  // TADMINSETUPPANEL_H

