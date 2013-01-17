#include "TentertainmentManagement.h"
#include <QtGui/QApplication>
#include <QtCore/QTextCodec>
#include "ToutlinerTreeView.h"
#include "TmachineFuncSetupPanel.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec::setCodecForTr(QTextCodec::codecForName("GBK"));
    YR2K::TentertainmentManagement window;
    int w = 0;
    int h = 0;

//    window.showMaximized();
    window.show();

    YR2K::TmachineFuncSetupPanel xxx;
    xxx.show();
//     YR2K::ToutlinerTreeView node;
//     node.show();

    return a.exec();
}
