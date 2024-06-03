QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    card.cpp \
    cardnode.cpp \
    foundation.cpp \
    foundation_w.cpp \
    gameboard.cpp \
    main.cpp \
    mainwindow.cpp \
    tableau.cpp \
    tableau_w.cpp \
    waste_w.cpp

HEADERS += \
    card.h \
    cardlabelnodes.h \
    cardnode.h \
    foundation.h \
    foundation_w.h \
    gameboard.h \
    mainwindow.h \
    tableau.h \
    tableau_w.h \
    waste_w.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
