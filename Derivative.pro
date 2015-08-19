QT +=core gui widgets network

TEMPLATE = lib

FORMS += \
    register.ui \
    license.ui

HEADERS += \
    register.h \
    crypt.h \
    checksite.h \
    registered.h \
    license.h

SOURCES += \
    register.cpp \
    crypt.cpp \
    checksite.cpp \
    registered.cpp \
    license.cpp
OTHER_FILES += \
     derivative.pri
##derivative
#!include("derivative.pri") {
#                error("Unable to include derivative License key manager.")
#        }
#XmlPutGet
  !include("QXmlPutGet/Qxmlputget.pri") {
  error("Unable to include Fervor autoupdater.")
}
