#ifndef TDATABASEMANAGER_H
#define TDATABASEMANAGER_H

#include "TcommonTypes.h"

struct DBAssetsInfo;

class TDatabaseManager {
public:
	// return id of asset in database
	int addAsset(const struct DBAssetsInfo &info);
	bool removeAsset(const unsigned int assetId, const enum TECategory assetType);
	bool findAssetsWithAssetType(const enum TECategory assetType, std::vector<struct DBAssetsInfo> &assets);
};

#endif
