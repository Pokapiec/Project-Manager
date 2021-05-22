QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    gui/mainwindow.cpp \
    gui/panel_pracownika.cpp \
    gui/zalogowany_kierownik.cpp \
    main.cpp \
    uml/bonusowewynagrodzenie.cpp \
    uml/budzet.cpp \
    uml/caplikacja.cpp \
    uml/grafik.cpp \
    uml/kierownik.cpp \
    uml/klient.cpp \
    uml/ksiegowa.cpp \
    uml/nadprojektem.cpp \
    uml/organizacyjna.cpp \
    uml/postepypracy.cpp \
    uml/praca.cpp \
    uml/pracownik.cpp \
    uml/programista.cpp \
    uml/projekt.cpp \
    uml/uzytkownik.cpp \
    uml/zespol.cpp

HEADERS += \
    gui/mainwindow.h \
    gui/panel_pracownika.h \
    gui/zalogowany_kierownik.h \
    uml/bonusowewynagrodzenie.h \
    uml/budzet.h \
    uml/caplikacja.h \
    uml/grafik.h \
    uml/kierownik.h \
    uml/klient.h \
    uml/ksiegowa.h \
    uml/nadprojektem.h \
    uml/organizacyjna.h \
    uml/postepypracy.h \
    uml/praca.h \
    uml/pracownik.h \
    uml/programista.h \
    uml/projekt.h \
    uml/uzytkownik.h \
    uml/zespol.h




FORMS += \
    mainwindow.ui \
    panel_pracownika.ui \
    zalogowany_kierownik.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    StyleBack.qrc
