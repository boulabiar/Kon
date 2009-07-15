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

private:

};

#endif // NODE_H
