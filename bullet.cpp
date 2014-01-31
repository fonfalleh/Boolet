#include "bullet.h"

Bullet::Bullet(int x, int y):
    GameObject(x, y, 5)
{
}

Bullet::Bullet(int x, int y, int vx, int vy):
    GameObject(x, y, vx, vy, 5)
{
}

Bullet::~Bullet()
{
    0;
}

void Bullet::update(Scene *)
{
    //TODO something clever.
    move();
}
