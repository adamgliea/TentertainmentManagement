#ifndef TPANELBASE_H
#define TPANELBASE_H

#include "TcommonTypes.h"
#include <QtGui/QWidget>

namespace YR2K {

    class TpanelBase : public QWidget
    {
    public:
        TpanelBase(QWidget* parent = NULL);
        virtual ~TpanelBase(void);

        TEPanelIndex        getType();
        void                initPanel(const TECategory& category, unsigned int itemData);


    protected:
        virtual void        doInitPanel(const TECategory& category, unsigned int itemData);

    protected:
        TEPanelIndex        m_eType;
    };

}

#endif  // TPANELBASE_H

