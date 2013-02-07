#ifndef DATABASERESULTMODEL_H
#define DATABASERESULTMODEL_H

#include <string>
#include "TcommonTypes.h"

namespace YR2K {

	enum MachineType_t {
		MachineType_Coin = 0,
		MachineType_Card,
		MachineType_Shuffle,
	};

	struct DBAssetsInfo {
		unsigned int assetId;
		unsigned int assetType;					//for enum TECategory
		unsigned int clearCoinCycle;
		int clearCoinMargin;
		int liabilities;
		unsigned int allowLossDays;
		unsigned int statmentType;				//for enum TEStatementCategory
	};

	struct DBMachineBaseInfo {
		unsigned int machineId;
		unsigned int assetType;					//for enum TECategory
		std::string factoryName;
		std::string factoryPhoneNumber;
		std::string location;
		bool businessConditions;
		std::string remark;
	};

	struct DBMachineDetailInfo {
		unsigned int machineId;
		unsigned int assetType;					//for enum TECategory
		unsigned int machineType;				//for enum MachineType_t
		float cashRatio;
		float coinRatio;
		float mainProbability;
		float probabilityRange;
		unsigned int maxPoints;
		unsigned int minPoints;
		unsigned int markPoints;
		unsigned int drawPoints;
		unsigned int pushPointDays;
		unsigned int clearPointCycle;
	};

	struct DBInventoryReportInfo {
		unsigned int reportId;
		unsigned int machineId;
		std::string addPointString;
		std::string clearPointString;
		int opTime;
	};
}

#endif
