#QT -= gui
QT       += core gui

TEMPLATE = lib
DEFINES += DLL_GUI_LIBRARY
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dll_gui.cpp

HEADERS += \
    DLL_GUI_global.h \
    dll_gui.h

# Default rules for deployment.
unix {
    target.path = /usr/lib
}
!isEmpty(target.path): INSTALLS += target

FORMS += \
    dll_gui.ui
