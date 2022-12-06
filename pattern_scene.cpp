#include <QGraphicsRectItem>

#include "pattern_scene.h"
#include "grid_item.h"

PatternScene::PatternScene(QWidget *parent)
    : m_parent(parent)
{
    setBackgroundBrush(QColor::fromRgb(245, 245, 245));

    GridItem* grid = new GridItem(QRectF(0, 0, 1000, 1000), QSize(25, 25));
    addItem(grid);

    QGraphicsRectItem* rect = new QGraphicsRectItem();
    rect->setRect((width() - 100) / 2, (height() - 100) / 2, 100, 100);
    rect->setBrush(QBrush(Qt::red));
    rect->setPen(QPen(Qt::gray, 1));
    addItem(rect);
}
