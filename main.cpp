#include "serverdialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QDir::setCurrent(QApplication::applicationDirPath());
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));//set QString codec
    ServerDialog w;
    w.show();

    return a.exec();
}
