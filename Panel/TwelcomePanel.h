#ifndef TWELCOMEPANEL_H
#define TWELCOMEPANEL_H
#include <QtGui/QWidget>
#include "TpanelBase.h"

namespace YR2K {

    class TwelcomePanel : public TpanelBase
    {
    public:
        TwelcomePanel(QWidget* parent = NULL);
        ~TwelcomePanel(void);
    };

}
#endif  // TWELCOMEPANEL_H

