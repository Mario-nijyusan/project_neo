#-------------------------------------------------
#
# Project created by QtCreator 2016-01-31T20:42:11
#
#-------------------------------------------------

QT       += core gui

QT       += core network

QT       += sql

QTPLUGIN += qsqlmysql

QT       += multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = neoserver
TEMPLATE = app


SOURCES += main.cpp\
        neoserver.cpp \
    principal.cpp \
    mainwindow.cpp \
    modificar.cpp \
    alarmas.cpp \
    eliminar1.cpp \
    eliminar2.cpp \
    informacion1.cpp \
    informacion2.cpp \
    usuario.cpp \
    usuario2.cpp

HEADERS  += neoserver.h \
    principal.h \
    mainwindow.h \
    modificar.h \
    alarmas.h \
    eliminar1.h \
    eliminar2.h \
    informacion1.h \
    informacion2.h \
    usuario.h \
    usuario2.h

FORMS    += neoserver.ui \
    principal.ui \
    mainwindow.ui \
    modificar.ui \
    alarmas.ui \
    eliminar1.ui \
    eliminar2.ui \
    informacion1.ui \
    informacion2.ui \
    usuario.ui \
    usuario2.ui

RESOURCES += \
    imagen.qrc
