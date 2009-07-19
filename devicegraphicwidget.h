#ifndef DEVICEGRAPHICWIDGET_H
#define DEVICEGRAPHICWIDGET_H

#include <QGraphicsWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QSvgRenderer>
#include <QGraphicsSvgItem>
#include <QPen>
#include "subdevice.h"
#include "connector.h"


class DeviceGraphicWidget : public QGraphicsView
{
    Q_OBJECT

public:
    DeviceGraphicWidget();
    QSvgRenderer *renderer;
    Connector *conn;

protected:
    //QVariant itemChange(GraphicsItemChange change, const QVariant &value);
    void mouseReleaseEvent ( QMouseEvent * e );

};

#endif // DEVICEGRAPHICWIDGET_H
