#include "neoserver.h"
#include <QApplication>

//#include<QDir>
//#include<QSound>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    neoserver w;
    w.show();

    return a.exec();
}
