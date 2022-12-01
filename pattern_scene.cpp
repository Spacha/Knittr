#include "pattern_scene.h"
#include "debug.h"

PatternScene::PatternScene(QWidget *parent)
    : m_parent(parent)
{
    dbgLn("Initialized");

    setBackgroundBrush(QColor::fromRgb(255, 0, 0));
}
