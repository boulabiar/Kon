#ifndef WIDGET_H
#define WIDGET_H

#include <QtGui/QWidget>
#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QSvgRenderer>
#include <QGraphicsSvgItem>

namespace Ui
{
    class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    QGraphicsScene *scene;
    QGraphicsView *view;
   ~Widget();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
