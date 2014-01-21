#ifndef HERO_H
#define HERO_H

#include <iostream>
#include <SFML/Window.hpp>
#include "gameobject.h"

class Hero : public GameObject
{
public:
    Hero(int x, int y);
    void move(int, int);
    void fire();
    void readInput();
private:
};

#endif // HERO_H
