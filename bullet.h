#ifndef BULLET_H
#define BULLET_H

#include "gameobject.h"

class Bullet : public GameObject
{
public:
    Bullet(int, int);
    virtual ~Bullet();
    virtual void update(Scene*);
private:
};

#endif // BULLET_H
