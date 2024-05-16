QT +=sql
QT  += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
    authorization.cpp \
    dialog.cpp \
    main.cpp \
    mainwindow.cpp \
    question.cpp

HEADERS += \
    authorization.h \
    dialog.h \
    mainwindow.h \
    question.h

FORMS += \
    authorization.ui \
    dialog.ui \
    mainwindow.ui \
    question.ui

qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    ../../../Загрузки/db.sql
 unix{
 OBJECTS_DIR = .obj
 MOC_DIR = .moc
 UI_DIR = .ui
 }
