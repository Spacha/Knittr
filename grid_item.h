#ifndef GRIDITEM_H
#define GRIDITEM_H

#include <QGraphicsItem>
#include <QObject>

class GridItem : public QGraphicsItem
{
public:
    GridItem(QRectF bounding_rect, QSize grid_size);

    QRectF boundingRect() const override { return m_bounding_rect; };
    void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget) override;

private:
    QRectF m_bounding_rect;
    QSize m_grid_size;
};

#endif // GRIDITEM_H
