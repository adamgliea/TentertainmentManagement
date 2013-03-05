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
    QTextCodec::setCodecForTr(QTextCodec::codecForName("System"));
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("System"));
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("System"));

    bool connectRet = YR2K::TDatabaseManager::getInstance()->connect("test", "127.0.0.1", "root", "111111", 3306);

    QApplication a(argc, argv);
    YR2K::TentertainmentManagement window;
    window.show();

    return a.exec();
}
