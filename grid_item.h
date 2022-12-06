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
    void setColor(QColor color = Qt::gray);

private:
    void drawGridBitmap(QColor color);

    QRectF m_bounding_rect;
    QSize m_grid_cell_size;
    QPixmap m_pixmap;
};

#endif // GRIDITEM_H
