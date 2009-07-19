#include "connector.h"

Connector::Connector()
{
}

Connector::Connector(SubDevice *sd1, SubDevice *sd2, QGraphicsScene *scene)
{
    /*QGraphicsLineItem *l1 = new QGraphicsLineItem
                            (sd1->pos().x()+128, sd1->pos().y()+8,
                                                    sd2->pos().x(), sd2->pos().y()+8, this, scene);
    l1->setPen(QPen(Qt::blue, 4, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));*/

    path.moveTo(QPointF(0.0, 0.0));

    innerDevice=sd1;
    outerDevice=sd2;
    //pathItem= new QGraphicsPathItem(this, scene);
    updatePosition();
}

void Connector::updatePosition()
{

    p1.setX(innerDevice->pos().x()+128);
    p1.setY(innerDevice->pos().y()+8);
    p2.setX(outerDevice->pos().x());
    p2.setY(outerDevice->pos().y()+8);

    path.moveTo(p1.x(), p1.y());
    path.cubicTo((p1.x()+p2.x())/4, p1.y(),  (p1.x()+p2.x())/4, p2.y(),  p2.x(), p2.y());
    //if (pathItem!=0)
    //delete pathItem;
    //pathItem = new QGraphicsPathItem(path, this, this->scene());
    setPath(path);
    setPen(QPen(Qt::blue, 4, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    //this->scene()->addPath(&pathItem);
    //scene->addPath(pathItem);
    //this->pos().x()=
    //delete pathItem;
}
