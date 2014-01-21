TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    hero.cpp \
    drawhandler.cpp \
    bullet.cpp \
    gameobject.cpp \
    utils.cpp

LIBS += -L"/home/user/Projects/SFML/lib"

CONFIG(release, debug|release): LIBS += -lsfml-audio -lsfml-graphics -lsfml-network -lsfml-window -lsfml-system
CONFIG(debug, debug|release): LIBS += -lsfml-audio -lsfml-graphics -lsfml-network -lsfml-window -lsfml-system

INCLUDEPATH += "/home/user/Projects/SFML/include"
DEPENDPATH += "/home/user/Projects/SFML/include"

HEADERS += \
    hero.h \
    drawhandler.h \
    bullet.h \
    gameobject.h \
    utils.h

OTHER_FILES += \
    some text.txt
