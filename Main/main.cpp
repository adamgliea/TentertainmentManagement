#include "TentertainmentManagement.h"
#include <QtGui/QApplication>
#include <QtCore/QTextCodec>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec::setCodecForTr(QTextCodec::codecForName("GBK"));
    YR2K::TentertainmentManagement window;
    window.showMaximized();
    return a.exec();
}
