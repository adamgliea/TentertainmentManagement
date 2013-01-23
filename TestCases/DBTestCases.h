#ifndef DBTESTCASES_H
#define DBTESTCASES_H

#include <gtest/gtest.h>

#include "TDatabaseManager.h"

class TDatabaseTest : public ::testing::Test {
protected:
	virtual void SetUp() {
	}

	static void SetUpTestCase() {
		printf("enter SetUpTestCase\n");
		bool connectRet = YR2K::TDatabaseManager::getInstance()->connect("test", "127.0.0.1", "root", "", 3306);
		if (!connectRet) {
			printf("connect db fail\n");
		}
		printf("exit SetUpTestCase\n");
	}

	static void TearDownTestCase() {
	}
};

#endif
