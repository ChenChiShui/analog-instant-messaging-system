QT       += core gui sql
QT +=xml
QT += network
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    database.cpp \
    group.cpp \
    login.cpp \
    loginFind.cpp \
    main.cpp \
    mainwindow.cpp \
    messageChat.cpp \
    newFriend.cpp \
    pwdChange.cpp \
    pwdFind.cpp \
    regist.cpp \
    setting.cpp \
    tabwidget.cpp \
    tells.cpp \
    widget1.cpp \
    widget2.cpp

HEADERS += \
    dataBase.h \
    group.h \
    login.h \
    loginFind.h \
    mainwindow.h \
    messageChat.h \
    newFriend.h \
    pwdChange.h \
    pwdFind.h \
    regist.h \
    setting.h \
    tabwidget.h \
    tells.h \
    widget1.h \
    widget2.h

FORMS += \
    group.ui \
    login.ui \
    loginFind.ui \
    mainwindow.ui \
    newFriend.ui \
    pwdChange.ui \
    pwdFind.ui \
    regist.ui \
    setting.ui \
    tells.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    image/background5.png \
    wbb.jpg

RESOURCES += \
    image.qrc
