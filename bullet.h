#ifndef BULLET_H
#define BULLET_H

#include "gameobject.h"

class Bullet : public GameObject
{
public:
    Bullet(int, int);
    void update();
private:
    int radius;
};

#endif // BULLET_H
