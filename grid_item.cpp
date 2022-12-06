#include <QPainter>
#include <QPen>

#include "grid_item.h"

GridItem::GridItem(QRectF bounding_rect, QSize grid_cell_size)
    : m_bounding_rect(bounding_rect)
    , m_grid_cell_size(grid_cell_size)
{
    m_pixmap = QPixmap(bounding_rect.size().toSize());
    drawGridBitmap();
}

void GridItem::paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget)
{
    painter->drawPixmap(0, 0, m_pixmap);
}

void GridItem::setColor(QColor color)
{
    drawGridBitmap(color);
    update();
}

void GridItem::drawGridBitmap(QColor color)
{
    QPainter painter(&m_pixmap);

    m_pixmap.fill(Qt::white);
    painter.setPen(QPen(color, 1));

    // draw horizontal lines
    for (int i = 0; i <= m_bounding_rect.height(); i += m_grid_cell_size.width()) {
        painter.drawLine(QLine(0, i, m_bounding_rect.width(), i));
    }

    // draw vertical lines
    for (int i = 0; i <= m_bounding_rect.width(); i += m_grid_cell_size.height()) {
        painter.drawLine(QLine(i, 0, i, m_bounding_rect.height()));
    }
}
