#ifndef DATABASERESULTMODEL_H
#define DATABASERESULTMODEL_H

#include "TcommonTypes.h"

namespace YR2K {

	struct DBAssetsInfo {
		unsigned int assetId;
		unsigned int assetType;					//for enum TECategory
		unsigned int clearCoinCycle;
		int clearCoinMargin;
		int liabilities;
		unsigned int allowLossDays;
		unsigned int statmentType;				//for enum TEStatementCategory
	};

}

#endif
