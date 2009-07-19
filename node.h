#ifndef NODE_H
#define NODE_H

#include <QSvgRenderer>
#include <QGraphicsSvgItem>


class Node : public QGraphicsSvgItem
{
public:
    Node(QSvgRenderer*);
    ~Node();

protected:
    //QVariant itemChange(GraphicsItemChange change, const QVariant &value);
private:

};

#endif // NODE_H
