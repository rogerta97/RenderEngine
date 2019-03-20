#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <openglwidget.h>

namespace Ui {
    class MainWindow;
}

class RenderSettings;
class TransformWidget;
class EntityManagerWidget;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public slots:
    void openProject();
    void saveProject();
    void exit();

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *uiMainWindow;

    RenderSettings* renderSettings;
    TransformWidget* transformWidget;
    EntityManagerWidget* entityManagerWidget;

};

#endif // MAINWINDOW_H
