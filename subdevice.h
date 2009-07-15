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
private:

};

#endif // SUBDEVICE_H
