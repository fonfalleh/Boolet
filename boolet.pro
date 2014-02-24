TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    hero.cpp \
    drawhandler.cpp \
    bullet.cpp \
    gameobject.cpp \
    utils.cpp \
    scene.cpp \
    cooldown.cpp \
    baddy.cpp


CONFIG(release, debug|release): LIBS += -lsfml-audio -lsfml-graphics -lsfml-network -lsfml-window -lsfml-system
CONFIG(debug, debug|release): LIBS += -lsfml-audio -lsfml-graphics -lsfml-network -lsfml-window -lsfml-system

HEADERS += \
    hero.h \
    drawhandler.h \
    bullet.h \
    gameobject.h \
    utils.h \
    scene.h \
    cooldown.h \
    baddy.h
