QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    backendmanager.cpp \
    buyconfirm.cpp \
    buylose.cpp \
    connectus.cpp \
    eventmanager.cpp \
    eventwindow.cpp \
    item.cpp \
    itemmanager.cpp \
    loading.cpp \
    main.cpp \
    mainwindow.cpp \
    player.cpp \
    rankitem.cpp \
    rankitemmanager.cpp \
    start.cpp \
    uitest.cpp \
    ranking.cpp

HEADERS += \
    backendmanager.h \
    buyconfirm.h \
    buylose.h \
    connectus.h \
    eventmanager.h \
    eventwindow.h \
    item.h \
    itemmanager.h \
    loading.h \
    mainwindow.h \
    player.h \
    rankitem.h \
    rankitemmanager.h \
    start.h \
    uitest.h \
    ranking.h


FORMS += \
    buyconfirm.ui \
    buylose.ui \
    connectus.ui \
    loading.ui \
    mainwindow.ui \
    start.ui \
    uitest.ui \
    ranking.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    items.txt

RESOURCES += \
    txtResource.qrc
