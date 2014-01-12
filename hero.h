#ifndef HERO_H
#define HERO_H

#include <iostream>

class Hero
{
public:
    Hero(int, int);
    void move(int, int);
    void readInput();
private:
    int pX;
    int pY;
};

#endif // HERO_H
