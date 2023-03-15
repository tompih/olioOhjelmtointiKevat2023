QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

win32: LIBS += -L$$PWD/../DLLKotitehtava1Jatko/build/debug/ -lDLLKotitehtava1Jatko

INCLUDEPATH += $$PWD/../DLLKotitehtava1Jatko
DEPENDPATH += $$PWD/../DLLKotitehtava1Jatko

win32: LIBS += -L$$PWD/../DLL_GUI/build/debug/ -lDLL_GUI

INCLUDEPATH += $$PWD/../DLL_GUI
DEPENDPATH += $$PWD/../DLL_GUI
