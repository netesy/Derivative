QT +=core gui widgets network webkitwidgets

FORMS += \
    register.ui

HEADERS += \
    register.h \
    crypt.h \
    checksite.h

SOURCES += \
    register.cpp \
    crypt.cpp \
    checksite.cpp
#derivative
#!include("derivative.pri") {
#                error("Unable to include derivative License key manager.")
#        }
