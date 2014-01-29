#ifndef HERO_H
#define HERO_H

#include "gameobject.h"
#include <SFML/Window.hpp>

class Hero : public GameObject
{
public:
    Hero(int x, int y);
    void move(int, int);
    void fire();
    void readInput();
    virtual void update(Scene*);
private:
};

#endif // HERO_H
