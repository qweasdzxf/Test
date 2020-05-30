QT       += core gui network
QT       += sql
QT += multimedia

FORMS += \
    dbconnect.ui \
    login.ui \
    menuwidget.ui \
    addstudentwidget.ui \
    modifywidget.ui \
    register.ui \
    sortwidget.ui \
    selectwidget.ui \
    mainwidget.ui \
    timeswidget.ui

HEADERS += \
    dbconnect.h \
    login.h \
    menuwidget.h \
    addstudentwidget.h \
    modifywidget.h \
    register.h \
    sortwidget.h \
    selectwidget.h \
    mainwidget.h \
    student.h \
    timeswidget.h

SOURCES += \
    dbconnect.cpp \
    login.cpp \
    menuwidget.cpp \
    addstudentwidget.cpp \
    modifywidget.cpp \
    register.cpp \
    sortwidget.cpp \
    selectwidget.cpp \
    mainwidget.cpp \
    main.cpp \
    student.cpp \
    timeswidget.cpp

QT += widgets\
    quick

RESOURCES += \
    back.qrc

