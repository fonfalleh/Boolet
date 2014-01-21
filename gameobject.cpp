#include "gameobject.h"

GameObject::GameObject(int x, int y, int r):
    px(x), py(y), radius(r)
{

}

void GameObject::move(int x, int y)
{
     px += x;
     py += y;
}


void GameObject::setPos(int x, int y)
{
    px = x;
    py = y;
}


int GameObject::getX()
{
    return px;
}

int GameObject::getY()
{
    return py;
}

int GameObject::getRadius()
{
    return radius;
}
