#-------------------------------------------------
#
# Project created by QtCreator 2019-02-20T16:52:16
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = FirstProject
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    rendersettings.cpp \
    transformwidget.cpp \
    openglwidget.cpp \
    entitymanagerwidget.cpp \
    vertexformat.cpp \
    submesh.cpp \
    mesh.cpp

HEADERS += \
        mainwindow.h \
    rendersettings.h \
    transformwidget.h \
    openglwidget.h \
    entitymanagerwidget.h \
    vertexformat.h \
    submesh.h \
    mesh.h

FORMS += \
        mainwindow.ui \
    rendersettings.ui \
    transformwidget.ui \
    entitymanagerwidget.ui


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    shader1_vert.vsh \
    shader1_frag.fsh

RESOURCES += \
    resources.qrc

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../3rdparty/Assimp/lib/ -lassimp
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../3rdparty/Assimp/lib/ -lassimpd
else:unix: LIBS += -L$$PWD/../3rdparty/Assimp/lib/ -lassimp

INCLUDEPATH += $$PWD/../3rdparty/Assimp/include
DEPENDPATH += $$PWD/../3rdparty/Assimp/include
