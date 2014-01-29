#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

// #include "scene.h" FORWARD DECLARATIONS OH MY
class Scene;
class GameObject
{
private:
    int px;
    int vx;
    int py;
    int vy;
    int radius;

public:
    GameObject(int x, int y, int r);
    virtual ~GameObject();
    int getX();
    int getY();
    int getXV();
    int getYV();
    int getRadius();
    void setPos(int, int);
    void setVel(int, int);
    void updateVel(int, int);
    void move(int, int);
    virtual void update(Scene*) = 0;
};

#endif // GAMEOBJECT_H
