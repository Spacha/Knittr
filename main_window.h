#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

// forward declarations
QT_BEGIN_NAMESPACE
class QMenu;
class QAction;
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
    void create_toolbox();
    void create_actions();
    void create_menus();
    void create_toolbars();
    void about();

    QHBoxLayout *m_main_layout;
    QSplitter *m_splitter;
    QWidget *m_toolbox;
    QGraphicsView *m_view;
    PatternScene *m_scene;
    QStatusBar *m_statusbar;

    QAction *m_quit_action;
    QAction *m_about_action;

    QMenu *m_file_menu;
    QMenu *m_edit_menu;
    QMenu *m_help_menu;
};
#endif // MAINWINDOW_H
