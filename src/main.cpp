#include "nju_campus.h"

#include <QApplication>
#pragma comment(lib, "user32.lib")

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    nju_campus w;
    w.show();
    return a.exec();
}