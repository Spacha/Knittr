#ifndef PATTERNSCENE_H
#define PATTERNSCENE_H

#include <QGraphicsScene>
#include <QObject>

class PatternScene : public QGraphicsScene
{
    Q_OBJECT
public:
    PatternScene(QWidget *parent = nullptr);

private:
    QWidget *m_parent;
};

#endif // PATTERNSCENE_H
