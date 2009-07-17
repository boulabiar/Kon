#include "devicegraphicwidget.h"
#include "subdevice.h"
#include "connector.h"

DeviceGraphicWidget::DeviceGraphicWidget()
{
    QGraphicsScene *scene = new QGraphicsScene(this);
    scene->setItemIndexMethod(QGraphicsScene::NoIndex);
    scene->setSceneRect(-200, -200, 400, 400);
    setScene(scene);
    //setViewportUpdateMode(BoundingRectViewportUpdate);

    QPixmap m_tile = QPixmap(100, 100);
    m_tile.fill(Qt::white);
    QPainter pt(&m_tile);
    QColor color(220, 220, 220);
    pt.fillRect(0, 0, 50, 50, color);
    pt.fillRect(50, 50, 50, 50, color);
    pt.end();
    scene->setBackgroundBrush(m_tile);
    setCacheMode(CacheBackground);

    setRenderHint(QPainter::Antialiasing);
    setTransformationAnchor(AnchorUnderMouse);
    setResizeAnchor(AnchorViewCenter);
    setMinimumSize(480, 480);

    renderer = new QSvgRenderer( QString("./deviceElements.svg"), scene );

    //Node* node = new Node(renderer);
    SubDevice *subdevice1 = new SubDevice(renderer);
    subdevice1->setPos(-150.0, -10.0);
    scene->addItem(subdevice1);

    SubDevice *subdevice2 = new SubDevice(renderer);
    subdevice2->setPos(50.0, 50.0);
    scene->addItem(subdevice2);

    Connector *conn1 = new Connector(subdevice1, subdevice2, scene);

    //pen.setWidth(16);
    //conn1->setPen(pen);
    conn1->setZValue(1);

    scene->addItem(conn1);
    //qDebug("render");

}
