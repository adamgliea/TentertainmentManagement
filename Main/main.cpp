#include "TentertainmentManagement.h"
#include <QtGui/QApplication>
#include <QtCore/QTextCodec>
#include "ToutlinerTreeView.h"
#include "TmachineFuncSetupPanel.h"
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
    bool connectRet = YR2K::TDatabaseManager::getInstance()->connect("test", "127.0.0.1", "root", "111111", 3306);

    QApplication a(argc, argv);
    QTextCodec::setCodecForTr(QTextCodec::codecForName("GBK"));
    YR2K::TentertainmentManagement window;
    int w = 0;
    int h = 0;

    window.show();
//     window.show();

//     YR2K::TmachineFuncSetupPanel xxx;
//     xxx.show();
//     YR2K::ToutlinerTreeView node;
//     node.show();

    return a.exec();
}
