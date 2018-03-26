SOURCES += \
    main.cpp \
    mainwindow.cpp \
    appweb.cpp \
    dbmanager.cpp \
    qdownloader.cpp \
    appgalerie.cpp \
    dataimg.cpp \
    configwindow.cpp

FORMS += \
    mainwindow.ui \
    appweb.ui \
    appgalerie.ui \
    configwindow.ui

HEADERS += \
    mainwindow.h \
    appweb.h \
    dbmanager.h \
    qdownloader.h \
    appgalerie.h \
    dataimg.h \
    configwindow.h

QT += \
    widgets \
    webenginewidgets \
    sql \
    network

RESOURCES += \
    imagebouton.qrc
