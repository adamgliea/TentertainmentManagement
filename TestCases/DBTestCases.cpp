#include "DBTestCases.h"
#include "DatabaseResultModel.h"

static int lastInsertAssetId = 0;
static int lastInsertMachineId = 0;

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

TEST_F(TDatabaseTest, addMachine) {
	YR2K::DBMachineBaseInfo insertInfo = {0};

	insertInfo.assetType = YR2K::CATEGORY_CABINET;
	insertInfo.factoryName = "test";
	insertInfo.factoryPhoneNumber = "123";
	insertInfo.location = "testlocation";
	insertInfo.businessConditions = true;
	insertInfo.remark = "test remark";

	int insertID = YR2K::TDatabaseManager::getInstance()->addMachine(insertInfo, 5);
	ASSERT_NE(insertID, -1);

	lastInsertMachineId = insertID;
}

TEST_F(TDatabaseTest, updateMachineDetailInfo) {
	YR2K::DBMachineDetailInfo updateInfo = {0};

	updateInfo.machineId = lastInsertMachineId;
	updateInfo.assetType = YR2K::CATEGORY_CABINET;
	updateInfo.machineType = YR2K::MachineType_Coin;
	updateInfo.cashRatio = 0.1;
	updateInfo.coinRatio = 0.1;
	updateInfo.mainProbability = 0.1;
	updateInfo.probabilityRange = 0.1;
	updateInfo.maxPoints = 100;
	updateInfo.minPoints = 10;
	updateInfo.markPoints = 10;
	updateInfo.drawPoints = 10;
	updateInfo.pushPointDays = 1;
	updateInfo.clearPointCycle = 5;

	bool ret = YR2K::TDatabaseManager::getInstance()->updateMachineDetailInfo(updateInfo);
	ASSERT_TRUE(ret);
}

TEST_F(TDatabaseTest, findMachineBaseInfoWithAssetType) {
	std::vector<struct YR2K::DBMachineBaseInfo> machines;

	bool findRet = YR2K::TDatabaseManager::getInstance()->findMachineBaseInfoWithAssetType(YR2K::CATEGORY_CABINET, machines);
	ASSERT_TRUE(findRet);
	ASSERT_TRUE(!machines.empty());
}

TEST_F(TDatabaseTest, findMachineDetailInfoWithAssetType) {
	std::vector<struct YR2K::DBMachineDetailInfo> machines;

	bool findRet = YR2K::TDatabaseManager::getInstance()->findMachineDetailInfoWithAssetType(YR2K::CATEGORY_CABINET, machines);
	ASSERT_TRUE(findRet);
	ASSERT_TRUE(!machines.empty());
}

TEST_F(TDatabaseTest, removeMachine) {
	bool removeRet = YR2K::TDatabaseManager::getInstance()->removeMachine(lastInsertMachineId);
	ASSERT_TRUE(removeRet);
}

TEST_F(TDatabaseTest, getInventoryPoint) {
	unsigned int inventoryPoint = YR2K::TDatabaseManager::getInstance()->getInventoryPoint();
	ASSERT_TRUE(inventoryPoint != 0);
}

TEST_F(TDatabaseTest, getInventoryPoint) {
	unsigned int inventoryPoint = YR2K::TDatabaseManager::getInstance()->getInventoryPoint();
	ASSERT_TRUE(inventoryPoint != 0);
}

