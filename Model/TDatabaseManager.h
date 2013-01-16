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

	private:
		void disconnect();

	private:
		mysqlpp::Connection *m_conn;
	};
}

#endif
