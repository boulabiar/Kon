#ifndef DEVICEGRAPHICWIDGET_H
#define DEVICEGRAPHICWIDGET_H

#include <QGraphicsWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QSvgRenderer>
#include <QGraphicsSvgItem>
#include <QPen>

class DeviceGraphicWidget : public QGraphicsView
{
    Q_OBJECT

public:
    DeviceGraphicWidget();
    QSvgRenderer *renderer;
};

#endif // DEVICEGRAPHICWIDGET_H
