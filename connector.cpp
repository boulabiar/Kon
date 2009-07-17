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
    QPainterPath *path = new QPainterPath(QPointF(0.0, 0.0));
    //path->cubicTo(50, 0,  50, 99,  99, 99);

    QPoint p1(sd1->pos().x()+128,sd1->pos().y()+8);
    QPoint p2(sd2->pos().x(),sd2->pos().y()+8);

    path->moveTo(p1.x(), p1.y());
    path->cubicTo((p1.x()+p2.x())/4, p1.y(),  (p1.x()+p2.x())/4, p2.y(),  p2.x(), p2.y());

    QGraphicsPathItem *pathItem = new QGraphicsPathItem(*path, this, scene);
    pathItem->setPen(QPen(Qt::blue, 4, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));


}

void Connector::updatePosition()
{
}
