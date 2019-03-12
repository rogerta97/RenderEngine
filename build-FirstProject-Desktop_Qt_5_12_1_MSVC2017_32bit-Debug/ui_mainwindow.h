/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "openglwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSave_Scene;
    QAction *actionOpen_Scene;
    QAction *actionExit;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    openglwidget *openGLWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *HierarchyDock;
    QWidget *dockWidgetContents_7;
    QDockWidget *ProjectDock;
    QWidget *dockWidgetContents_8;
    QDockWidget *InspectorDock;
    QWidget *dockWidgetContents_9;
    QDockWidget *RenderDock;
    QWidget *dockWidgetContents_10;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(872, 590);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        actionSave_Scene = new QAction(MainWindow);
        actionSave_Scene->setObjectName(QString::fromUtf8("actionSave_Scene"));
        actionOpen_Scene = new QAction(MainWindow);
        actionOpen_Scene->setObjectName(QString::fromUtf8("actionOpen_Scene"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        openGLWidget = new openglwidget(centralWidget);
        openGLWidget->setObjectName(QString::fromUtf8("openGLWidget"));

        horizontalLayout->addWidget(openGLWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 872, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        HierarchyDock = new QDockWidget(MainWindow);
        HierarchyDock->setObjectName(QString::fromUtf8("HierarchyDock"));
        dockWidgetContents_7 = new QWidget();
        dockWidgetContents_7->setObjectName(QString::fromUtf8("dockWidgetContents_7"));
        HierarchyDock->setWidget(dockWidgetContents_7);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), HierarchyDock);
        ProjectDock = new QDockWidget(MainWindow);
        ProjectDock->setObjectName(QString::fromUtf8("ProjectDock"));
        dockWidgetContents_8 = new QWidget();
        dockWidgetContents_8->setObjectName(QString::fromUtf8("dockWidgetContents_8"));
        ProjectDock->setWidget(dockWidgetContents_8);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(8), ProjectDock);
        InspectorDock = new QDockWidget(MainWindow);
        InspectorDock->setObjectName(QString::fromUtf8("InspectorDock"));
        dockWidgetContents_9 = new QWidget();
        dockWidgetContents_9->setObjectName(QString::fromUtf8("dockWidgetContents_9"));
        InspectorDock->setWidget(dockWidgetContents_9);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), InspectorDock);
        RenderDock = new QDockWidget(MainWindow);
        RenderDock->setObjectName(QString::fromUtf8("RenderDock"));
        dockWidgetContents_10 = new QWidget();
        dockWidgetContents_10->setObjectName(QString::fromUtf8("dockWidgetContents_10"));
        RenderDock->setWidget(dockWidgetContents_10);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), RenderDock);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionSave_Scene);
        menuFile->addAction(actionOpen_Scene);
        menuFile->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSave_Scene->setText(QApplication::translate("MainWindow", "Save Scene", nullptr));
        actionOpen_Scene->setText(QApplication::translate("MainWindow", "Open Scene", nullptr));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        HierarchyDock->setWindowTitle(QApplication::translate("MainWindow", "Hierarchy", nullptr));
        ProjectDock->setWindowTitle(QApplication::translate("MainWindow", "Project", nullptr));
        InspectorDock->setWindowTitle(QApplication::translate("MainWindow", "Inspector", nullptr));
        RenderDock->setWindowTitle(QApplication::translate("MainWindow", "Render", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
