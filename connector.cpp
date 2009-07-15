#include "connector.h"

Connector::Connector()
{
}

Connector::Connector(SubDevice *sd1, SubDevice *sd2, QGraphicsScene *scene)
{
    QGraphicsLineItem *l1 = new QGraphicsLineItem
                            (sd1->pos().x()+128, sd1->pos().y()+8,
                                                    sd2->pos().x(), sd2->pos().y()+8, this, scene);
    l1->setPen(QPen(Qt::blue, 4, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    QPainterPath p;
    p.moveTo(0, 0);
    p.cubicTo(99, 0,  50, 50,  99, 99);
    p.cubicTo(0, 99,  50, 50,  0, 0);
    QPainter painter(scene);
    painter.drawPath(path);

}

void Connector::updatePosition()
{
}
