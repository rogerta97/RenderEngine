#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "rendersettings.h"
#include "transformwidget.h"
#include "entitymanagerwidget.h"
#include "renderwindow.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    uiMainWindow(new Ui::MainWindow)
{
    uiMainWindow->setupUi(this);

    // All tab positions on top of the docking area
    setTabPosition(Qt::AllDockWidgetAreas, QTabWidget::TabPosition::North);

    // Add transform widget
    transformWidget = new TransformWidget();
    uiMainWindow->InspectorD->setWidget(transformWidget);

    // Add entity widget
    entityManagerWidget = new EntityManagerWidget();
    uiMainWindow->HierarchyD->setWidget(entityManagerWidget);

    // Add render window
    render_window = new RenderWindow();
    uiMainWindow->RenderingOutput->setWidget(render_window);

    entityManagerWidget->render_window = render_window;
    transformWidget->render_window = render_window;
    render_window->transformWidget = transformWidget;

}

MainWindow::~MainWindow()
{
    delete uiMainWindow;
    delete renderSettings;
    delete transformWidget;
    delete entityManagerWidget;
}

void MainWindow::openProject()
{
    printf("Open the project");
}

void MainWindow::saveProject()
{
     printf("Save the project");
}

void MainWindow::exit()
{
     printf("Exit program");
}



