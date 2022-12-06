#include <QtWidgets>

#include "main_window.h"
#include "pattern_scene.h"

MainWindow::MainWindow()
{
    create_actions();
    create_menus();
    //create_toolbars();
    //create_toolbox();

    // central_widget
    // -m_main_layout
    // --m_splitter
    // ---m_toolbox
    // ---m_view
    // ----(m_scene)

    m_main_layout = new QHBoxLayout;

    // initialize central widget
    auto *central_widget = new QWidget(this);
    central_widget->setLayout(m_main_layout);
    setCentralWidget(central_widget);

    auto *m_splitter = new QSplitter(central_widget);
    m_splitter->setOrientation(Qt::Horizontal);

    m_main_layout->addWidget(m_splitter);

    // initialize toolbox
    m_toolbox = new QWidget;
    m_toolbox->setMinimumWidth(200);
    m_toolbox->setMaximumWidth(600);
    auto *toolbox_layout = new QVBoxLayout(m_toolbox);
    toolbox_layout->setAlignment(Qt::AlignTop);

    // add a test label
    auto *test_label = new QLabel(m_toolbox);
    test_label->setText("Test label");
    toolbox_layout->addWidget(test_label);

    m_splitter->addWidget(m_toolbox);

    // initialize pattern scene
    m_scene = new PatternScene(this);
    m_scene->setSceneRect(QRectF(0, 0, 1000, 1000));

    m_view = new QGraphicsView(m_scene);
    m_splitter->addWidget(m_view);

    // initialize status bar
    m_statusbar = new QStatusBar(this);
    setStatusBar(m_statusbar);

    // initialize window
    setUnifiedTitleAndToolBarOnMac(true);
    setWindowTitle(tr("Knittr"));
}

void MainWindow::create_actions()
{
    m_quit_action = new QAction(tr("E&xit"), this);
    m_quit_action->setShortcuts(QKeySequence::Quit);
    connect(m_quit_action, &QAction::triggered, this, &MainWindow::close);

    m_about_action = new QAction(tr("&About Knittr"), this);
    connect(m_about_action, &QAction::triggered, this, &MainWindow::about);
}

void MainWindow::create_menus()
{
    m_file_menu = menuBar()->addMenu(tr("&File"));
    m_file_menu->addAction(m_quit_action);

    m_edit_menu = menuBar()->addMenu(tr("&Edit"));

    m_help_menu = menuBar()->addMenu(tr("&Help"));
    m_help_menu->addAction(m_about_action);
}

void MainWindow::create_toolbars()
{

}

void MainWindow::create_toolbox()
{

}

void MainWindow::about()
{
    QMessageBox::about(this, tr("About Knittr"),
                       tr("Simply the <b>best</b> knitting utility "
                          "software out there."));
}
