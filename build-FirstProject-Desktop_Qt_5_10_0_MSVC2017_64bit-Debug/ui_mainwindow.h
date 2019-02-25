/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
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
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(872, 590);
        MainWindow->setStyleSheet(QLatin1String("QToolTip{\n"
"  color:#ffffff;\n"
"  background-color:palette(base);\n"
"  border:1px solid palette(highlight);\n"
"  border-radius:4px;\n"
"}\n"
"QStatusBar{\n"
"  background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1,stop:0 rgba(25,25,25,127),stop:1 rgba(53,53,53,75));\n"
"  color:palette(mid);\n"
"}\n"
"QMenuBar{\n"
"  background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1,stop:0 rgba(25,25,25,127),stop:1 rgba(53,53,53,75));\n"
"  border-bottom:2px solid rgba(25,25,25,75);\n"
"}\n"
"QMenuBar::item{\n"
"  spacing:2px;\n"
"  padding:3px 4px;\n"
"  background:transparent;\n"
"}\n"
"QMenuBar::item:selected{\n"
"  background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1,stop:0 rgba(106,106,106,255),stop:1 rgba(106,106,106,75));\n"
"  border-left:1px solid rgba(106,106,106,127);\n"
"  border-right:1px solid rgba(106,106,106,127);\n"
"}\n"
"QMenuBar::item:pressed{\n"
"  background-color:palette(highlight);\n"
"  border-left:1px solid rgba(25,25,25,127);\n"
"  border-right:1px solid rgba(25,25,25,127);\n"
"}\n"
"QMenu{\n"
""
                        "  background-color:palette(window);\n"
"  border:1px solid palette(shadow);\n"
"}\n"
"QMenu::item{\n"
"  padding:3px 25px 3px 25px;\n"
"  border:1px solid transparent;\n"
"}\n"
"QMenu::item:disabled{\n"
"  background-color:rgba(35,35,35,127);\n"
"  color:palette(disabled);\n"
"}\n"
"QMenu::item:selected{\n"
"  border-color:rgba(147,191,236,127);\n"
"  background:palette(highlight);\n"
"}\n"
"QMenu::icon:checked{\n"
"  background-color:qlineargradient(x1:0,y1:1,x2:0,y2:0,stop:0 rgba(25,25,25,127),stop:1 rgba(53,53,53,75));\n"
"  border:1px solid palette(highlight);\n"
"  border-radius:2px;\n"
"}\n"
"QMenu::separator{\n"
"  height:1px;\n"
"  background:palette(alternate-base);\n"
"  margin-left:5px;\n"
"  margin-right:5px;\n"
"}\n"
"QMenu::indicator{\n"
"  width:18px;\n"
"  height:18px;\n"
"}\n"
"QMenu::indicator:non-exclusive:checked{\n"
"  image:url(:/darkstyle/icon_checkbox_checked.png);\n"
"  padding-left:2px;\n"
"}\n"
"QMenu::indicator:non-exclusive:unchecked{\n"
"  image:url(:/darkstyle/icon_checkbox_unche"
                        "cked.png);\n"
"  padding-left:2px;\n"
"}\n"
"QMenu::indicator:exclusive:checked{\n"
"  image:url(:/darkstyle/icon_radiobutton_checked.png);\n"
"  padding-left:2px;\n"
"}\n"
"QMenu::indicator:exclusive:unchecked{\n"
"  image:url(:/darkstyle/icon_radiobutton_unchecked.png);\n"
"  padding-left:2px;\n"
"}\n"
"QToolBar::top{\n"
"  background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1,stop:0 rgba(25,25,25,127),stop:1 rgba(53,53,53,75));\n"
"  border-bottom:3px solid qlineargradient(x1:0,y1:0,x2:0,y2:1,stop:0 rgba(25,25,25,127),stop:1 rgba(53,53,53,75));\n"
"}\n"
"QToolBar::bottom{\n"
"  background-color:qlineargradient(x1:0,y1:1,x2:0,y2:0,stop:0 rgba(25,25,25,127),stop:1 rgba(53,53,53,75));\n"
"  border-top:3px solid qlineargradient(x1:0,y1:1,x2:0,y2:0,stop:0 rgba(25,25,25,127),stop:1 rgba(53,53,53,75));\n"
"}\n"
"QToolBar::left{\n"
"  background-color:qlineargradient(x1:0,y1:0,x2:1,y2:0,stop:0 rgba(25,25,25,127),stop:1 rgba(53,53,53,75));\n"
"  border-right:3px solid qlineargradient(x1:0,y1:0,x2:1,y2:0,stop:0 rgba(2"
                        "5,25,25,127),stop:1 rgba(53,53,53,75));\n"
"}\n"
"QToolBar::right{\n"
"  background-color:qlineargradient(x1:1,y1:0,x2:0,y2:0,stop:0 rgba(25,25,25,127),stop:1 rgba(53,53,53,75));\n"
"  border-left:3px solid qlineargradient(x1:1,y1:0,x2:0,y2:0,stop:0 rgba(25,25,25,127),stop:1 rgba(53,53,53,75));\n"
"}\n"
"QMainWindow::separator{\n"
"  width:6px;\n"
"  height:5px;\n"
"  padding:2px;\n"
"}\n"
"QSplitter::handle:horizontal{\n"
"  width:10px;\n"
"}\n"
"QSplitter::handle:vertical{\n"
"  height:10px;\n"
"}\n"
"QMainWindow::separator:hover,QSplitter::handle:hover{\n"
"  background:palette(highlight);\n"
"}\n"
"QDockWidget::title{\n"
"  padding:4px;\n"
"  background-color:qlineargradient(x1:0,y1:1,x2:0,y2:0,stop:0 rgba(25,25,25,127),stop:1 rgba(53,53,53,75));\n"
"  border:1px solid rgba(25,25,25,75);\n"
"  border-bottom:2px solid rgba(25,25,25,75);\n"
"}\n"
"QDockWidget{\n"
"  titlebar-close-icon:url(:/darkstyle/icon_close.png);\n"
"  titlebar-normal-icon:url(:/darkstyle/icon_restore.png);\n"
"}\n"
"QDockWidget::close-"
                        "button,QDockWidget::float-button{\n"
"  subcontrol-position:top right;\n"
"  subcontrol-origin:margin;\n"
"  position:absolute;\n"
"  top:3px;\n"
"  bottom:0px;\n"
"  width:20px;\n"
"  height:20px;\n"
"}\n"
"QDockWidget::close-button{\n"
"  right:3px;\n"
"}\n"
"QDockWidget::float-button{\n"
"  right:25px;\n"
"}\n"
"QGroupBox{\n"
"  background-color:rgba(66,66,66,50%);\n"
"  margin-top:27px;\n"
"  border:1px solid rgba(25,25,25,127);\n"
"  border-radius:4px;\n"
"}\n"
"QGroupBox::title{\n"
"  subcontrol-origin:margin;\n"
"  subcontrol-position:left top;\n"
"  padding:4px 6px;\n"
"  margin-left:3px;\n"
"  background-color:qlineargradient(x1:0,y1:1,x2:0,y2:0,stop:0 rgba(25,25,25,127),stop:1 rgba(53,53,53,75));\n"
"  border:1px solid rgba(25,25,25,75);\n"
"  border-bottom:2px solid rgb(127,127,127);\n"
"  border-top-left-radius:4px;\n"
"  border-top-right-radius:4px;\n"
"}\n"
"QTabWidget::pane{\n"
"  background-color:rgba(66,66,66,50%);\n"
"  border-top:1px solid rgba(25,25,25,50%);\n"
"}\n"
"QTabWidget::tab-bar{\n"
""
                        "  left:3px;\n"
"  top:1px;\n"
"}\n"
"QTabBar{\n"
"  background-color:transparent;\n"
"  qproperty-drawBase:0;\n"
"  border-bottom:1px solid rgba(25,25,25,50%);\n"
"}\n"
"QTabBar::tab{\n"
"  padding:4px 6px;\n"
"  background-color:qlineargradient(x1:0,y1:1,x2:0,y2:0,stop:0 rgba(25,25,25,127),stop:1 rgba(53,53,53,75));\n"
"  border:1px solid rgba(25,25,25,75);\n"
"  border-top-left-radius:4px;\n"
"  border-top-right-radius:4px;\n"
"}\n"
"QTabBar::tab:selected,QTabBar::tab:hover{\n"
"  background-color:qlineargradient(x1:0,y1:0,x2:0,y2:1,stop:0 rgba(53,53,53,127),stop:1 rgba(66,66,66,50%));\n"
"  border-bottom-color:rgba(66,66,66,75%);\n"
"}\n"
"QTabBar::tab:selected{\n"
"  border-bottom:2px solid palette(highlight);\n"
"}\n"
"QTabBar::tab::selected:disabled{\n"
"  border-bottom:2px solid rgb(127,127,127);\n"
"}\n"
"QTabBar::tab:!selected{\n"
"  margin-top:2px;\n"
"}\n"
"QCheckBox::indicator{\n"
"  width:18px;\n"
"  height:18px;\n"
"}\n"
"QCheckBox::indicator:checked,QTreeView::indicator:checked,QTableView::indic"
                        "ator:checked,QGroupBox::indicator:checked{\n"
"  image:url(:/darkstyle/icon_checkbox_checked.png);\n"
"}\n"
"QCheckBox::indicator:checked:pressed,QTreeView::indicator:checked:pressed,QTableView::indicator:checked:pressed,QGroupBox::indicator:checked:pressed{\n"
"  image:url(:/darkstyle/icon_checkbox_checked_pressed.png);\n"
"}\n"
"QCheckBox::indicator:checked:disabled,QTreeView::indicator:checked:disabled,QTableView::indicator:checked:disabled,QGroupBox::indicator:checked:disabled{\n"
"  image:url(:/darkstyle/icon_checkbox_checked_disabled.png);\n"
"}\n"
"QCheckBox::indicator:unchecked,QTreeView::indicator:unchecked,QTableView::indicator:unchecked,QGroupBox::indicator:unchecked{\n"
"  image:url(:/darkstyle/icon_checkbox_unchecked.png);\n"
"}\n"
"QCheckBox::indicator:unchecked:pressed,QTreeView::indicator:unchecked:pressed,QTableView::indicator:unchecked:pressed,QGroupBox::indicator:unchecked:pressed{\n"
"  image:url(:/darkstyle/icon_checkbox_unchecked_pressed.png);\n"
"}\n"
"QCheckBox::indicator:unchecked:disa"
                        "bled,QTreeView::indicator:unchecked:disabled,QTableView::indicator:unchecked:disabled,QGroupBox::indicator:unchecked:disabled{\n"
"  image:url(:/darkstyle/icon_checkbox_unchecked_disabled.png);\n"
"}\n"
"QCheckBox::indicator:indeterminate,QTreeView::indicator:indeterminate,QTableView::indicator:indeterminate,QGroupBox::indicator:indeterminate{\n"
"  image:url(:/darkstyle/icon_checkbox_indeterminate.png);\n"
"}\n"
"QCheckBox::indicator:indeterminate:pressed,QTreeView::indicator:indeterminate:pressed,QTableView::indicator:indeterminate:pressed,QGroupBox::indicator:indeterminate:pressed{\n"
"  image:url(:/darkstyle/icon_checkbox_indeterminate_pressed.png);\n"
"}\n"
"QCheckBox::indicator:indeterminate:disabled,QTreeView::indicator:indeterminate:disabled,QTableView::indicator:indeterminate:disabled,QGroupBox::indicator:indeterminate:disabled{\n"
"  image:url(:/darkstyle/icon_checkbox_indeterminate_disabled.png);\n"
"}\n"
"QRadioButton::indicator{\n"
"  width:18px;\n"
"  height:18px;\n"
"}\n"
"QRadioButton::indicato"
                        "r:checked{\n"
"  image:url(:/darkstyle/icon_radiobutton_checked.png);\n"
"}\n"
"QRadioButton::indicator:checked:pressed{\n"
"  image:url(:/darkstyle/icon_radiobutton_checked_pressed.png);\n"
"}\n"
"QRadioButton::indicator:checked:disabled{\n"
"  image:url(:/darkstyle/icon_radiobutton_checked_disabled.png);\n"
"}\n"
"QRadioButton::indicator:unchecked{\n"
"  image:url(:/darkstyle/icon_radiobutton_unchecked.png);\n"
"}\n"
"QRadioButton::indicator:unchecked:pressed{\n"
"  image:url(:/darkstyle/icon_radiobutton_unchecked_pressed.png);\n"
"}\n"
"QRadioButton::indicator:unchecked:disabled{\n"
"  image:url(:/darkstyle/icon_radiobutton_unchecked_disabled.png);\n"
"}\n"
"QTreeView, QTableView{\n"
"  alternate-background-color:palette(window);\n"
"  background:palette(base);\n"
"}\n"
"QTreeView QHeaderView::section, QTableView QHeaderView::section{\n"
"  background-color:qlineargradient(x1:0,y1:1,x2:0,y2:0,stop:0 rgba(25,25,25,127),stop:1 rgba(53,53,53,75));\n"
"  border-style:none;\n"
"  border-bottom:1px solid palette("
                        "dark);\n"
"  padding-left:5px;\n"
"  padding-right:5px;\n"
"}\n"
"QTreeView::item:selected:disabled, QTableView::item:selected:disabled{\n"
"  background:rgb(80,80,80);\n"
"}\n"
"QTreeView::branch{\n"
"  background-color:palette(base);\n"
"}\n"
"QTreeView::branch:has-siblings:!adjoins-item{\n"
"  border-image:url(:/darkstyle/icon_vline.png) 0;\n"
"}\n"
"QTreeView::branch:has-siblings:adjoins-item{\n"
"  border-image:url(:/darkstyle/icon_branch_more.png) 0;\n"
"}\n"
"QTreeView::branch:!has-children:!has-siblings:adjoins-item{\n"
"  border-image:url(:/darkstyle/icon_branch_end.png) 0;\n"
"}\n"
"QTreeView::branch:has-children:!has-siblings:closed,\n"
"QTreeView::branch:closed:has-children:has-siblings{\n"
"  border-image:none;\n"
"  image:url(:/darkstyle/icon_branch_closed.png);\n"
"}\n"
"QTreeView::branch:open:has-children:!has-siblings,\n"
"QTreeView::branch:open:has-children:has-siblings{\n"
"  border-image:none;\n"
"  image:url(:/darkstyle/icon_branch_open.png);\n"
"}\n"
"QScrollBar:vertical{\n"
"  background"
                        ":palette(base);\n"
"  border-top-right-radius:2px;\n"
"  border-bottom-right-radius:2px;\n"
"  width:16px;\n"
"  margin:0px;\n"
"}\n"
"QScrollBar::handle:vertical{\n"
"  background-color:palette(alternate-base);\n"
"  border-radius:2px;\n"
"  min-height:20px;\n"
"  margin:2px 4px 2px 4px;\n"
"}\n"
"QScrollBar::handle:vertical:hover{\n"
"  background-color:palette(highlight);\n"
"}\n"
"QScrollBar::add-line:vertical{\n"
"  background:none;\n"
"  height:0px;\n"
"  subcontrol-position:right;\n"
"  subcontrol-origin:margin;\n"
"}\n"
"QScrollBar::sub-line:vertical{\n"
"  background:none;\n"
"  height:0px;\n"
"  subcontrol-position:left;\n"
"  subcontrol-origin:margin;\n"
"}\n"
"QScrollBar:horizontal{\n"
"  background:palette(base);\n"
"  height:16px;\n"
"  margin:0px;\n"
"}\n"
"QScrollBar::handle:horizontal{\n"
"  background-color:palette(alternate-base);\n"
"  border-radius:2px;\n"
"  min-width:20px;\n"
"  margin:4px 2px 4px 2px;\n"
"}\n"
"QScrollBar::handle:horizontal:hover{\n"
"  background-color:palette(highligh"
                        "t);\n"
"}\n"
"QScrollBar::add-line:horizontal{\n"
"  background:none;\n"
"  width:0px;\n"
"  subcontrol-position:bottom;\n"
"  subcontrol-origin:margin;\n"
"}\n"
"QScrollBar::sub-line:horizontal{\n"
"  background:none;\n"
"  width:0px;\n"
"  subcontrol-position:top;\n"
"  subcontrol-origin:margin;\n"
"}\n"
"QSlider::handle:horizontal{\n"
"  border-radius:4px;\n"
"  border:1px solid rgba(25,25,25,255);\n"
"  background-color:palette(alternate-base);\n"
"  min-height:20px;\n"
"  margin:0 -4px;\n"
"}\n"
"QSlider::handle:horizontal:hover{\n"
"  background:palette(highlight);\n"
"}\n"
"QSlider::add-page:horizontal{\n"
"  background:palette(base);\n"
"}\n"
"QSlider::sub-page:horizontal{\n"
"  background:palette(highlight);\n"
"}\n"
"QSlider::sub-page:horizontal:disabled{\n"
"  background:rgb(80,80,80);\n"
"}"));
        actionSave_Scene = new QAction(MainWindow);
        actionSave_Scene->setObjectName(QStringLiteral("actionSave_Scene"));
        actionOpen_Scene = new QAction(MainWindow);
        actionOpen_Scene->setObjectName(QStringLiteral("actionOpen_Scene"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        openGLWidget = new openglwidget(centralWidget);
        openGLWidget->setObjectName(QStringLiteral("openGLWidget"));

        horizontalLayout->addWidget(openGLWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 872, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        HierarchyDock = new QDockWidget(MainWindow);
        HierarchyDock->setObjectName(QStringLiteral("HierarchyDock"));
        dockWidgetContents_7 = new QWidget();
        dockWidgetContents_7->setObjectName(QStringLiteral("dockWidgetContents_7"));
        HierarchyDock->setWidget(dockWidgetContents_7);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), HierarchyDock);
        ProjectDock = new QDockWidget(MainWindow);
        ProjectDock->setObjectName(QStringLiteral("ProjectDock"));
        dockWidgetContents_8 = new QWidget();
        dockWidgetContents_8->setObjectName(QStringLiteral("dockWidgetContents_8"));
        ProjectDock->setWidget(dockWidgetContents_8);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(8), ProjectDock);
        InspectorDock = new QDockWidget(MainWindow);
        InspectorDock->setObjectName(QStringLiteral("InspectorDock"));
        dockWidgetContents_9 = new QWidget();
        dockWidgetContents_9->setObjectName(QStringLiteral("dockWidgetContents_9"));
        InspectorDock->setWidget(dockWidgetContents_9);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(2), InspectorDock);
        RenderDock = new QDockWidget(MainWindow);
        RenderDock->setObjectName(QStringLiteral("RenderDock"));
        dockWidgetContents_10 = new QWidget();
        dockWidgetContents_10->setObjectName(QStringLiteral("dockWidgetContents_10"));
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
