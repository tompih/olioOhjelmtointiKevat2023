QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
CONFIG += c++17
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

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../randomNumberGenerator1/build/release/ -lrandomNumberGenerator1
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../randomNumberGenerator1/build/debug/ -lrandomNumberGenerator1

INCLUDEPATH += $$PWD/../randomNumberGenerator1
DEPENDPATH += $$PWD/../randomNumberGenerator1

win32: LIBS += -L$$PWD/../randomNumberFunctionInterface/build/debug/ -lrandomNumberFunctionInterface

INCLUDEPATH += $$PWD/../randomNumberFunctionInterface
DEPENDPATH += $$PWD/../randomNumberFunctionInterface
