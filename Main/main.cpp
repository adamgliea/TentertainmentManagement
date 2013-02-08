#include "TentertainmentManagement.h"
#include <QtGui/QApplication>
#include <QtCore/QTextCodec>
#include "ToutlinerTreeView.h"
#include "TinventoryReportPanel.h"
#include "TassetSetupPanel.h"
#include "TDatabaseManager.h"

// #include <gtest/gtest.h>

int runModelTestCases()
{
//     return RUN_ALL_TESTS();
    return 0;
}

int main(int argc, char *argv[])
{
// 	testing::InitGoogleTest(&argc, argv);
// 	runModelTestCases();
    QTextCodec::setCodecForTr(QTextCodec::codecForName("GBK"));
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("GBK"));
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("GBK"));

    bool connectRet = YR2K::TDatabaseManager::getInstance()->connect("test", "127.0.0.1", "root", "111111", 3306);

    QApplication a(argc, argv);
    YR2K::TentertainmentManagement window;
    window.show();

    return a.exec();
}
