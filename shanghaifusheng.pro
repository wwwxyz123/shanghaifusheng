QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    backendmanager.cpp \
    eventmanager.cpp \
    eventwindow.cpp \
    game.cpp \
    itemmanager.cpp \
    loading.cpp \
    loginwindow.cpp \
    main.cpp \
    mainwindow.cpp \
    player.cpp \
    ranking.cpp \
    start.cpp

HEADERS += \
    backendmanager.h \
    eventmanager.h \
    eventwindow.h \
    game.h \
    itemmanager.h \
    loading.h \
    loginwindow.h \
    mainwindow.h \
    player.h \
    ranking.h \
    start.h

FORMS += \
    loading.ui \
    mainwindow.ui \
    ranking.ui \
    start.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
