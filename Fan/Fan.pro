QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    gaugepanel.cpp \
    main.cpp \
    mainwindow.cpp \
    fan.c

HEADERS += \
    gaugepanel.h \
    mainwindow.h \
    fan.h

FORMS += \
    mainwindow.ui

# install
target.path = $$[QT_INSTALL_EXAMPLES]/widgets/Fan
sources.files = $$SOURCES $$HEADERS $$RESOURCES $$FORMS Fan.pro
sources.path = $$[QT_INSTALL_EXAMPLES]/widgets/Fan
INSTALLS += target sources

symbian {
    TARGET.UID3 = 0xA000A64F
    include($$QT_SOURCE_TREE/examples/symbianpkgrules.pri)
}
