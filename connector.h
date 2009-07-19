#ifndef CONNECTOR_H
#define CONNECTOR_H

#include <QWidget>
#include <QGraphicsSvgItem>
#include <QGraphicsLineItem>
#include <QGraphicsPathItem>
#include <QGraphicsScene>
#include <QPainterPath>
#include <QPainter>
#include "subdevice.h"

class Connector : public QGraphicsPathItem
{
public:
    Connector();
    Connector(SubDevice*, SubDevice*, QGraphicsScene*);
    SubDevice *getInnerDevice() const
        { return innerDevice; }
    SubDevice *getOuterDevice() const
        { return outerDevice; }

public slots:
    void updatePosition();

private:
    QPainterPath path;
    QPoint p1,p2;
    SubDevice *innerDevice;
    SubDevice *outerDevice;
    //QGraphicsPathItem *pathItem;

};

#endif // CONNECTOR_H
