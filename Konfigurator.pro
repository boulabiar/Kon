# -------------------------------------------------
# Project created by QtCreator 2009-07-14T03:31:55
# -------------------------------------------------
QT += svg \
    dbus
TARGET = Konfigurator
TEMPLATE = app
SOURCES += main.cpp \
    widget.cpp \
    connector.cpp \
    node.cpp \
    devicegraphicwidget.cpp \
    device.cpp \
    subdevice.cpp
HEADERS += widget.h \
    connector.h \
    node.h \
    devicegraphicwidget.h \
    device.h \
    subdevice.h
FORMS += widget.ui
OTHER_FILES += deviceElements.svg
