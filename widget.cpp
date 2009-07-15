#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent), ui(new Ui::Widget)
{
    ui->setupUi(this);
    //scene->parent(this);
    /*
    scene = new QGraphicsScene(this);
    scene->setSceneRect( -100.0, -100.0, 200.0, 200.0 );

    QPixmap m_tile = QPixmap(100, 100);
    m_tile.fill(Qt::white);
    QPainter pt(&m_tile);
    QColor color(220, 220, 220);
    pt.fillRect(0, 0, 50, 50, color);
    pt.fillRect(50, 50, 50, 50, color);
    pt.end();
    scene->setBackgroundBrush(m_tile);

    view = new QGraphicsView(scene);
    view->setRenderHints( QPainter::Antialiasing );
    view->show();*/

}

Widget::~Widget()
{
    delete ui;
}
