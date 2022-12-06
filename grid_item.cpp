#include <QPainter>
#include <QPen>

#include "grid_item.h"

GridItem::GridItem(QRectF bounding_rect, QSize grid_size)
    : m_bounding_rect(bounding_rect)
    , m_grid_size(grid_size)
{
}

void GridItem::paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget)
{
    painter->setPen(QPen(Qt::gray, 1));

    // draw horizontal lines
    for (int i = 0; i <= m_bounding_rect.height(); i += m_grid_size.width()) {
        painter->drawLine(QLine(0, i, m_bounding_rect.width(), i));
    }

    // draw vertical lines
    for (int i = 0; i <= m_bounding_rect.width(); i += m_grid_size.height()) {
        painter->drawLine(QLine(i, 0, i, m_bounding_rect.height()));
    }
}
