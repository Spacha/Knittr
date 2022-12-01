#include "main_window.h"
#include "pattern_scene.h"

#include <QtWidgets>

MainWindow::MainWindow()
{
    createActions();
    //createToolbox();
    createMenus();
    createToolbars();

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
    m_toolbox->setMinimumSize(QSize(200, 0));
    auto *toolbox_layout = new QVBoxLayout(m_toolbox);
    toolbox_layout->setAlignment(Qt::AlignTop);

    // add a test label
    auto *test_label = new QLabel(m_toolbox);
    test_label->setText("Test label");
    toolbox_layout->addWidget(test_label);

    m_splitter->addWidget(m_toolbox);

    // initialize pattern scene
    m_scene = new PatternScene(this);
    m_scene->setSceneRect(QRectF(0, 0, 5000, 5000));

    m_view = new QGraphicsView(m_scene);
    m_splitter->addWidget(m_view);

    // initialize status bar
    m_statusbar = new QStatusBar(this);
    setStatusBar(m_statusbar);

    // initialize window
    setUnifiedTitleAndToolBarOnMac(true);
    setWindowTitle(tr("Knittr"));
}

void MainWindow::createActions()
{

}

void MainWindow::createToolbox()
{

}

void MainWindow::createMenus()
{

}

void MainWindow::createToolbars()
{

}
