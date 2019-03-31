#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
    class MainWindow;
}

class RenderSettings;
class TransformWidget;
class EntityManagerWidget;
class RenderWindow;

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

    RenderSettings* renderSettings = nullptr;
    TransformWidget* transformWidget = nullptr;
    EntityManagerWidget* entityManagerWidget = nullptr;
    RenderWindow* render_window = nullptr;

};

#endif // MAINWINDOW_H
