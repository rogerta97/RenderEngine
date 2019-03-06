#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "rendersettings.h"
#include "transformwidget.h"
#include "openglwidget.h"
#include "entitymanagerwidget.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    uiMainWindow(new Ui::MainWindow)
{
    uiMainWindow->setupUi(this);

    // All tab positions on top of the docking area
    setTabPosition(Qt::AllDockWidgetAreas, QTabWidget::TabPosition::North);

    // Add render widget
    renderSettings = new RenderSettings();
    uiMainWindow->RenderDock->setWidget(renderSettings);

    // Add transform widget
    transformWidget = new TransformWidget();
    uiMainWindow->InspectorDock->setWidget(transformWidget);

    // Add entity widget
    entityManagerWidget = new EntityManagerWidget();
    uiMainWindow->HierarchyDock->setWidget(entityManagerWidget);

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



