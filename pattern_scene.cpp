#include <QGraphicsRectItem>

#include "pattern_scene.h"
#include "grid_item.h"

PatternScene::PatternScene(QWidget *parent)
    : m_parent(parent)
{
    setBackgroundBrush(QColor::fromRgb(245, 245, 245));

    m_grid = new GridItem(QRectF(0, 0, 1000, 1000), QSize(25, 25));
    addItem(m_grid);

    QGraphicsRectItem* rect = new QGraphicsRectItem();
    rect->setRect((width() - 100) / 2, (height() - 100) / 2, 100, 100);
    rect->setBrush(QBrush(Qt::red));
    rect->setPen(QPen(Qt::black, 1));
    addItem(rect);
}


void PatternScene::setGridColor(QColor color)
{
    m_grid->setColor(color);
}
