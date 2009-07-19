#ifndef SUBDEVICE_H
#define SUBDEVICE_H

#include <QGraphicsSvgItem>
#include <QSvgRenderer>
#include "node.h"

class SubDevice : public QGraphicsSvgItem
{
public:
    SubDevice(QSvgRenderer*);
    void mousePressEvent ( QGraphicsSceneMouseEvent * event );
    Node *nodeIn,*nodeOut;
    ~SubDevice();
protected:
//    QVariant itemChange(GraphicsItemChange change, const QVariant &value);

};

#endif // SUBDEVICE_H
