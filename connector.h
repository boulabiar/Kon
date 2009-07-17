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

class Connector : public QGraphicsLineItem
{
public:
    Connector();
    Connector(SubDevice*, SubDevice*, QGraphicsScene*);
public slots:
    void updatePosition();
};

#endif // CONNECTOR_H
