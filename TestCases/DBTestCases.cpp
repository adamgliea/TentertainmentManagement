#include "DBTestCases.h"
#include "DatabaseResultModel.h"

static int lastInsertAssetId = 0;

TEST_F(TDatabaseTest, addAsset) {
	YR2K::DBAssetsInfo insertInfo = {0};

	insertInfo.assetType = YR2K::CATEGORY_CABINET;
	insertInfo.clearCoinCycle = 5;
	insertInfo.clearCoinMargin = -5;
	insertInfo.liabilities = -5000;
	insertInfo.allowLossDays = 3;
	insertInfo.statmentType = YR2K::STATMENT_CATEGORY_GAMING;

	int insertID = YR2K::TDatabaseManager::getInstance()->addAsset(insertInfo);
	ASSERT_NE(insertID, -1);

	lastInsertAssetId = insertID;
}

TEST_F(TDatabaseTest, findAssetsWithType) {
	std::vector<struct YR2K::DBAssetsInfo> assets;

	bool findRet = YR2K::TDatabaseManager::getInstance()->findAssetsWithAssetType(YR2K::CATEGORY_CABINET, assets);
	ASSERT_TRUE(findRet);
	ASSERT_TRUE(!assets.empty());
}

TEST_F(TDatabaseTest, findAssetWithId) {
	printf("last insert id:%d", lastInsertAssetId);

	struct YR2K::DBAssetsInfo *asset = NULL;

	asset = YR2K::TDatabaseManager::getInstance()->findAssetWithAssetId(lastInsertAssetId);
	ASSERT_TRUE(asset != NULL);

	delete asset;
	asset = NULL;
}

TEST_F(TDatabaseTest, removeAsset) {
	bool removeRet = YR2K::TDatabaseManager::getInstance()->removeAsset(lastInsertAssetId);
	ASSERT_TRUE(removeRet);
}





