#ifndef TDATABASEMANAGER_H
#define TDATABASEMANAGER_H

#include <vector>

#include <mysql++/mysql++.h>

#include "TcommonTypes.h"
#include "Singleton.h"

namespace YR2K {
	struct DBAssetsInfo;

	class TDatabaseManager : public Singleton<TDatabaseManager> {
	public:
		TDatabaseManager();
		~TDatabaseManager();

		bool connect(const char *db, const char *server, const char *user, const char *password, unsigned int port);

		// return id of asset in database
		int addAsset(const struct DBAssetsInfo &info);
		bool removeAsset(const unsigned int assetId);
		bool findAssetsWithAssetType(const enum TECategory assetType, std::vector<struct DBAssetsInfo> &assets);
		struct DBAssetsInfo* findAssetWithAssetId(const unsigned int assetId);

		int addMachine(const struct DBMachineBaseInfo &info, const unsigned int clearPointCycle);
		bool removeMachine(const unsigned int machineId);
		bool findMachineBaseInfoWithAssetType(const enum TECategory assetType, std::vector<struct DBMachineBaseInfo> &machines);
		bool findMachineDetailInfoWithAssetType(const enum TECategory assetType, std::vector<struct DBMachineDetailInfo> &machines);
		bool updateMachineDetailInfo(const struct DBMachineDetailInfo &detailInfo);

		unsigned int getInventoryPoint();
		bool updateInventoryPoint(const unsigned int point);

		int addInventoryReport(const struct DBInventoryReportInfo &info);
		bool findInventoryReportWithMachineId(const unsigned int machineId, struct DBInventoryReportInfo &outInfo);
		bool findInventoryReportWithTimerange(const unsigned int machineId, 
											  const unsigned int startTime, 
											  const unsigned int endTime, 
											  std::vector<struct DBInventoryReportInfo> &infos);

	private:
		void disconnect();

	private:
		mysqlpp::Connection *m_conn;
	};
}

#endif
