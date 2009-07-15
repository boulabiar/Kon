#include "node.h"

Node::Node(QSvgRenderer* renderer)
{
    //setFlag( QGraphicsItem::ItemIsMovable );
    setElementId(QLatin1String("connFree"));
    setSharedRenderer(renderer);
}

Node::~Node()
{
}

