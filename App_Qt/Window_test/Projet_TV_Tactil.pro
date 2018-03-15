SOURCES += \
    main.cpp \
    mainwindow.cpp \
    appwindow.cpp \
    app2window.cpp \
    appgalerie.cpp \
    dbmanager.cpp \
    filedownloader.cpp \
    qdownloader.cpp

QT += widgets
QT += webenginewidgets
QT += sql
QT += network

FORMS += \
    mainwindow.ui \
    appwindow.ui \
    app2window.ui \
    appgalerie.ui

HEADERS += \
    mainwindow.h \
    appwindow.h \
    app2window.h \
    appgalerie.h \
    dbmanager.h \
    filedownloader.h \
    qdownloader.h
