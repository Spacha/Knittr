#ifndef PATTERNSCENE_H
#define PATTERNSCENE_H

#include <QGraphicsScene>
#include <QObject>

#include "grid_item.h"

class PatternScene : public QGraphicsScene
{
    Q_OBJECT
public:
    PatternScene(QWidget *parent = nullptr);

    void setGridColor(QColor color);

private:
    QWidget* m_parent;
    GridItem* m_grid;
};

#endif // PATTERNSCENE_H
