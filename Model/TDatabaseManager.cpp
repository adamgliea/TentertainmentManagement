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

#pragma mark -- Private Functions

	void TDatabaseManager::disconnect() {
		if (this->m_conn != NULL) {
			this->m_conn->disconnect();
			this->m_conn = NULL;
		}
	}
}

