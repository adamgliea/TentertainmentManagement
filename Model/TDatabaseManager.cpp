#include "TDatabaseManager.h"
#include "DatabaseResultModel.h"

namespace YR2K {
	TDatabaseManager::TDatabaseManager() :
	m_conn(NULL) {

	}

	TDatabaseManager::~TDatabaseManager() {
		this->disconnect();
	}

	bool TDatabaseManager::connect(const char *db, const char *server, const char *user, const char *password, unsigned int port) {
		this->disconnect();

		this->m_conn = new mysqlpp::Connection(false);

		return this->m_conn->connect(db, server, user, password, port);
	}

	int TDatabaseManager::addAsset(const struct DBAssetsInfo &info) {
		int ret = -1;

		mysqlpp::Query query = this->m_conn->query();
		char queryBuffer[256] = {0};
		snprintf(queryBuffer, 256, 
				 "INSERT INTO asset(assetType, statementType, chingCoinsCycle, chingCoinsDiff, liabilities, lossDays) VALUES(%d, %d, %d, %d, %d, %d);",
				 info.assetType, info.statmentType, info.clearCoinCycle, info.clearCoinMargin, info.liabilities, info.allowLossDays);

		mysqlpp::SimpleResult queryRet = query.execute(queryBuffer, 256);
		if (queryRet) {
			printf("insert asset ok\n");
			ret = queryRet.insert_id();
		}
		else {
			printf("insert asset error:%s\n", this->m_conn->error());
		}

		return ret;
	}

	bool TDatabaseManager::removeAsset(const unsigned int assetId) {
		mysqlpp::Query query = this->m_conn->query();
		char queryBuffer[256] = {0};
		snprintf(queryBuffer, 256, "DELETE FROM asset WHERE assetId = %u;", assetId);

		bool ret = query.exec(queryBuffer);
		if (!ret) {
			printf("delete asset error:%s\n", this->m_conn->error());
		}

		return ret;
	}

	bool TDatabaseManager::findAssetsWithAssetType(const enum TECategory assetType, std::vector<struct DBAssetsInfo> &assets) {
		bool ret = false;

		mysqlpp::Query query = this->m_conn->query();
		char queryBuffer[256] = {0};
		snprintf(queryBuffer, 256, "SELECT * FROM asset WHERE assetType=%d;", assetType);

		mysqlpp::StoreQueryResult res = query.store(queryBuffer);
		if (res) {
			int i = 0;
			for (; i < res.num_rows(); ++i) {
				struct DBAssetsInfo info = {0};

				info.assetId = res[i]["assetId"];
				info.assetType = res[i]["assetType"];
				info.clearCoinCycle = res[i]["chingCoinsCycle"];
				info.clearCoinMargin = res[i]["chingCoinsDiff"];
				info.liabilities = res[i]["liabilities"];
				info.allowLossDays = res[i]["lossDays"];
				info.statmentType = res[i]["statementType"];

				assets.push_back(info);
			}

			ret = true;
		}
		else {
			printf("select assets with type error:%s\n", this->m_conn->error());
		}

		return ret;
	}

	struct DBAssetsInfo* TDatabaseManager::findAssetWithAssetId(const unsigned int assetId) {
		struct DBAssetsInfo *ret = NULL;

		mysqlpp::Query query = this->m_conn->query();
		char queryBuffer[256] = {0};
		snprintf(queryBuffer, 256, "SELECT * FROM asset WHERE assetId=%u;", assetId);

		mysqlpp::StoreQueryResult res = query.store(queryBuffer);
		if (res) {
			size_t i = 0;
			for (; i < res.num_rows(); ++i) {
				ret = new struct DBAssetsInfo; 

				ret->assetId = res[i]["assetId"];
				ret->assetType = res[i]["assetType"];
				ret->clearCoinCycle = res[i]["chingCoinsCycle"];
				ret->clearCoinMargin = res[i]["chingCoinsDiff"];
				ret->liabilities = res[i]["liabilities"];
				ret->allowLossDays = res[i]["lossDays"];
				ret->statmentType = res[i]["statementType"];
			}
		}
		else {
			printf("select asset with id error:%s\n", this->m_conn->error());
		}

		return ret;
	}

	int TDatabaseManager::addMachine(const struct DBMachineBaseInfo &info, const unsigned int clearPointCycle) {
		int ret = -1;

		mysqlpp::Query query = this->m_conn->query();
		char queryBuffer[256] = {0};
		snprintf(queryBuffer, 256, 
				 "INSERT INTO machine(assetType, factoryName, factoryPhoneNumber, location, businessConditions, remark, clearPointCycle) VALUES(%d, \'%s\', \'%s\', \'%s\', %d, \'%s\', %d);",
				 info.assetType, info.factoryName.c_str(), info.factoryPhoneNumber.c_str(), info.location.c_str(), info.businessConditions, info.remark.c_str(), clearPointCycle);

		mysqlpp::SimpleResult queryRet = query.execute(queryBuffer, 256);
		if (queryRet) {
			printf("insert machine ok\n");
			ret = queryRet.insert_id();
		}
		else {
			printf("insert machine error:%s\n", this->m_conn->error());
		}

		return ret;
	}

		
	bool TDatabaseManager::removeMachine(const unsigned int machineId) {
		mysqlpp::Query query = this->m_conn->query();
		char queryBuffer[256] = {0};
		snprintf(queryBuffer, 256, "DELETE FROM machine WHERE machineId = %u;", machineId);

		bool ret = query.exec(queryBuffer);
		if (!ret) {
			printf("delete matchine error:%s\n", this->m_conn->error());
		}

		return ret;
	}
		
	bool TDatabaseManager::findMachineBaseInfoWithAssetType(const enum TECategory assetType, std::vector<struct DBMachineBaseInfo> &machines) {
		bool ret = false;

		mysqlpp::Query query = this->m_conn->query();
		char queryBuffer[512] = {0};
		snprintf(queryBuffer, 512, "SELECT machineId,assetType,factoryName,factoryPhoneNumber,location,businessConditions,remark FROM machine WHERE assetType=%d;", assetType);

		mysqlpp::StoreQueryResult res = query.store(queryBuffer);
		if (res) {
			int i = 0;
			for (; i < res.num_rows(); ++i) {
				struct DBMachineBaseInfo info = {0};

				info.machineId = res[i]["machineId"];
				info.assetType = res[i]["assetType"];
				info.factoryName = std::string(res[i]["factoryName"]);
				info.factoryPhoneNumber = std::string(res[i]["factoryPhoneNumber"]);
				info.location = std::string(res[i]["location"]);
				info.businessConditions = res[i]["businessConditions"];
				info.remark = std::string(res[i]["remark"]);

				machines.push_back(info);
			}

			ret = true;
		}
		else {
			printf("select machines with type error:%s\n", this->m_conn->error());
		}

		return ret;
	}

	bool TDatabaseManager::findMachineDetailInfoWithAssetType(const enum TECategory assetType, std::vector<struct DBMachineDetailInfo> &machines) {
		bool ret = false;

		mysqlpp::Query query = this->m_conn->query();
		char queryBuffer[512] = {0};
		snprintf(queryBuffer, 512, "SELECT machineId,assetType,machineType,cashRatio,coinRatio,mainProbability,probabilityRange,maxPoints,minPoints,markPoints,drawPoints,pushPointDays,clearPointCycle FROM machine WHERE assetType=%d;", assetType);

		mysqlpp::StoreQueryResult res = query.store(queryBuffer);
		if (res) {
			int i = 0;
			for (; i < res.num_rows(); ++i) {
				struct DBMachineDetailInfo info = {0};

				info.machineId = res[i]["machineId"];
				info.assetType = res[i]["assetType"];
				info.machineType = res[i]["machineType"];
				info.cashRatio = res[i]["cashRatio"];
				info.coinRatio = res[i]["coinRatio"];
				info.mainProbability = res[i]["mainProbability"];
				info.probabilityRange = res[i]["probabilityRange"];
				info.maxPoints = res[i]["maxPoints"];
				info.minPoints = res[i]["minPoints"];
				info.markPoints = res[i]["markPoints"];
				info.drawPoints = res[i]["drawPoints"];
				info.pushPointDays = res[i]["pushPointDays"];
				info.clearPointCycle = res[i]["clearPointCycle"];

				machines.push_back(info);
			}

			ret = true;
		}
		else {
			printf("select machines with type error:%s\n", this->m_conn->error());
		}

		return ret;
	}
		
	bool TDatabaseManager::updateMachineDetailInfo(const struct DBMachineDetailInfo &detailInfo) {
		mysqlpp::Query query = this->m_conn->query();
		char queryBuffer[512] = {0};
		snprintf(queryBuffer, 512, "UPDATE machine SET machineType=%d, cashRatio=%f, coinRatio=%f, mainProbability=%f, probabilityRange=%f, maxPoints=%d, minPoints=%d, markPoints=%d, drawPoints=%d, pushPointDays=%d, clearPointCycle=%d WHERE machineId=%d;", 
									detailInfo.machineType, detailInfo.cashRatio, detailInfo.coinRatio, detailInfo.mainProbability, detailInfo.probabilityRange, detailInfo.maxPoints, detailInfo.minPoints, detailInfo.markPoints, detailInfo.drawPoints, detailInfo.pushPointDays, detailInfo.clearPointCycle, detailInfo.machineId);

		bool ret = query.exec(queryBuffer);
		if (!ret) {
			printf("update matchine detail info error:%s\n", this->m_conn->error());
		}

		return ret;
	}

#pragma mark -- Private Functions

	void TDatabaseManager::disconnect() {
		if (this->m_conn != NULL) {
			this->m_conn->disconnect();
			this->m_conn = NULL;
		}
	}
}

