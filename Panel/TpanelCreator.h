#ifndef TPANELCREATOR_H
#define TPANELCREATOR_H

#include "TcommonTypes.h"

namespace YR2K {

    class TpanelBase;

    class TpanelCreator
    {
    public:
        static TpanelCreator* getInstance();
        static void           destroyInstance();


        TpanelBase*           create(const TEPanelIndex& type);

        ~TpanelCreator(void);

    private:
        TpanelCreator(void);


        static TpanelCreator*       m_spCreator;
    };
}



#endif  // TPANELCREATOR_H

