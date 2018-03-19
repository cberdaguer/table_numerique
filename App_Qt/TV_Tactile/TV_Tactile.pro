SOURCES += \
    main.cpp \
    mainwindow.cpp \
    appweb.cpp \
    dbmanager.cpp \
    qdownloader.cpp \
    appgalerie.cpp \
    dataimg.cpp

FORMS += \
    mainwindow.ui \
    appweb.ui \
    appgalerie.ui

HEADERS += \
    mainwindow.h \
    appweb.h \
    dbmanager.h \
    qdownloader.h \
    appgalerie.h \
    dataimg.h

QT += \
    widgets \
    webenginewidgets \
    sql \
    network

RESOURCES += \
    imagebouton.qrc
