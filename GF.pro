QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

INCLUDEPATH += "C:/Program Files (x86)/Visual Leak Detector/include/"
LIBS      += -L"C:/Program Files (x86)/Visual Leak Detector/lib/Win64"

SOURCES += \
    actionExtended.cpp \
    actionSimple.cpp \
    extended.cpp \
    extendedBuilding.cpp \
    main.cpp \
    mainwindow.cpp \
    simple.cpp \
    simpleBuilding.cpp

HEADERS += \
    actionExtended.h \
    actionSimple.h \
    extended.h \
    extendedBuilding.h \
    mainwindow.h \
    simple.h \
    simpleBuilding.h

FORMS += \
    actionExtended.ui \
    actionSimple.ui \
    extended.ui \
    mainwindow.ui \
    simple.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
