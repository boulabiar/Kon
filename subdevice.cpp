#include "subdevice.h"

SubDevice::SubDevice(QSvgRenderer *renderer)
{
    setFlag( QGraphicsItem::ItemIsMovable );
    //setFlag( QGraphicsItem::ItemIsSelectable, true );
    setElementId(QLatin1String("devSubComp"));
    setSharedRenderer(renderer);

    nodeIn  = new Node(renderer);
    nodeIn->setParentItem(this);
    nodeIn->setPos(-4.0, 4.0);

    nodeOut = new Node(renderer);
    nodeOut->setParentItem(this);
    nodeOut->setPos(124.0, 4.0);

}

void SubDevice::mousePressEvent ( QGraphicsSceneMouseEvent * event )
{

}

SubDevice::~SubDevice()
{
    delete nodeIn;
    delete nodeOut;
}

