#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

// forward declarations
QT_BEGIN_NAMESPACE
class QSplitter;
class QHBoxLayout;
class QGraphicsView;
QT_END_NAMESPACE
class PatternScene;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow();
    ~MainWindow() = default;

private:
    void createToolbox();
    void createActions();
    void createMenus();
    void createToolbars();

    QWidget *m_toolbox;
    QGraphicsView *m_view;
    PatternScene *m_scene;
    QHBoxLayout *m_main_layout;
    QSplitter *m_splitter;
    QStatusBar *m_statusbar;
};
#endif // MAINWINDOW_H
