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

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSave_Scene;
    QAction *actionOpen_Scene;
    QAction *actionExit;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QDockWidget *RenderingDock;
    QWidget *dockWidgetContents_11;
    QDockWidget *InspectorD;
    QWidget *dockWidgetContents_12;
    QDockWidget *HierarchyD;
    QWidget *dockWidgetContents_13;
    QDockWidget *RenderingOutput;
    QWidget *dockWidgetContents_3;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *ProjectD;
    QWidget *dockWidgetContents_8;

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
        RenderingDock = new QDockWidget(centralWidget);
        RenderingDock->setObjectName(QString::fromUtf8("RenderingDock"));
        RenderingDock->setFloating(false);
        dockWidgetContents_11 = new QWidget();
        dockWidgetContents_11->setObjectName(QString::fromUtf8("dockWidgetContents_11"));
        InspectorD = new QDockWidget(dockWidgetContents_11);
        InspectorD->setObjectName(QString::fromUtf8("InspectorD"));
        InspectorD->setGeometry(QRect(720, 0, 131, 241));
        dockWidgetContents_12 = new QWidget();
        dockWidgetContents_12->setObjectName(QString::fromUtf8("dockWidgetContents_12"));
        InspectorD->setWidget(dockWidgetContents_12);
        HierarchyD = new QDockWidget(dockWidgetContents_11);
        HierarchyD->setObjectName(QString::fromUtf8("HierarchyD"));
        HierarchyD->setGeometry(QRect(0, 0, 181, 421));
        HierarchyD->setFloating(false);
        dockWidgetContents_13 = new QWidget();
        dockWidgetContents_13->setObjectName(QString::fromUtf8("dockWidgetContents_13"));
        HierarchyD->setWidget(dockWidgetContents_13);
        RenderingOutput = new QDockWidget(dockWidgetContents_11);
        RenderingOutput->setObjectName(QString::fromUtf8("RenderingOutput"));
        RenderingOutput->setGeometry(QRect(180, 0, 541, 421));
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QString::fromUtf8("dockWidgetContents_3"));
        RenderingOutput->setWidget(dockWidgetContents_3);
        RenderingDock->setWidget(dockWidgetContents_11);

        horizontalLayout->addWidget(RenderingDock);

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
        ProjectD = new QDockWidget(MainWindow);
        ProjectD->setObjectName(QString::fromUtf8("ProjectD"));
        dockWidgetContents_8 = new QWidget();
        dockWidgetContents_8->setObjectName(QString::fromUtf8("dockWidgetContents_8"));
        ProjectD->setWidget(dockWidgetContents_8);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(8), ProjectD);

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
        RenderingDock->setWindowTitle(QApplication::translate("MainWindow", "Scene", nullptr));
        InspectorD->setWindowTitle(QApplication::translate("MainWindow", "Inspector", nullptr));
        HierarchyD->setWindowTitle(QApplication::translate("MainWindow", "Hierarchy", nullptr));
        RenderingOutput->setWindowTitle(QApplication::translate("MainWindow", "Rendering output", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        ProjectD->setWindowTitle(QApplication::translate("MainWindow", "Project", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
