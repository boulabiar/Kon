#include <QtGui/QApplication>
#include "devicegraphicwidget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DeviceGraphicWidget w;
    w.show();
    return a.exec();
}
