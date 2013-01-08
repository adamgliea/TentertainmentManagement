#ifndef DATABASERESULTMODEL_H
#define DATABASERESULTMODEL_H

#include "TcommonTypes.h"

namespace YR2K {

	struct DBAssetsInfo {
		unsigned int assetId;
		enum TECategory assetType;
		unsigned int clearCoinCycle;
		int clearCoinMargin;
		int liabilities;
		unsigned int allowLossDays
		enum TEStatementCategory statmentType;
	};

}

#endif
